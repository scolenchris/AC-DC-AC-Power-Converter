- [English Version](./Design_EN.md)
- **由于 GitHub 对 latex 糟糕的支持，请下载后使用 typora 查看**
- 为了更好的阅读体验，可以直接点击进入我的 blog 进行阅读（公式能够显示正常）
- [blog 文章链接](https://scolenchris.top/posts/c261a60c.html)

# 一、选题背景

本课程旨在通过理论与实际相结合的方式，使学生全面掌握各种电力电子电路的结构、工作原理、控制方法、设计计算方法及实验技能。课程内容涵盖了多种变换电路的组合应用，实现电能的有效变换和控制。学生将在学习过程中，深刻体会将理论知识应用于实际场景的重要性，同时理解团队合作的价值。课程还特别注重培养学生的创新精神，激发创新意识，并通过实践增强学生的动手能力和实际操作能力。

## 目录

- [一、选题背景](#一选题背景)
  - [目录](#目录)
- [二、方案论证(设计理念)](#二方案论证设计理念)
- [三、过程论述](#三过程论述)
  - [1.相控触发电路实现分析与仿真](#1相控触发电路实现分析与仿真)
  - [2.整流电路实现分析与仿真](#2整流电路实现分析与仿真)
  - [3.降压斩波电路实现分析与仿真](#3降压斩波电路实现分析与仿真)
    - [（1）开环 Buck 电路实现分析与仿真](#1开环-buck-电路实现分析与仿真)
    - [（2）闭环 Buck 电路实现分析与仿真](#2闭环-buck-电路实现分析与仿真)
  - [4.逆变电路实现分析与仿真](#4逆变电路实现分析与仿真)
- [四、结果分析](#四结果分析)
  - [1.整流电路输出波形数据分析](#1整流电路输出波形数据分析)
  - [2.降压斩波电路输出波形数据分析](#2降压斩波电路输出波形数据分析)
    - [（1）开环 Buck 电路波形分析](#1开环-buck-电路波形分析)
    - [（2）闭环 Buck 电路波形分析](#2闭环-buck-电路波形分析)
  - [3.逆变电路输出波形数据分析](#3逆变电路输出波形数据分析)
    - [（1）开环情况](#1开环情况)
    - [（2）闭环情况](#2闭环情况)

# 二、方案论证(设计理念)

**图 1 电力电子系统电路整体框架图**

![image](https://github.com/user-attachments/assets/c74f9623-6f42-4dd4-a972-ba0d1839ed03)

如图 1 所示，本设计的主体电路由整流电路、Buck 降压斩波电路和逆变电路构成。此外，为了实现对晶闸管和 IGBT 的有效控制，还需要为每一部分电路配备相应的触发电路。输入电压为单相交流电，经过整流与滤波处理后转换为直流电，再通过降压和逆变过程重新生成交流电。

电路的输入为单相正弦交流电，因此整流电路部分采用单相桥式全控整流电路。为了消除整流电路输出电压中的交流分量，需在负载处并联一个电容，同时为了消除整流电路输出电流中的交流分量，需在负载处串联一个电感。因此负载整体构成了应该 RLC 负载。

在降压斩波部分，采用 Buck 降压斩波电路，其结构简单且控制方便。由于逆变电路的输入要求为稳定的直流电压，因此在降压斩波电路的负载端接入了和上文所提及类似的 RLC 负载。

输出为单相正弦交流电的逆变电路采用单相电压型逆变电路，为获得正弦波形的输出电压，在负载端并联电容并串联电感。

单相桥式全控整流电路的触发电路由同步采样，积分，信号调理，逻辑比较输出环节组成。为了实现触发角的调节，可使用由直流电压源和分压型滑动变阻器构成的电压可调电路，将输出电压接至比较环节的参考电压输入即可完成调节。

Buck 降压斩波电路使用矩形波发生器，使用 IGBT 作为开关器件，通过调节占空比控制输入输出电压比，同时调节矩形波频率以满足开关频率要求。

由于输出的单相正弦交流电对幅值和频率有要求，单相电压型逆变电路的 IGBT 控制采用 PWM 控制技术，通过调节信号波（正弦波）与载波（三角波）的幅值和频率来满足设计的输出电压幅值和频率以及开关频率的设计要求。

并且为了减小启动时的电流冲击和峰值，假如软启动的功能，线性变化的变阻器使电压发生线性变化来完成软起动功能。

为了实现跟踪给定斩波输出电压的效果，设计了基于输出电压的电压闭环控制器，将其运用于 Buck 斩波电路当中。

# 三、过程论述

## 1.相控触发电路实现分析与仿真

**图 2 电网电压降压电路与锁相环节仿真电路**

![image](https://github.com/user-attachments/assets/b146140f-d98e-432c-bdc5-dfab913bb8a9)

**图 3 正弦波采样至矩形波的波形仿真示意图**

![image](https://github.com/user-attachments/assets/69499ca8-420f-4b9d-b1f8-5f71c48b25c0)

对于电网输入电压的处理，首先使用运算放大器电路对电网电压进行降压，将其幅值降至约 10 伏。接着，使用施密特触发器对降压后的电压进行锁相，以精确捕捉过零信号。施密特触发器通过其滞回特性，可以稳定地将输入信号转换为对应的矩形波输出。这种处理方式不仅能够有效地降低电压幅值，还能生成与过零点相对应的矩形波信号，便于后续的信号处理和控制应用。

**图 4 积分（矩形转三角波）仿真电路**

![image](https://github.com/user-attachments/assets/72b64264-49b4-464e-8122-2911b3814acd)

**图 5 矩形波积分为三角波仿真波形示意图**

![image](https://github.com/user-attachments/assets/9307f5fa-2c66-46b5-89f4-a7b847d46ea9)

在下一环节中，对输出的矩形波进行积分，从而生成相应的三角波。在该仿真过程中，积分环节的零漂现象并不明显，因此不需要加入零漂抑制器。通过积分运算，矩形波的每一个上升和下降沿被转换为线性斜坡，形成连续的三角波形。

由积分电路的电压输出公式：

${U}_{io}={\int}_{0}^{t}\frac{1}{RC}{V}_{in}\mathrm\ dt$

且为了保证输出幅值仍为 5 伏便于后续进行信号调理，我们让：

$\mathrm{R}=1\mathrm{M}\mathrm{\Omega}$

$C=0.01uF$

如图所示，输出的三角波电压范围为 0-5 伏，符合理论计算结果。

**图 6 双反相位差分信号调理电路**

![image](https://github.com/user-attachments/assets/894fe34b-7112-42b4-9da0-e4a6ef2ccb94)

**图 7 调理电路反相位输出电压波形示意图**

![image](https://github.com/user-attachments/assets/de873b4e-f511-4a73-b69b-93616f090676)

在信号调理环节中，使用两个差分电路将原始三角波分为两个相位相差 180° 的三角波。生成的两组相反相位信号，可以分别用于控制两组晶闸管的导通。

**图 8 比较环节仿真电路**

![image](https://github.com/user-attachments/assets/c2a8c195-7bd1-448e-8d2c-6608ec2b4c66)

**图 9 三角波与给定电压比较输出示意图**

![image](https://github.com/user-attachments/assets/2fade552-b27b-4a50-89a9-e8ec50985382)

在比较环节中，信号调理的输出（三角波）与一个给定的参考电压（常数）进行比较。这个过程通常使用一个比较器来实现。当三角波的电压超过参考电压时，比较器输出一个高电平信号，否则输出低电平。这种方式产生的输出信号就是相控电压，用于控制晶闸管的导通角。

**图 10 逻辑处理仿真电路**

![image](https://github.com/user-attachments/assets/e34c7275-0bd5-41c3-bc44-cecb3c78e7ae)

**图 11 逻辑处理输出与各个同相位波形对比图**

![image](https://github.com/user-attachments/assets/c4b34a22-d271-4d5c-96b8-1e3934d0df47)

在信号调理部分，理论上比较器的输出已经是经过相控的矩形波，可以用于控制晶闸管的导通和截止。然而，增加逻辑处理的目的是为了防止比较器输出的电压同时导通整流电路中的四个晶闸管，从而避免短路。

图 11 中各条线分别代表不同的电压信号：紫色线表示外部输入的电压源波形，橙色线为采样锁相的输出电压波形，蓝色线为比较器（上一环节）的输出波形，黄色线为经过逻辑处理后输出到晶闸管的电压波形。

如果直接将蓝色波形输入晶闸管，蓝色波形会覆盖正弦波的正负部分，从而可能导致反向的晶闸管也导通，进而引发电路短路。因此，通过将蓝色波形与橙色的锁相信号进行逻辑与运算，得到黄色波形。黄色波形只包括正弦波的正半周期部分，从而有效地避免了整流电路短路的风险。

**图 12 逻辑处理后的输出波形图**

![image](https://github.com/user-attachments/assets/9383854a-e810-40b8-beb1-98e42a24ec0c)

在整流电路中，为了确保晶闸管的正确触发和整流电路的正常工作，得到的两种晶闸管触发波形如上图所示。两个不同相位的触发脉冲之间相差 90°，而相同相位的脉冲则相差 180°。这种相位关系保证了每个晶闸管在正确的时间导通，从而实现有效的整流功能，并避免了短路或导通重叠的问题。

## 2.整流电路实现分析与仿真

对应的整流电路设计指标中整流电路输出电压为

${\mathrm{U}}_{\mathrm{r}\mathrm{o}}=175\mathrm{V}$

输入电压有效值：

${\mathrm{U}}_{\mathrm{i}}={\mathrm{U}}_{2}=220\mathrm{V}$

在仿真中，我们使用了 RLC 作为负载，考虑电感很大，那么整流电路可以认为处于续流的状态，触发角 a 处给晶闸管 VT1 和 VT4 加触发脉冲使其开通，Ud=U2。负载中有电感存在使负载电流不能突变，电感对负载电流起平波作用，由于我们假设负载电感很大，负载电流 I 连续且波形近似为一水平线，因此从教材上可以得知

$\begin{array}{c}{U}*{d}=\frac{1}{\pi}{\int}_{\alpha}^{\pi +\alpha}\sqrt{2}{U}_{2}\mathrm{s}\mathrm{i}\mathrm{n}\omega t\mathrm{d}\left(\omega t\right)=\frac{2\sqrt{2}}{\pi}{U}_{2}cos\alpha =0.9{U}_{2}cos\alpha \#\left(2\right)\end{array}$

带入解得

$\mathrm{\alpha}=27.89°$

在确定触发角之后，我们可以计算出用于产生相控触发波形的比较电压。由于两相之间存在 180° 的相位差，因此在计算相对电压比时，分母为 180°。考虑到系统在整流模式下工作，触发角 α 的范围在 0° 到 90° 之间，因此分子需乘以 2。由此，比较电压所对应的占比 β 可以表示为：

$\beta =\frac{2\times \alpha}{180°}=0.3099$

将其设置到相控触发电路的滑动变阻器当中，如下图所示

**图 13 相控触发电路相位调节示意图**

![image](https://github.com/user-attachments/assets/2bd1f859-17cd-4d85-b3b5-93604e9973f1)

对于软起动时间，其为从电流不为 0 到达到最大电压的 80%所需的时间，即

${\mathrm{U}}_{\mathrm{s}\mathrm{o}\mathrm{f}\mathrm{t}\mathrm{o}}=0.8\times 175\mathrm{V}=140\mathrm{V}$

由上述公式同样可以求得，触发角为 45°，对应的相对比较电压占比为 0.5，因此我们使电阻进行线性变换，使斜率

$K=0.0738$

此时上升到 100%的时间 T=β/K=4.2 秒，因此到 80%的时间为

$\begin{array}{c}{T}_{1}=\frac{{U}_{softo}}{{U}_{d}}\times T=3.36s\#\left(3\right)\end{array}$

与预期 3.6 秒有一定的差距，通过仿真，由于有纹波的影响，可以判定最后的软起动时间在 3.4-3.8 秒之间，在误差范围内，可认为软起动符合设计要求。

## 3.降压斩波电路实现分析与仿真

### （1）开环 Buck 电路实现分析与仿真

**图 14 Buck 斩仿真电路**

![image](https://github.com/user-attachments/assets/f7f914df-81e5-4563-85dc-f8319dc3fc67)

对应的 Buck 电路的设计指标中输出电压大小为

${\mathrm{U}}_{\mathrm{b}\mathrm{o}}=70\mathrm{V}$

输入电压大小为

${\mathrm{U}}_{\mathrm{b}\mathrm{i}}={\mathrm{U}}_{\mathrm{r}\mathrm{o}}=175\mathrm{V}$

开关频率大小为

${f}_{b}=13kHz$

根据斩波电路的输出电压关系可得

$\begin{array}{c}{\alpha}_{b}=\frac{{\mathrm{U}}_{\mathrm{b}\mathrm{o}}}{{\mathrm{U}}_{\mathrm{b}\mathrm{i}}}=40\%\#\left(4\right)\end{array}$

${T}_{b}=\frac{1}{{f}_{b}}=7.6923\times {10}^{-5}s$

其中 α_b 为降压斩波电路矩形波发生器占空比，T_b 为矩形波发生器周期。将其填入到仿真电路的脉冲发生器当中，如图 15 所示

**图 15 Buck 斩波电路脉冲发生器各项数据填写**

![image](https://github.com/user-attachments/assets/6b5ac3e2-d516-4155-856b-1b221096de4c)

### （2）闭环 Buck 电路实现分析与仿真

**图 16 电压闭环 Buck 斩波电路仿真图与结构示意图**

![image](https://github.com/user-attachments/assets/28354c15-0240-4014-94d5-70e1904ddd71)

根据需求，基于开环斩波电路，我们设计了上述 PI 控制器，其中包括延时积分环节、PI 控制器环节、PI 输出转换为 PWM 环节以及输出电压采集环节。其工作原理如下：

首先，采集输出电压并将其输入到控制器中，与设定电压（70 伏）相减，得到误差信号。然后，将该误差信号分别输入到比例（P）和积分（I）环节。通过这两个环节的处理，再加上一个常量偏置值 0.12，得到 PI 控制器的输出。

接下来，将 PI 控制器的输出信号输入到限幅（saturation）环节，以防止输出超出允许范围（0%-100%）。随后，该信号被送入 PWM 模块，用于调节 PWM 信号的占空比。最终，经过放大 7 倍的处理后，该信号被输入到 IGBT 模块，从而实现电压的闭环调节。这样，通过精确控制 PWM 信号的宽度，我们能够有效地调节输出电压，使其达到预期的稳态水平。

下面我们对（P）和（I）的大小设置进行探讨。

**图 17 无积分环节时的斩波电路输出情况**

![image](https://github.com/user-attachments/assets/37683a08-57f9-4f67-bdaf-b879e99e137d)

**图 18 无积分环节时的 PI 控制器输出波形**

![image](https://github.com/user-attachments/assets/6b4021ac-d5af-45e3-88e5-aedbde052f9e)

如图，在设置积分增益 I 为 0 并调节比例增益 P 时，我们观察到系统存在稳态误差：尽管设定值为 70 伏，目前输出仅达到 51.92 伏，尚未达到预期电压。从 PI 控制器的输出看，在 4.5 秒后，输出保持不变，表明系统达到了动态平衡状态。然而，为了消除稳态误差，有必要引入积分控制器。在保持现有比例增益 P 值的情况下，通过调节积分增益 I 的值，可以有效消除稳态误差。

**图 19 电路启动 1.5 秒后加入积分环节时的斩波电压输出波形**

![image](https://github.com/user-attachments/assets/7af96925-1373-490b-b68d-6c267333601d)

**图 20 电路启动 1.5 秒后加入积分环节时的 PI 控制器输出波形**

![image](https://github.com/user-attachments/assets/120c8705-6c8b-4007-bd96-20213f724a1f)

考虑在 1.5 秒后引入积分环节。然而，从上图可以观察到，在 1.5 秒时，斩波电压的输出增长速度显著增加，电压变化率较大，这表明出现了超调现象。查看 PI 控制器的输出（如图所示），可以看到明显的超调。因此，考虑到 I 的值已经比较小，为了保证最后的稳态误差正确消除，我们不改变（I）的值，而是对积分环节的引入进行延时。由于积分环节引入过早，导致积分部分的输出过大（累计误差较大），因此考虑在 2 到 3 秒之间引入积分环节，以减少由较大误差引起的超调影响。

同时，我们注意到斩波电压输出在 5 秒时达到 71.75 伏，与目标电压 70 伏非常接近。虽然由于仿真时间的限制未能进一步观察，但我们仍然可以推测，在当前积分增益值下，可以实现对稳态误差的消除。下面对参数进行下一步优化。

**图 21 电路启动 2.25 秒后加入积分环节时的斩波电压输出波形**

![image](https://github.com/user-attachments/assets/60b04e02-83af-4d53-8bb4-234ec5449c73)

**图 22 电路启动 2.25 秒后加入积分环节时的 PI 控制器输出波形**

![image](https://github.com/user-attachments/assets/40fdef8c-ced9-4fcb-9ef3-185e8a27f33c)

如上图所示，最终确定在 2.25 秒时引入积分控制器，其中积分增益（I）设定为 0.01，比例增益（P）设定为 0.011。在这种参数配置下，系统的最终输出电压达到了设计要求的 70 伏，误差较小。当积分控制器在 2.25 秒时加入，系统的过渡过程表现出良好的平稳性，同时纹波系数符合设计标准。具体的计算过程如下。

根据过程控制相关知识可知，求（P），则需要计算出降压斩波电路输出的电压每产生 1V 的偏差，则需要占空比变化：

$\begin{array}{c}\Delta{\alpha}_{b}=\frac{1}{{\mathrm{U}}_{\mathrm{b}\mathrm{i}}}\approx 0.00571\#\left(5\right)\end{array}$

而作为反馈环节，(P)则取占空比变化的 n 倍，因此取 n=2：

$\begin{array}{c}P=n\Delta{\alpha}_{b}=0.01142\approx 0.011\#\left(6\right)\end{array}$

参数(I)则通过 PI 调参口诀，经过多次实验仿真，使

I=0.01

## 4.逆变电路实现分析与仿真

设计指标中逆变电路的输出电压大小为

${\mathrm{U}}_{\mathrm{i}\mathrm{o}}=48\mathrm{V}$

输入电压大小为

${\mathrm{U}}_{\mathrm{i}\mathrm{i}}={\mathrm{U}}_{\mathrm{b}\mathrm{o}}=70\mathrm{V}$

输出电压频率为

${f}_{i}=175Hz$

开关频率大小为

${f}_{sw}=28kHz$

根据 PWM 调制的相关知识可得

$\begin{array}{c}{T}_{c}={T}_{sw}=\frac{1}{{f}_{sw}}=3.571\times {10}^{-5}s\#\left(7\right)\end{array}$

${{f}_{r}=f}_{o}=175Hz$

信号波的幅值相对（调制比）

$\begin{array}{c}{\mathrm{\beta}}_{\mathrm{i}}=\frac{{\mathrm{U}}_{\mathrm{o}\mathrm{i}}}{{\mathrm{U}}_{\mathrm{i}\mathrm{i}}}=\frac{{U}_{r}}{{U}_{c}}=68.57\%\#\left(8\right)\end{array}$

其中 U_r、U_c 分别为信号波和载波的幅值，f_r 为信号波的频率，T_c 为载波的周期, \beta_i 为信号波的相对幅值（调制比）。

**图 23 逆变仿真电路载波和信号波的输出参数设置**

![image](https://github.com/user-attachments/assets/04337025-f9ea-4acc-b4ad-dc13941b26af)

为了计算方便，使载波的幅值为 1，那么根据\beta_i 为信号波的相对幅值，那么信号波的幅值设为 0.6857，因此根据上述推导，我们将信号波，载波设置如上图所示。

**图 24 三角波（载波）发生器的电压输出波形**

![image](https://github.com/user-attachments/assets/3e696e08-dd51-41ea-8056-6d44b407731c)

**图 25 单相逆变电路仿真载波波形与数据**

![image](https://github.com/user-attachments/assets/b5cd86c6-7e58-444d-99f4-b2dba6297cef)

通过仿真分析可以得出，当信号波的幅值设置为 0.6857 时，输出电压高于论计算值。进一步观察放大后的载波（三角波）可以发现，如图所示，其存在失真现象。这种失真在通过信号波进行调制时，如上图所示，它会导致部分调制波的高电平时间延长，从而使 IGBT 的导通时间增加，最终导致输出电压幅值增大。为了使输出结果更接近理论计算值，我们将信号波幅值稍微降低至 0.54，所得结果与理论计算基本一致。

# 四、结果分析

对研究过程中所获得的主要的数据、现象进行定性或定量分析，得出结论和推论。

## 1.整流电路输出波形数据分析

**图 26 可控整流仿真输出对应设置的软起动时间，整流电路输出电压波形数据**

![image](https://github.com/user-attachments/assets/84073a4c-5b8e-4545-94ac-b8ebdbeecf9a)

由上图可知：

整流输出电压为

${\mathrm{U}}_{\mathrm{r}\mathrm{o}}=175.1\mathrm{V}$

理论相对误差为

${\mathrm{\delta}}_{\mathrm{r}\mathrm{o}}=0.057\mathrm{\%}$

软起动时间为 3.6s，对应的电压输出为最大电压输出的 80%，对应

${\mathrm{U}}_{\mathrm{s}\mathrm{o}\mathrm{f}\mathrm{t}\mathrm{o}}=140\mathrm{V}$

由图可知此时

${\mathrm{U}\mathrm{\text{'}}}_{\mathrm{s}\mathrm{o}\mathrm{f}\mathrm{t}\mathrm{o}}=139.226\mathrm{V}$

理论电压相对误差为

${\mathrm{\delta}}_{\mathrm{s}\mathrm{o}\mathrm{f}\mathrm{t}\mathrm{o}}=0.553\mathrm{\%}$

因此可以得出，仿真数据对应的仿真电路图符合电路设计要求。

## 2.降压斩波电路输出波形数据分析

### （1）开环 Buck 电路波形分析

**图 27 斩波电路电压输出数据与电压波形**

![image](https://github.com/user-attachments/assets/dd25839b-24f4-4899-ba0b-a5b1c3991117)

**图 28 斩波电路 IGBT 触发脉冲波形与 IGBT 输出电压波形**

![image](https://github.com/user-attachments/assets/c9b1a883-e0c2-4021-a009-6cb75be25bad)

由图可知：

Buck 斩波电路输出电压为

${\mathrm{U}}_{\mathrm{b}\mathrm{o}}=70.52\mathrm{V}$

理论电压误差为

${\mathrm{\delta}}_{\mathrm{b}\mathrm{o}}=0.743\mathrm{\%}$

IGBT 的开关频率为

${f}_{b}=12.670kHz$

理论开关频率误差为

${\mathrm{\delta}}_{\mathrm{b}\mathrm{f}}=2.538\mathrm{\%}$

考虑到测量的是全程的平均开关频率，存在一定的测量误差，因此可得出结论，Buck 斩波电路符合设计要求，与理论计算结果相符。

### （2）闭环 Buck 电路波形分析

**图 29 闭环 Buck 斩波电路电压输出数据与电压波形**

![image](https://github.com/user-attachments/assets/5fd09311-d2f0-4ea0-be62-053b85eafbb0)

**图 30 闭环 Buck 斩波电路 IGBT 触发脉冲波形与 IGBT 输出电压波形**

![image](https://github.com/user-attachments/assets/91957195-f6cd-4745-9544-f7b72dff4e60)

整体斩波输出电压波形上升平缓，PI 控制器的存在使输出电压稳定在 70.148v，误差在可接受范围内。

相对输出电压误差为：

${\mathrm{\delta}}_{\mathrm{h}\mathrm{o}}=0.221\mathrm{\%}$

输出的开关频率为：

${f}_{h}=13.001kHz$

理论开关频率误差为

${\mathrm{\delta}}_{\mathrm{h}\mathrm{h}\mathrm{f}}=0.008\mathrm{\%}$

**图 31 闭环 Buck 斩波电路输出电压放大（纹波）波形图**

![image](https://github.com/user-attachments/assets/89a179e0-5eab-4c3e-a264-6041cf5de62c)

下面计算纹波系数。

纹波电压值定义为

$\begin{array}{c}\Delta {U}_{l}=\frac{{U}_{l\left(on\right)}-{U}_{l\left(off\right)}}{2}\#\left(9\right)\end{array}$

输出的电压值定义为

$\begin{array}{c}{U}_{o}=\frac{{U}_{l\left(on\right)}+{U}_{l\left(off\right)}}{2}\#\left(10\right)\end{array}$

纹波系数定义为

$\begin{array}{c}\gamma =\frac{\Delta {U}_{l}}{{U}_{o}}=\frac{{U}_{l\left(on\right)}-{U}_{l\left(off\right)}}{{U}_{l\left(on\right)}+{U}_{l\left(off\right)}}\#\left(11\right)\end{array}$

计算可得

$\gamma =1.35\%$

可见其符合闭环后的纹波系数的小于 5%的要求。

因此可以推断，该设计满足了预期要求，闭环系统表现出良好的稳定性。此外，由于较高的开关频率与较小的纹波系数，输出电压在一定程度上可以被视为一条直线。

## 3.逆变电路输出波形数据分析

### （1）开环情况

**图 32 单相逆变电路仿真输出电压波形与波形数据**

![image](https://github.com/user-attachments/assets/c8dc8a3d-35a9-4c7a-838e-5ec96d650a12)

**图 33 单相逆变电路稳定输出局部放大波形**

![image](https://github.com/user-attachments/assets/c5a9eb55-c43b-47e4-8158-d4fd449ac5af)

单相逆变电路输出电压为

${\mathrm{U}}_{\mathrm{i}\mathrm{o}}=48.08\mathrm{V}$

理论电压相对误差为

${\mathrm{\delta}}_{\mathrm{i}\mathrm{o}}=0.167\mathrm{\%}$

输出电压的频率为

${f}_{\mathrm{i}\mathrm{o}}=175.004Hz$

理论电压频率相对误差为

${\mathrm{\delta}}_{fi\mathrm{o}}=0.0023\mathrm{\%}$

单相逆变电路开关频率为

${f}_{\mathrm{i}}=27.877kHz$

理论开关频率相对误差为

${\mathrm{\delta}}_{fi}=-0.440\mathrm{\%}$

因此结合波形与数据可得，单相逆变仿真电路符合设计要求。

### （2）闭环情况

**图 34 单相逆变电路仿真输出电压波形与波形数据**

![image](https://github.com/user-attachments/assets/d01ad7d6-c8d7-423f-bdc6-7f8abaa2154f)

**图 35 单相逆变电路仿真载波波形与数据**

![image](https://github.com/user-attachments/assets/625ab309-86b9-454d-a718-999cb9880dc8)

**图 36 单相逆变电路稳定输出局部放大波形**

![image](https://github.com/user-attachments/assets/ed0fe85c-8ad5-465f-b6c9-996a7b9d023e)

单相逆变电路输出电压为

${\mathrm{U}}_{\mathrm{i}\mathrm{o}}=49.59\mathrm{V}$

理论电压相对误差为

${\mathrm{\delta}}_{\mathrm{i}\mathrm{o}}=3.313\mathrm{\%}$

输出电压的频率为

${f}_{\mathrm{i}\mathrm{o}}=175.003Hz$

理论电压频率相对误差为

${\mathrm{\delta}}_{fi\mathrm{o}}=0.0017\mathrm{\%}$

单相逆变电路开关频率为

${f}_{\mathrm{i}}=28.004kHz$

理论开关频率相对误差为

${\mathrm{\delta}}_{fi}=0.014\mathrm{\%}$

因此结合波形与数据可得，闭环单相逆变仿真电路符合设计要求。同时可见闭环情况下，逆变输出电压性能有一定的上升
