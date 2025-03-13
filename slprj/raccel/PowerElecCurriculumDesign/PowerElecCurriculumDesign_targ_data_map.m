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
            section.nData     = 12;
            section.data(12)  = dumData; %prealloc

                    ;% rtP.RepeatingSequence_rep_seq_y
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% rtP.PulseGenerator_Amp
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 3;

                    ;% rtP.PulseGenerator_Period
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 4;

                    ;% rtP.PulseGenerator_Duty
                    section.data(4).logicalSrcIdx = 3;
                    section.data(4).dtTransOffset = 5;

                    ;% rtP.PulseGenerator_PhaseDelay
                    section.data(5).logicalSrcIdx = 4;
                    section.data(5).dtTransOffset = 6;

                    ;% rtP.LookUpTable1_bp01Data
                    section.data(6).logicalSrcIdx = 5;
                    section.data(6).dtTransOffset = 7;

                    ;% rtP.SineWave_Amp
                    section.data(7).logicalSrcIdx = 6;
                    section.data(7).dtTransOffset = 10;

                    ;% rtP.SineWave_Bias
                    section.data(8).logicalSrcIdx = 7;
                    section.data(8).dtTransOffset = 11;

                    ;% rtP.SineWave_Freq
                    section.data(9).logicalSrcIdx = 8;
                    section.data(9).dtTransOffset = 12;

                    ;% rtP.SineWave_Phase
                    section.data(10).logicalSrcIdx = 9;
                    section.data(10).dtTransOffset = 13;

                    ;% rtP.Constant_Value
                    section.data(11).logicalSrcIdx = 10;
                    section.data(11).dtTransOffset = 14;

                    ;% rtP.Constant_Value_n4aqhn1fhp
                    section.data(12).logicalSrcIdx = 11;
                    section.data(12).dtTransOffset = 15;

            nTotData = nTotData + section.nData;
            paramMap.sections(1) = section;
            clear section

            section.nData     = 2;
            section.data(2)  = dumData; %prealloc

                    ;% rtP.Constant_Value_azpurcqvrs
                    section.data(1).logicalSrcIdx = 12;
                    section.data(1).dtTransOffset = 0;

                    ;% rtP.Constant_Value_kvcj4gt0ry
                    section.data(2).logicalSrcIdx = 13;
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
            section.nData     = 13;
            section.data(13)  = dumData; %prealloc

                    ;% rtB.bqbjyzq0dx
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% rtB.d4jymh4nxd
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 1;

                    ;% rtB.e3lyudtmtl
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 5;

                    ;% rtB.gzs1upx1ld
                    section.data(4).logicalSrcIdx = 3;
                    section.data(4).dtTransOffset = 6;

                    ;% rtB.mfabkmo1fw
                    section.data(5).logicalSrcIdx = 4;
                    section.data(5).dtTransOffset = 7;

                    ;% rtB.khv2ifj12b
                    section.data(6).logicalSrcIdx = 5;
                    section.data(6).dtTransOffset = 8;

                    ;% rtB.hh4njpdtv0
                    section.data(7).logicalSrcIdx = 6;
                    section.data(7).dtTransOffset = 12;

                    ;% rtB.f30llq3r5r
                    section.data(8).logicalSrcIdx = 7;
                    section.data(8).dtTransOffset = 13;

                    ;% rtB.c0sk0m0en4
                    section.data(9).logicalSrcIdx = 8;
                    section.data(9).dtTransOffset = 17;

                    ;% rtB.antypkipw4
                    section.data(10).logicalSrcIdx = 9;
                    section.data(10).dtTransOffset = 21;

                    ;% rtB.gx1b4l2gux
                    section.data(11).logicalSrcIdx = 10;
                    section.data(11).dtTransOffset = 182;

                    ;% rtB.bea5qhjk50
                    section.data(12).logicalSrcIdx = 11;
                    section.data(12).dtTransOffset = 195;

                    ;% rtB.lgt3rvvya0
                    section.data(13).logicalSrcIdx = 12;
                    section.data(13).dtTransOffset = 196;

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
            section.nData     = 13;
            section.data(13)  = dumData; %prealloc

                    ;% rtDW.eqxw5ipaqu
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.bu2ap5h1zw
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 2;

                    ;% rtDW.l3dkmxtkup
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 4;

                    ;% rtDW.ndakhsxbau
                    section.data(4).logicalSrcIdx = 3;
                    section.data(4).dtTransOffset = 6;

                    ;% rtDW.cowewv1m30
                    section.data(5).logicalSrcIdx = 4;
                    section.data(5).dtTransOffset = 8;

                    ;% rtDW.be21jvh4m5
                    section.data(6).logicalSrcIdx = 5;
                    section.data(6).dtTransOffset = 91;

                    ;% rtDW.hujy3sr5qa
                    section.data(7).logicalSrcIdx = 6;
                    section.data(7).dtTransOffset = 92;

                    ;% rtDW.biae4oaxki
                    section.data(8).logicalSrcIdx = 7;
                    section.data(8).dtTransOffset = 176;

                    ;% rtDW.mathxaaa54
                    section.data(9).logicalSrcIdx = 8;
                    section.data(9).dtTransOffset = 177;

                    ;% rtDW.nosrs3fidx
                    section.data(10).logicalSrcIdx = 9;
                    section.data(10).dtTransOffset = 178;

                    ;% rtDW.gagkrcvl21
                    section.data(11).logicalSrcIdx = 10;
                    section.data(11).dtTransOffset = 179;

                    ;% rtDW.otfubklm10
                    section.data(12).logicalSrcIdx = 11;
                    section.data(12).dtTransOffset = 180;

                    ;% rtDW.ektz4axiiq
                    section.data(13).logicalSrcIdx = 12;
                    section.data(13).dtTransOffset = 181;

            nTotData = nTotData + section.nData;
            dworkMap.sections(1) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.g2kvorjwgo
                    section.data(1).logicalSrcIdx = 13;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(2) = section;
            clear section

            section.nData     = 22;
            section.data(22)  = dumData; %prealloc

                    ;% rtDW.ahk0b0xovg
                    section.data(1).logicalSrcIdx = 14;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.avzvouupma
                    section.data(2).logicalSrcIdx = 15;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.iti3hdl1fz
                    section.data(3).logicalSrcIdx = 16;
                    section.data(3).dtTransOffset = 2;

                    ;% rtDW.ox0lvdvqpj
                    section.data(4).logicalSrcIdx = 17;
                    section.data(4).dtTransOffset = 3;

                    ;% rtDW.muo3vhtfq4
                    section.data(5).logicalSrcIdx = 18;
                    section.data(5).dtTransOffset = 4;

                    ;% rtDW.mmmuzbxi3e
                    section.data(6).logicalSrcIdx = 19;
                    section.data(6).dtTransOffset = 5;

                    ;% rtDW.j34nvcnrrz
                    section.data(7).logicalSrcIdx = 20;
                    section.data(7).dtTransOffset = 6;

                    ;% rtDW.mo1bheafsg
                    section.data(8).logicalSrcIdx = 21;
                    section.data(8).dtTransOffset = 7;

                    ;% rtDW.lwdcez4qca
                    section.data(9).logicalSrcIdx = 22;
                    section.data(9).dtTransOffset = 8;

                    ;% rtDW.hrgh03s5hg
                    section.data(10).logicalSrcIdx = 23;
                    section.data(10).dtTransOffset = 9;

                    ;% rtDW.imtv1ikkob.LoggedData
                    section.data(11).logicalSrcIdx = 24;
                    section.data(11).dtTransOffset = 10;

                    ;% rtDW.fzpvdsa1iq
                    section.data(12).logicalSrcIdx = 25;
                    section.data(12).dtTransOffset = 15;

                    ;% rtDW.jtosohksrj
                    section.data(13).logicalSrcIdx = 26;
                    section.data(13).dtTransOffset = 16;

                    ;% rtDW.nhjis5yhic
                    section.data(14).logicalSrcIdx = 27;
                    section.data(14).dtTransOffset = 17;

                    ;% rtDW.jwlodnitzv
                    section.data(15).logicalSrcIdx = 28;
                    section.data(15).dtTransOffset = 18;

                    ;% rtDW.f5ciyeaxlh
                    section.data(16).logicalSrcIdx = 29;
                    section.data(16).dtTransOffset = 19;

                    ;% rtDW.gg3m2wwxtm
                    section.data(17).logicalSrcIdx = 30;
                    section.data(17).dtTransOffset = 20;

                    ;% rtDW.ia5hdvfnyf
                    section.data(18).logicalSrcIdx = 31;
                    section.data(18).dtTransOffset = 21;

                    ;% rtDW.mv3ojv2n2a
                    section.data(19).logicalSrcIdx = 32;
                    section.data(19).dtTransOffset = 22;

                    ;% rtDW.oureyvll2s
                    section.data(20).logicalSrcIdx = 33;
                    section.data(20).dtTransOffset = 23;

                    ;% rtDW.gsrr3boy5t
                    section.data(21).logicalSrcIdx = 34;
                    section.data(21).dtTransOffset = 24;

                    ;% rtDW.dtf5ktu0oy.LoggedData
                    section.data(22).logicalSrcIdx = 35;
                    section.data(22).dtTransOffset = 25;

            nTotData = nTotData + section.nData;
            dworkMap.sections(3) = section;
            clear section

            section.nData     = 2;
            section.data(2)  = dumData; %prealloc

                    ;% rtDW.nbbv5gde22
                    section.data(1).logicalSrcIdx = 36;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.mfduvdp04x
                    section.data(2).logicalSrcIdx = 37;
                    section.data(2).dtTransOffset = 1;

            nTotData = nTotData + section.nData;
            dworkMap.sections(4) = section;
            clear section

            section.nData     = 4;
            section.data(4)  = dumData; %prealloc

                    ;% rtDW.aitoajng4b
                    section.data(1).logicalSrcIdx = 38;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.j2ywn1tz2f
                    section.data(2).logicalSrcIdx = 39;
                    section.data(2).dtTransOffset = 80;

                    ;% rtDW.ibj1gtgw5z
                    section.data(3).logicalSrcIdx = 40;
                    section.data(3).dtTransOffset = 81;

                    ;% rtDW.aha51gyvzc
                    section.data(4).logicalSrcIdx = 41;
                    section.data(4).dtTransOffset = 82;

            nTotData = nTotData + section.nData;
            dworkMap.sections(5) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.n2bqajqtph
                    section.data(1).logicalSrcIdx = 42;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(6) = section;
            clear section

            section.nData     = 8;
            section.data(8)  = dumData; %prealloc

                    ;% rtDW.e3wigxva1h
                    section.data(1).logicalSrcIdx = 43;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.b0g44fcvf4
                    section.data(2).logicalSrcIdx = 44;
                    section.data(2).dtTransOffset = 84;

                    ;% rtDW.o2agmntgwx
                    section.data(3).logicalSrcIdx = 45;
                    section.data(3).dtTransOffset = 168;

                    ;% rtDW.jj20uftslt
                    section.data(4).logicalSrcIdx = 46;
                    section.data(4).dtTransOffset = 169;

                    ;% rtDW.fxjjl0vnkj
                    section.data(5).logicalSrcIdx = 47;
                    section.data(5).dtTransOffset = 170;

                    ;% rtDW.hmcgtpzjhj
                    section.data(6).logicalSrcIdx = 48;
                    section.data(6).dtTransOffset = 171;

                    ;% rtDW.etqduttqdz
                    section.data(7).logicalSrcIdx = 49;
                    section.data(7).dtTransOffset = 172;

                    ;% rtDW.fm3ahzflhh
                    section.data(8).logicalSrcIdx = 50;
                    section.data(8).dtTransOffset = 173;

            nTotData = nTotData + section.nData;
            dworkMap.sections(7) = section;
            clear section

            section.nData     = 5;
            section.data(5)  = dumData; %prealloc

                    ;% rtDW.aqch01fh2d
                    section.data(1).logicalSrcIdx = 51;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.cdarvsloed
                    section.data(2).logicalSrcIdx = 52;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.bbigt0bkaa
                    section.data(3).logicalSrcIdx = 53;
                    section.data(3).dtTransOffset = 2;

                    ;% rtDW.fy1435topv
                    section.data(4).logicalSrcIdx = 54;
                    section.data(4).dtTransOffset = 3;

                    ;% rtDW.d11s1nwvhm
                    section.data(5).logicalSrcIdx = 55;
                    section.data(5).dtTransOffset = 4;

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


    targMap.checksum0 = 3545317450;
    targMap.checksum1 = 4198979647;
    targMap.checksum2 = 4040043506;
    targMap.checksum3 = 356543726;

