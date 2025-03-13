    function targMap = targDataMap(),

    ;%***********************
    ;% Create Parameter Map *
    ;%***********************
    
        nTotData      = 0; %add to this count as we go
        nTotSects     = 2;
        sectIdxOffset = 0;

        ;%
        ;% Define dummy sections & preallocate arrays
        ;%
        dumSection.nData = -1;
        dumSection.data  = [];

        dumData.logicalSrcIdx = -1;
        dumData.dtTransOffset = -1;

        ;%
        ;% Init/prealloc paramMap
        ;%
        paramMap.nSections           = nTotSects;
        paramMap.sectIdxOffset       = sectIdxOffset;
            paramMap.sections(nTotSects) = dumSection; %prealloc
        paramMap.nTotData            = -1;

        ;%
        ;% Auto data (rtP)
        ;%
            section.nData     = 19;
            section.data(19)  = dumData; %prealloc

                    ;% rtP.Ramp_InitialOutput
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% rtP.RepeatingSequence_rep_seq_y
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 1;

                    ;% rtP.Ramp_slope
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 4;

                    ;% rtP.Ramp_start
                    section.data(4).logicalSrcIdx = 3;
                    section.data(4).dtTransOffset = 5;

                    ;% rtP.LookUpTable1_bp01Data
                    section.data(5).logicalSrcIdx = 4;
                    section.data(5).dtTransOffset = 6;

                    ;% rtP.SineWave_Amp
                    section.data(6).logicalSrcIdx = 5;
                    section.data(6).dtTransOffset = 9;

                    ;% rtP.SineWave_Bias
                    section.data(7).logicalSrcIdx = 6;
                    section.data(7).dtTransOffset = 10;

                    ;% rtP.SineWave_Freq
                    section.data(8).logicalSrcIdx = 7;
                    section.data(8).dtTransOffset = 11;

                    ;% rtP.SineWave_Phase
                    section.data(9).logicalSrcIdx = 8;
                    section.data(9).dtTransOffset = 12;

                    ;% rtP.Gain_Gain
                    section.data(10).logicalSrcIdx = 9;
                    section.data(10).dtTransOffset = 13;

                    ;% rtP.Gain1_Gain
                    section.data(11).logicalSrcIdx = 10;
                    section.data(11).dtTransOffset = 14;

                    ;% rtP.PulseGenerator2_Amp
                    section.data(12).logicalSrcIdx = 11;
                    section.data(12).dtTransOffset = 15;

                    ;% rtP.PulseGenerator2_Period
                    section.data(13).logicalSrcIdx = 12;
                    section.data(13).dtTransOffset = 16;

                    ;% rtP.PulseGenerator2_Duty
                    section.data(14).logicalSrcIdx = 13;
                    section.data(14).dtTransOffset = 17;

                    ;% rtP.PulseGenerator2_PhaseDelay
                    section.data(15).logicalSrcIdx = 14;
                    section.data(15).dtTransOffset = 18;

                    ;% rtP.Step_Y0
                    section.data(16).logicalSrcIdx = 15;
                    section.data(16).dtTransOffset = 19;

                    ;% rtP.Saturation_UpperSat
                    section.data(17).logicalSrcIdx = 16;
                    section.data(17).dtTransOffset = 20;

                    ;% rtP.Saturation_LowerSat
                    section.data(18).logicalSrcIdx = 17;
                    section.data(18).dtTransOffset = 21;

                    ;% rtP.Constant_Value
                    section.data(19).logicalSrcIdx = 18;
                    section.data(19).dtTransOffset = 22;

            nTotData = nTotData + section.nData;
            paramMap.sections(1) = section;
            clear section

            section.nData     = 2;
            section.data(2)  = dumData; %prealloc

                    ;% rtP.Constant_Value_g52i3c4nmp
                    section.data(1).logicalSrcIdx = 19;
                    section.data(1).dtTransOffset = 0;

                    ;% rtP.Constant_Value_otszzbjsj3
                    section.data(2).logicalSrcIdx = 20;
                    section.data(2).dtTransOffset = 1;

            nTotData = nTotData + section.nData;
            paramMap.sections(2) = section;
            clear section


            ;%
            ;% Non-auto Data (parameter)
            ;%


        ;%
        ;% Add final counts to struct.
        ;%
        paramMap.nTotData = nTotData;



    ;%**************************
    ;% Create Block Output Map *
    ;%**************************
    
        nTotData      = 0; %add to this count as we go
        nTotSects     = 1;
        sectIdxOffset = 0;

        ;%
        ;% Define dummy sections & preallocate arrays
        ;%
        dumSection.nData = -1;
        dumSection.data  = [];

        dumData.logicalSrcIdx = -1;
        dumData.dtTransOffset = -1;

        ;%
        ;% Init/prealloc sigMap
        ;%
        sigMap.nSections           = nTotSects;
        sigMap.sectIdxOffset       = sectIdxOffset;
            sigMap.sections(nTotSects) = dumSection; %prealloc
        sigMap.nTotData            = -1;

        ;%
        ;% Auto data (rtB)
        ;%
            section.nData     = 16;
            section.data(16)  = dumData; %prealloc

                    ;% rtB.dijpktxxg5
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% rtB.i3xyz3kjxa
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 1;

                    ;% rtB.oowprsxy2x
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 2;

                    ;% rtB.abzdytk1pf
                    section.data(4).logicalSrcIdx = 3;
                    section.data(4).dtTransOffset = 3;

                    ;% rtB.aqtgd423hn
                    section.data(5).logicalSrcIdx = 4;
                    section.data(5).dtTransOffset = 4;

                    ;% rtB.gdb3wbgzo5
                    section.data(6).logicalSrcIdx = 5;
                    section.data(6).dtTransOffset = 5;

                    ;% rtB.mnoms1r00y
                    section.data(7).logicalSrcIdx = 6;
                    section.data(7).dtTransOffset = 9;

                    ;% rtB.li5o4gitlq
                    section.data(8).logicalSrcIdx = 7;
                    section.data(8).dtTransOffset = 13;

                    ;% rtB.ifrha4igj5
                    section.data(9).logicalSrcIdx = 8;
                    section.data(9).dtTransOffset = 17;

                    ;% rtB.jb4u2yifrj
                    section.data(10).logicalSrcIdx = 9;
                    section.data(10).dtTransOffset = 18;

                    ;% rtB.elx4gn4sq3
                    section.data(11).logicalSrcIdx = 10;
                    section.data(11).dtTransOffset = 19;

                    ;% rtB.cqx0zb5ro1
                    section.data(12).logicalSrcIdx = 11;
                    section.data(12).dtTransOffset = 20;

                    ;% rtB.ksaz1bbmuy
                    section.data(13).logicalSrcIdx = 12;
                    section.data(13).dtTransOffset = 21;

                    ;% rtB.fo5pnop3iv
                    section.data(14).logicalSrcIdx = 13;
                    section.data(14).dtTransOffset = 22;

                    ;% rtB.npcesp25b1
                    section.data(15).logicalSrcIdx = 14;
                    section.data(15).dtTransOffset = 26;

                    ;% rtB.fwy2vxyapw
                    section.data(16).logicalSrcIdx = 15;
                    section.data(16).dtTransOffset = 169;

            nTotData = nTotData + section.nData;
            sigMap.sections(1) = section;
            clear section


            ;%
            ;% Non-auto Data (signal)
            ;%


        ;%
        ;% Add final counts to struct.
        ;%
        sigMap.nTotData = nTotData;



    ;%*******************
    ;% Create DWork Map *
    ;%*******************
    
        nTotData      = 0; %add to this count as we go
        nTotSects     = 8;
        sectIdxOffset = 1;

        ;%
        ;% Define dummy sections & preallocate arrays
        ;%
        dumSection.nData = -1;
        dumSection.data  = [];

        dumData.logicalSrcIdx = -1;
        dumData.dtTransOffset = -1;

        ;%
        ;% Init/prealloc dworkMap
        ;%
        dworkMap.nSections           = nTotSects;
        dworkMap.sectIdxOffset       = sectIdxOffset;
            dworkMap.sections(nTotSects) = dumSection; %prealloc
        dworkMap.nTotData            = -1;

        ;%
        ;% Auto data (rtDW)
        ;%
            section.nData     = 9;
            section.data(9)  = dumData; %prealloc

                    ;% rtDW.onukoq1yyy
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.l0v5zfgnmo
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 2;

                    ;% rtDW.lwb1tu1r3r
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 4;

                    ;% rtDW.cb3r4qb33r
                    section.data(4).logicalSrcIdx = 3;
                    section.data(4).dtTransOffset = 6;

                    ;% rtDW.ekbgaownj3
                    section.data(5).logicalSrcIdx = 4;
                    section.data(5).dtTransOffset = 8;

                    ;% rtDW.nt1zn5x4x4
                    section.data(6).logicalSrcIdx = 5;
                    section.data(6).dtTransOffset = 96;

                    ;% rtDW.czxyqzxhds
                    section.data(7).logicalSrcIdx = 6;
                    section.data(7).dtTransOffset = 97;

                    ;% rtDW.m5bkigs10b
                    section.data(8).logicalSrcIdx = 7;
                    section.data(8).dtTransOffset = 175;

                    ;% rtDW.gepsevpqjd
                    section.data(9).logicalSrcIdx = 8;
                    section.data(9).dtTransOffset = 176;

            nTotData = nTotData + section.nData;
            dworkMap.sections(1) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.ixvc4iclw2
                    section.data(1).logicalSrcIdx = 9;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(2) = section;
            clear section

            section.nData     = 21;
            section.data(21)  = dumData; %prealloc

                    ;% rtDW.mm1nwudnea
                    section.data(1).logicalSrcIdx = 10;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.gm0m00b0cq
                    section.data(2).logicalSrcIdx = 11;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.j24sb1yofu
                    section.data(3).logicalSrcIdx = 12;
                    section.data(3).dtTransOffset = 2;

                    ;% rtDW.llrigqtdbo
                    section.data(4).logicalSrcIdx = 13;
                    section.data(4).dtTransOffset = 3;

                    ;% rtDW.d2rl0ftjnt
                    section.data(5).logicalSrcIdx = 14;
                    section.data(5).dtTransOffset = 4;

                    ;% rtDW.h1fg01ehox
                    section.data(6).logicalSrcIdx = 15;
                    section.data(6).dtTransOffset = 5;

                    ;% rtDW.dpeqg0do3s
                    section.data(7).logicalSrcIdx = 16;
                    section.data(7).dtTransOffset = 6;

                    ;% rtDW.l1oy2ljexe
                    section.data(8).logicalSrcIdx = 17;
                    section.data(8).dtTransOffset = 7;

                    ;% rtDW.ksjycxges0
                    section.data(9).logicalSrcIdx = 18;
                    section.data(9).dtTransOffset = 8;

                    ;% rtDW.iel4ohv1uu
                    section.data(10).logicalSrcIdx = 19;
                    section.data(10).dtTransOffset = 9;

                    ;% rtDW.mexbnbhdn3.LoggedData
                    section.data(11).logicalSrcIdx = 20;
                    section.data(11).dtTransOffset = 10;

                    ;% rtDW.co20mzxnzd.LoggedData
                    section.data(12).logicalSrcIdx = 21;
                    section.data(12).dtTransOffset = 11;

                    ;% rtDW.alxh3ftyis.LoggedData
                    section.data(13).logicalSrcIdx = 22;
                    section.data(13).dtTransOffset = 13;

                    ;% rtDW.dg3mjayekr.LoggedData
                    section.data(14).logicalSrcIdx = 23;
                    section.data(14).dtTransOffset = 15;

                    ;% rtDW.jfpvblliou.LoggedData
                    section.data(15).logicalSrcIdx = 24;
                    section.data(15).dtTransOffset = 16;

                    ;% rtDW.hq4xd344ph.LoggedData
                    section.data(16).logicalSrcIdx = 25;
                    section.data(16).dtTransOffset = 17;

                    ;% rtDW.of5bqeziju.LoggedData
                    section.data(17).logicalSrcIdx = 26;
                    section.data(17).dtTransOffset = 19;

                    ;% rtDW.nzvg2kss4a.LoggedData
                    section.data(18).logicalSrcIdx = 27;
                    section.data(18).dtTransOffset = 20;

                    ;% rtDW.nvndnr13w5.LoggedData
                    section.data(19).logicalSrcIdx = 28;
                    section.data(19).dtTransOffset = 21;

                    ;% rtDW.eshjkr3yqz.LoggedData
                    section.data(20).logicalSrcIdx = 29;
                    section.data(20).dtTransOffset = 22;

                    ;% rtDW.d2o3j0zjsq.LoggedData
                    section.data(21).logicalSrcIdx = 30;
                    section.data(21).dtTransOffset = 24;

            nTotData = nTotData + section.nData;
            dworkMap.sections(3) = section;
            clear section

            section.nData     = 2;
            section.data(2)  = dumData; %prealloc

                    ;% rtDW.ohzhxlmfeq
                    section.data(1).logicalSrcIdx = 31;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.jl3atcwzyb
                    section.data(2).logicalSrcIdx = 32;
                    section.data(2).dtTransOffset = 1;

            nTotData = nTotData + section.nData;
            dworkMap.sections(4) = section;
            clear section

            section.nData     = 4;
            section.data(4)  = dumData; %prealloc

                    ;% rtDW.aysnlclzmm
                    section.data(1).logicalSrcIdx = 33;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.hbxlgtkw0k
                    section.data(2).logicalSrcIdx = 34;
                    section.data(2).dtTransOffset = 74;

                    ;% rtDW.kqtei5yteo
                    section.data(3).logicalSrcIdx = 35;
                    section.data(3).dtTransOffset = 75;

                    ;% rtDW.plv3jzt5fb
                    section.data(4).logicalSrcIdx = 36;
                    section.data(4).dtTransOffset = 76;

            nTotData = nTotData + section.nData;
            dworkMap.sections(5) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.c014wwns5r
                    section.data(1).logicalSrcIdx = 37;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(6) = section;
            clear section

            section.nData     = 4;
            section.data(4)  = dumData; %prealloc

                    ;% rtDW.gdbdtpq3sd
                    section.data(1).logicalSrcIdx = 38;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.a2sh2jpidr
                    section.data(2).logicalSrcIdx = 39;
                    section.data(2).dtTransOffset = 78;

                    ;% rtDW.dijuzt4qqx
                    section.data(3).logicalSrcIdx = 40;
                    section.data(3).dtTransOffset = 156;

                    ;% rtDW.h2j04rsdlc
                    section.data(4).logicalSrcIdx = 41;
                    section.data(4).dtTransOffset = 157;

            nTotData = nTotData + section.nData;
            dworkMap.sections(7) = section;
            clear section

            section.nData     = 3;
            section.data(3)  = dumData; %prealloc

                    ;% rtDW.agbmberyid
                    section.data(1).logicalSrcIdx = 42;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.lvdamp5ela
                    section.data(2).logicalSrcIdx = 43;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.kbudmxztdb
                    section.data(3).logicalSrcIdx = 44;
                    section.data(3).dtTransOffset = 2;

            nTotData = nTotData + section.nData;
            dworkMap.sections(8) = section;
            clear section


            ;%
            ;% Non-auto Data (dwork)
            ;%


        ;%
        ;% Add final counts to struct.
        ;%
        dworkMap.nTotData = nTotData;



    ;%
    ;% Add individual maps to base struct.
    ;%

    targMap.paramMap  = paramMap;
    targMap.signalMap = sigMap;
    targMap.dworkMap  = dworkMap;

    ;%
    ;% Add checksums to base struct.
    ;%


    targMap.checksum0 = 3417737163;
    targMap.checksum1 = 3313404931;
    targMap.checksum2 = 2695279267;
    targMap.checksum3 = 775507009;

