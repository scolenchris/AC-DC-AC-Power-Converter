# I. Research Background

This course aims to comprehensively equip students with the structural understanding, operational principles, control methodologies, design calculations, and experimental skills of various power electronic circuits through a combination of theoretical and practical approaches. The curriculum encompasses the combined application of multiple conversion circuits to achieve efficient transformation and control of electrical energy. Throughout the learning process, students will deeply appreciate the importance of applying theoretical knowledge to real-world scenarios, while also understanding the value of teamwork. The course places particular emphasis on fostering students' innovative spirit, stimulating their creative consciousness, and enhancing their hands-on and practical operational abilities through practice.

# II. Scheme Demonstration (Design Concept)

**Figure 1: Overall Framework Diagram of the Power Electronic System Circuit**

As illustrated in Figure 1, the main circuit of this design consists of a rectifier circuit, a Buck step-down chopper circuit, and an inverter circuit. Additionally, to achieve effective control of thyristors and IGBTs, corresponding trigger circuits are required for each part of the circuit. The input voltage is single-phase alternating current (AC), which is converted to direct current (DC) through rectification and filtering processes, and then regenerated into AC through step-down and inversion processes.

The input of the circuit is single-phase sinusoidal AC, hence the rectifier circuit section employs a single-phase bridge fully-controlled rectifier circuit. To eliminate the AC component in the output voltage of the rectifier circuit, a capacitor is connected in parallel at the load. Similarly, to remove the AC component in the output current of the rectifier circuit, an inductor is connected in series at the load. Therefore, the overall load constitutes an RLC load.

In the step-down chopper section, a Buck step-down chopper circuit is utilized due to its simple structure and convenient control. Since the inverter circuit requires a stable DC voltage input, an RLC load similar to the one mentioned above is connected at the load end of the step-down chopper circuit.

The inverter circuit, which outputs single-phase sinusoidal AC, employs a single-phase voltage-source inverter circuit. To obtain a sinusoidal output voltage, a capacitor is connected in parallel and an inductor in series at the load end.

The trigger circuit for the single-phase bridge fully-controlled rectifier circuit is composed of synchronous sampling, integration, signal conditioning, and logical comparison output stages. To achieve the adjustment of the trigger angle, an adjustable voltage circuit consisting of a DC voltage source and a voltage-divider type sliding rheostat can be used. The output voltage is connected to the reference voltage input of the comparison stage to complete the adjustment.

The Buck step-down chopper circuit uses a rectangular wave generator, with IGBT as the switching device. The input-output voltage ratio is controlled by adjusting the duty cycle, while the frequency of the rectangular wave is adjusted to meet the switching frequency requirements.

Since the output single-phase sinusoidal AC has requirements for amplitude and frequency, the IGBT control in the single-phase voltage-source inverter circuit employs PWM control technology. The amplitude and frequency of the signal wave (sine wave) and the carrier wave (triangular wave) are adjusted to meet the design requirements for output voltage amplitude, frequency, and switching frequency.

Moreover, to reduce the current impact and peak during startup, a soft-start function is incorporated. A linearly varying rheostat causes the voltage to change linearly, thereby achieving the soft-start function.

To achieve the effect of tracking the given chopper output voltage, a voltage closed-loop controller based on the output voltage is designed and applied to the Buck chopper circuit.

# III. Process Discussion

## 1. Analysis and Simulation of Phase-Controlled Trigger Circuit

**Figure 2: Simulation Circuit of Grid Voltage Step-Down Circuit and Phase-Locked Loop**

**Figure 3: Waveform Simulation Diagram from Sine Wave Sampling to Rectangular Wave**

For the processing of the grid input voltage, an operational amplifier circuit is first employed to step down the grid voltage, reducing its amplitude to approximately 10 volts. Subsequently, a Schmitt trigger is used to phase-lock the stepped-down voltage, accurately capturing the zero-crossing signal. The Schmitt trigger, leveraging its hysteresis characteristics, stably converts the input signal into a corresponding rectangular wave output. This approach not only effectively reduces the voltage amplitude but also generates rectangular wave signals corresponding to the zero-crossing points, facilitating subsequent signal processing and control applications.

**Figure 4: Simulation Circuit of Integration (Rectangular to Triangular Wave)**

**Figure 5: Simulation Waveform Diagram of Rectangular Wave Integration into Triangular Wave**

In the next stage, the output rectangular wave is integrated to generate a corresponding triangular wave. During this simulation, the zero-drift phenomenon in the integration stage is not significant, thus eliminating the need for a zero-drift suppressor. Through the integration operation, each rising and falling edge of the rectangular wave is converted into a linear ramp, forming a continuous triangular waveform.

The voltage output formula of the integration circuit is as follows:

${U}_{io}={\int}_{0}^{t}\frac{1}{RC}{V}_{in}\mathrm\ dt$

To ensure that the output amplitude remains at 5 volts for subsequent signal conditioning, we set:

$\mathrm{R}=1\mathrm{M}\mathrm{\Omega}$

$C=0.01uF$

As shown in the figure, the output triangular wave voltage ranges from 0 to 5 volts, consistent with theoretical calculations.

**Figure 6: Dual Anti-Phase Differential Signal Conditioning Circuit**

**Figure 7: Simulation Waveform Diagram of Anti-Phase Output Voltage from Conditioning Circuit**

In the signal conditioning stage, two differential circuits are used to split the original triangular wave into two triangular waves with a 180° phase difference. The generated anti-phase signals can be used to control the conduction of two sets of thyristors, respectively.

**Figure 8: Simulation Circuit of Comparison Stage**

**Figure 9: Simulation Waveform Diagram of Triangular Wave Comparison with Given Voltage**

In the comparison stage, the output of the signal conditioning (triangular wave) is compared with a given reference voltage (constant). This process is typically implemented using a comparator. When the voltage of the triangular wave exceeds the reference voltage, the comparator outputs a high-level signal; otherwise, it outputs a low-level signal. The output signal generated in this manner is the phase-controlled voltage, used to control the conduction angle of the thyristors.

**Figure 10: Simulation Circuit of Logic Processing**

**Figure 11: Comparison Diagram of Logic Processing Output and Various In-Phase Waveforms**

In the signal conditioning section, theoretically, the comparator output is already a phase-controlled rectangular wave that can be used to control the conduction and cutoff of thyristors. However, the addition of logic processing aims to prevent the comparator output from simultaneously turning on all four thyristors in the rectifier circuit, thereby avoiding short circuits.

In Figure 11, the lines represent different voltage signals: the purple line represents the external input voltage source waveform, the orange line represents the phase-locked output voltage waveform, the blue line represents the comparator output waveform (from the previous stage), and the yellow line represents the voltage waveform output to the thyristors after logic processing.

If the blue waveform is directly input to the thyristors, it would cover both the positive and negative parts of the sine wave, potentially causing reverse thyristors to conduct and leading to a short circuit. Therefore, by performing a logical AND operation between the blue waveform and the orange phase-locked signal, the yellow waveform is obtained. The yellow waveform only includes the positive half-cycle of the sine wave, effectively avoiding the risk of a short circuit in the rectifier circuit.

**Figure 12: Output Waveform Diagram After Logic Processing**

In the rectifier circuit, to ensure the correct triggering of thyristors and the proper operation of the rectifier circuit, the two thyristor trigger waveforms obtained are as shown in the figure above. The trigger pulses of the two different phases are 90° apart, while the pulses of the same phase are 180° apart. This phase relationship ensures that each thyristor conducts at the correct time, achieving effective rectification and avoiding issues such as short circuits or overlapping conduction.

## 2. Analysis and Simulation of Rectifier Circuit Implementation

In the corresponding rectifier circuit design specifications, the output voltage of the rectifier circuit is:

${\mathrm{U}}_{\mathrm{r}\mathrm{o}}=175\mathrm{V}$

The effective value of the input voltage is:

${\mathrm{U}}_{\mathrm{i}}={\mathrm{U}}_{2}=220\mathrm{V}$

In the simulation, an RLC load is used. Considering that the inductance is large, the rectifier circuit can be assumed to operate in a freewheeling state. At the triggering angle α , trigger pulses are applied to thyristors VT1 and VT4 to turn them on, resulting in U\*d = U\*2 . The presence of inductance in the load prevents abrupt changes in the load current, and the inductance smooths the load current. Given the assumption of a large load inductance, the load current I remains continuous and its waveform approximates a horizontal line. Therefore, as derived from the textbook:

$\begin{array}{c}{U}*{d}=\frac{1}{\pi}{\int}_{\alpha}^{\pi +\alpha}\sqrt{2}{U}_{2}\mathrm{s}\mathrm{i}\mathrm{n}\omega t\mathrm{d}\left(\omega t\right)=\frac{2\sqrt{2}}{\pi}{U}_{2}cos\alpha =0.9{U}_{2}cos\alpha \#\left(2\right)\end{array}$

Substituting the values, we solve for:

$\mathrm{\alpha}=27.89°$

After determining the triggering angle, the comparison voltage for generating the phase-controlled trigger waveform can be calculated. Since there is a 180° phase difference between the two phases, the denominator for calculating the relative voltage ratio is 180°. Considering that the system operates in rectification mode, the triggering angle α ranges from 0° to 90°, so the numerator is multiplied by 2. Thus, the relative comparison voltage ratio β can be expressed as:

$\beta =\frac{2\times \alpha}{180°}=0.3099$

This value is set in the sliding rheostat of the phase-controlled trigger circuit, as shown in the figure below.

**Figure 13: Schematic Diagram of Phase Adjustment in the Phase-Controlled Trigger Circuit**

For the soft-start time, which is the time required for the current to rise from zero to 80% of the maximum voltage, we have:

${\mathrm{U}}_{\mathrm{s}\mathrm{o}\mathrm{f}\mathrm{t}\mathrm{o}}=0.8\times 175\mathrm{V}=140\mathrm{V}$

Using the same formula, the triggering angle is found to be 45°, corresponding to a relative comparison voltage ratio of 0.5. Therefore, the resistance is linearly transformed with a slope:

$K=0.0738$

The time to reach 100% is T=β/K=4.2

Thus, the time to reach 80% is:

$\begin{array}{c}{T}_{1}=\frac{{U}_{softo}}{{U}_{d}}\times T=3.36s\#\left(3\right)\end{array}$

This result slightly deviates from the expected 3.6 seconds. However, considering the influence of ripple in the simulation, the final soft-start time can be determined to be within the range of 3.4 to 3.8 seconds. Given the acceptable margin of error, the soft-start is deemed to meet the design requirements.

## 3. Analysis and Simulation of Step-Down Chopper Circuit Implementation

### (1) Analysis and Simulation of Open-Loop Buck Circuit

**Figure 14: Simulation Circuit of Buck Chopper**

In the design specifications of the corresponding Buck circuit, the output voltage is:

${\mathrm{U}}_{\mathrm{b}\mathrm{o}}=70\mathrm{V}$

The input voltage is:

${\mathrm{U}}_{\mathrm{b}\mathrm{i}}={\mathrm{U}}_{\mathrm{r}\mathrm{o}}=175\mathrm{V}$

The switching frequency is:

${f}_{b}=13kHz$

Based on the output voltage relationship of the chopper circuit, we obtain:

$\begin{array}{c}{\alpha}_{b}=\frac{{\mathrm{U}}_{\mathrm{b}\mathrm{o}}}{{\mathrm{U}}_{\mathrm{b}\mathrm{i}}}=40\%\#\left(4\right)\end{array}$

${T}_{b}=\frac{1}{{f}_{b}}=7.6923\times {10}^{-5}s$

where α_b is the duty cycle of the rectangular wave generator in the step-down chopper circuit, and T_b is the period of the rectangular wave generator. These values are entered into the pulse generator of the simulation circuit, as shown in Figure 15.

**Figure 15: Data Entry for the Pulse Generator in the Buck Chopper Circuit**

### (2) Analysis and Simulation of Closed-Loop Buck Circuit

**Figure 16: Simulation Diagram and Structural Schematic of the Voltage Closed-Loop Buck Chopper Circuit**

Based on the requirements, we designed the above PI controller on the foundation of the open-loop chopper circuit. This controller includes a delay integration stage, a PI controller stage, a PI-to-PWM conversion stage, and an output voltage acquisition stage. Its working principle is as follows:

First, the output voltage is sampled and fed into the controller, where it is subtracted from the set voltage (70 volts) to obtain an error signal. This error signal is then input into both the proportional (P) and integral (I) stages. After processing through these stages, along with a constant bias value of 0.12, the output of the PI controller is obtained.

Next, the output signal of the PI controller is fed into a saturation stage to prevent the output from exceeding the allowable range (0% to 100%). Subsequently, this signal is sent to the PWM module to adjust the duty cycle of the PWM signal. Finally, after being amplified by a factor of 7, the signal is input to the IGBT module, thereby achieving closed-loop voltage regulation. Through precise control of the PWM signal width, the output voltage can be effectively adjusted to reach the desired steady-state level.

Below, we discuss the settings for the values of (P) and (I).

**Figure 17: Output of the Chopper Circuit Without the Integral Stage**

**Figure 18: Output Waveform of the PI Controller Without the Integral Stage**

As shown in the figures, when the integral gain I is set to 0 and the proportional gain P is adjusted, a steady-state error is observed in the system: despite the set value being 70 volts, the output only reaches 51.92 volts, falling short of the expected voltage. From the output of the PI controller, it can be seen that after 4.5 seconds, the output remains unchanged, indicating that the system has reached a dynamic equilibrium state. However, to eliminate the steady-state error, it is necessary to introduce an integral controller. By adjusting the value of the integral gain I while maintaining the current proportional gain P , the steady-state error can be effectively eliminated.

**Figure 19: Output Waveform of the Chopper Voltage After Introducing the Integral Stage at 1.5 Seconds**

**Figure 20: Output Waveform of the PI Controller After Introducing the Integral Stage at 1.5 Seconds**

Consider introducing the integral stage after 1.5 seconds. However, as observed in the figures, at 1.5 seconds, the output voltage of the chopper increases significantly, with a large rate of voltage change, indicating an overshoot phenomenon. Examining the output of the PI controller (as shown in the figure), a noticeable overshoot is observed. Therefore, considering that the value of I is already relatively small, to ensure the steady-state error is correctly eliminated, we do not change the value of I, but instead delay the introduction of the integral stage. Since introducing the integral stage too early results in an excessively large output from the integral part (due to accumulated error), it is considered to introduce the integral stage between 2 to 3 seconds to reduce the overshoot caused by large errors.

Additionally, we note that the chopper voltage output reaches 71.75 volts at 5 seconds, which is very close to the target voltage of 70 volts. Although further observation is limited by the simulation time, we can still infer that under the current integral gain value, the steady-state error can be eliminated. Below, we proceed with further optimization of the parameters.

**Figure 21: Output Waveform of the Chopper Voltage After Introducing the Integral Stage at 2.25 Seconds**

**Figure 22: Output Waveform of the PI Controller After Introducing the Integral Stage at 2.25 Seconds**

As shown in the figures above, the integral controller is ultimately introduced at 2.25 seconds, with the integral gain I set to 0.01 and the proportional gain P set to 0.011. Under this parameter configuration, the final output voltage of the system reaches the design requirement of 70 volts, with minimal error. When the integral controller is introduced at 2.25 seconds, the system's transition process exhibits good stability, and the ripple coefficient meets the design standards. The specific calculation process is as follows.

Based on process control principles, to determine P, it is necessary to calculate the change in duty cycle required for each 1-volt deviation in the output voltage of the step-down chopper circuit:

$\begin{array}{c}\Delta{\alpha}_{b}=\frac{1}{{\mathrm{U}}_{\mathrm{b}\mathrm{i}}}\approx 0.00571\#\left(5\right)\end{array}$

As a feedback loop, P is taken as n times the change in duty cycle, thus setting n = 2:

$\begin{array}{c}P=n\Delta{\alpha}_{b}=0.01142\approx 0.011\#\left(6\right)\end{array}$

The parameter I is determined through the PI tuning method and multiple experimental simulations, resulting in:

I = 0.01

## 4. Analysis and Simulation of Inverter Circuit Implementation

In the design specifications, the output voltage of the inverter circuit is:

${\mathrm{U}}_{\mathrm{i}\mathrm{o}}=48\mathrm{V}$

The input voltage is:

${\mathrm{U}}_{\mathrm{i}\mathrm{i}}={\mathrm{U}}_{\mathrm{b}\mathrm{o}}=70\mathrm{V}$

The output voltage frequency is:

${f}_{i}=175Hz$

The switching frequency is:

${f}_{sw}=28kHz$

Based on the principles of PWM modulation, we obtain:

$\begin{array}{c}{T}_{c}={T}_{sw}=\frac{1}{{f}_{sw}}=3.571\times {10}^{-5}s\#\left(7\right)\end{array}$

${{f}_{r}=f}_{o}=175Hz$

The relative amplitude of the signal wave (modulation index) is:

$\begin{array}{c}{\mathrm{\beta}}_{\mathrm{i}}=\frac{{\mathrm{U}}_{\mathrm{o}\mathrm{i}}}{{\mathrm{U}}_{\mathrm{i}\mathrm{i}}}=\frac{{U}_{r}}{{U}_{c}}=68.57\%\#\left(8\right)\end{array}$

where U_r and U_c are the amplitudes of the signal wave and carrier wave, respectively, f_r is the frequency of the signal wave, T_c is the period of the carrier wave, and β_i is the relative amplitude of the signal wave (modulation index).

**Figure 23: Output Parameter Settings for the Carrier and Signal Waves in the Inverter Simulation Circuit**

For ease of calculation, the amplitude of the carrier wave is set to 1. According to the relative amplitude β_i of the signal wave, the amplitude of the signal wave is set to 0.6857. Based on the above derivation, the signal wave and carrier wave are configured as shown in the figure above.

**Figure 24: Voltage Output Waveform of the Triangular Wave (Carrier) Generator**

**Figure 25: Simulation Waveform and Data of the Carrier Wave in the Single-Phase Inverter Circuit**

Through simulation analysis, it is observed that when the amplitude of the signal wave is set to 0.6857, the output voltage exceeds the theoretical calculated value. Further examination of the amplified carrier wave (triangular wave) reveals distortion, as shown in the figure. This distortion, when modulated by the signal wave, prolongs the high-level duration of part of the modulated wave, thereby increasing the conduction time of the IGBT and ultimately leading to an increase in the output voltage amplitude. To bring the output closer to the theoretical value, the amplitude of the signal wave is slightly reduced to 0.54, resulting in an output that aligns well with the theoretical calculations.

# IV. Result Analysis

A qualitative and quantitative analysis of the main data and phenomena obtained during the research process is conducted to draw conclusions and inferences.

## 1. Analysis of Rectifier Circuit Output Waveform Data

**Figure 26: Soft-Start Time and Output Voltage Waveform Data of the Controlled Rectifier Simulation**

From the figure above, the following can be observed:

- The rectifier output voltage is:

  ${\mathrm{U}}_{\mathrm{r}\mathrm{o}}=175.1\mathrm{V}$

- The theoretical relative error is:

  ${\mathrm{\delta}}_{\mathrm{r}\mathrm{o}}=0.057\mathrm{\%}$

- The soft-start time is 3.6 seconds, corresponding to 80% of the maximum output voltage:

  ${\mathrm{U}}_{\mathrm{s}\mathrm{o}\mathrm{f}\mathrm{t}\mathrm{o}}=140\mathrm{V}$

- From the figure, the actual voltage at this time is:

  ${\mathrm{U}\mathrm{\text{'}}}_{\mathrm{s}\mathrm{o}\mathrm{f}\mathrm{t}\mathrm{o}}=139.226\mathrm{V}$

- The theoretical relative error for the voltage is:

  ${\mathrm{\delta}}_{\mathrm{s}\mathrm{o}\mathrm{f}\mathrm{t}\mathrm{o}}=0.553\mathrm{\%}$

  Therefore, it can be concluded that the simulation data and the corresponding simulation circuit diagram meet the design requirements of the circuit.

## 2. Analysis of Step-Down Chopper Circuit Output Waveform Data

### (1) Analysis of Open-Loop Buck Circuit Waveform

**Figure 27: Voltage Output Data and Waveform of the Chopper Circuit**

**Figure 28: IGBT Trigger Pulse Waveform and IGBT Output Voltage Waveform of the Chopper Circuit**

From the figures, the following observations can be made:

- The output voltage of the Buck chopper circuit is:

  ${\mathrm{U}}_{\mathrm{b}\mathrm{o}}=70.52\mathrm{V}$

- The theoretical voltage error is:

  ${\mathrm{\delta}}_{\mathrm{b}\mathrm{o}}=0.743\mathrm{\%}$

- The switching frequency of the IGBT is:

  ${f}_{b}=12.670kHz$

- The theoretical switching frequency error is:

  ${\mathrm{\delta}}_{\mathrm{b}\mathrm{f}}=2.538\mathrm{\%}$

  Considering that the measured average switching frequency over the entire duration includes some measurement error, it can be concluded that the Buck chopper circuit meets the design requirements and aligns with the theoretical calculations.

### (2) Analysis of Closed-Loop Buck Circuit Waveform

**Figure 29: Voltage Output Data and Waveform of the Closed-Loop Buck Chopper Circuit**

**Figure 30: IGBT Trigger Pulse Waveform and IGBT Output Voltage Waveform of the Closed-Loop Buck Chopper Circuit**

The overall output voltage waveform of the chopper circuit exhibits a smooth rise. The presence of the PI controller stabilizes the output voltage at 70.148 V, with the error within an acceptable range.

- The relative output voltage error is:

  ${\mathrm{\delta}}_{\mathrm{h}\mathrm{o}}=0.221\mathrm{\%}$

- The output switching frequency is:

  ${f}_{h}=13.001kHz$

- The theoretical switching frequency error is:

  ${\mathrm{\delta}}_{\mathrm{h}\mathrm{h}\mathrm{f}}=0.008\mathrm{\%}$

  **Figure 31: Amplified Output Voltage (Ripple) Waveform of the Closed-Loop Buck Chopper Circuit**

  Next, the ripple coefficient is calculated.

- The ripple voltage is defined as:

  $\begin{array}{c}\Delta {U}_{l}=\frac{{U}_{l\left(on\right)}-{U}_{l\left(off\right)}}{2}\#\left(9\right)\end{array}$

- The output voltage is defined as:

  $\begin{array}{c}{U}_{o}=\frac{{U}_{l\left(on\right)}+{U}_{l\left(off\right)}}{2}\#\left(10\right)\end{array}$

- The ripple coefficient is defined as:

  $\begin{array}{c}\gamma =\frac{\Delta {U}_{l}}{{U}_{o}}=\frac{{U}_{l\left(on\right)}-{U}_{l\left(off\right)}}{{U}_{l\left(on\right)}+{U}_{l\left(off\right)}}\#\left(11\right)\end{array}$

  Calculations yield:

  $\gamma =1.35\%$

  It is evident that this meets the requirement for a ripple coefficient of less than 5% in the closed-loop system. Therefore, it can be inferred that the design fulfills the expected requirements, and the closed-loop system demonstrates excellent stability. Additionally, due to the high switching frequency and low ripple coefficient, the output voltage can, to a certain extent, be regarded as a straight line.

## 3. Analysis of Inverter Circuit Output Waveform Data

### (1) Open-Loop Condition

**Figure 32: Simulation Output Voltage Waveform and Data of the Single-Phase Inverter Circuit**

**Figure 33: Local Amplified Waveform of the Stable Output of the Single-Phase Inverter Circuit**

The output voltage of the single-phase inverter circuit is:

${\mathrm{U}}_{\mathrm{i}\mathrm{o}}=48.08\mathrm{V}$

The relative theoretical voltage error is:

${\mathrm{\delta}}_{\mathrm{i}\mathrm{o}}=0.167\mathrm{\%}$

The output voltage frequency is:

${f}_{\mathrm{i}\mathrm{o}}=175.004Hz$

The relative theoretical frequency error is:

${\mathrm{\delta}}_{fi\mathrm{o}}=0.0023\mathrm{\%}$

The switching frequency of the single-phase inverter circuit is:

${f}_{\mathrm{i}}=27.877kHz$

The relative theoretical switching frequency error is:

${\mathrm{\delta}}_{fi}=-0.440\mathrm{\%}$

Based on the waveform and data, it can be concluded that the single-phase inverter simulation circuit meets the design requirements.

### (2) Closed-Loop Condition

**Figure 34: Simulation Output Voltage Waveform and Data of the Single-Phase Inverter Circuit**

**Figure 35: Simulation Carrier Waveform and Data of the Single-Phase Inverter Circuit**

**Figure 36: Local Amplified Waveform of the Stable Output of the Single-Phase Inverter Circuit**

The output voltage of the single-phase inverter circuit is:

${\mathrm{U}}_{\mathrm{i}\mathrm{o}}=49.59\mathrm{V}$

The relative theoretical voltage error is:

${\mathrm{\delta}}_{\mathrm{i}\mathrm{o}}=3.313\mathrm{\%}$

The output voltage frequency is:

${f}_{\mathrm{i}\mathrm{o}}=175.003Hz$

The relative theoretical frequency error is:

${\mathrm{\delta}}_{fi\mathrm{o}}=0.0017\mathrm{\%}$

The switching frequency of the single-phase inverter circuit is:

${f}_{\mathrm{i}}=28.004kHz$

The relative theoretical switching frequency error is:

${\mathrm{\delta}}_{fi}=0.014\mathrm{\%}$

Based on the waveform and data, it can be concluded that the closed-loop single-phase inverter simulation circuit meets the design requirements. Additionally, it is evident that under closed-loop conditions, the performance of the inverter output voltage has improved to some extent.
