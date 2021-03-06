#include <ToneUndef.h>
#ifndef TONE_VERIFIED
#define TONE_VERIFIED
#endif
#ifdef TONE_USE_INT
#define NOTE_C0  (16)
#define NOTE_CS0  (17)
#define NOTE_D0  (18)
#define NOTE_DS0  (19)
#define NOTE_E0  (20)
#define NOTE_F0  (21)
#define NOTE_FS0  (22)
#define NOTE_G0  (24)
#define NOTE_GS0  (25)
#define NOTE_A0  (27)
#define NOTE_AS0  (28)
#define NOTE_B0  (30)
#define NOTE_C1  (32)
#define NOTE_CS1  (34)
#define NOTE_D1  (36)
#define NOTE_DS1  (38)
#define NOTE_E1  (40)
#define NOTE_F1  (43)
#define NOTE_FS1  (45)
#define NOTE_G1  (48)
#define NOTE_GS1  (51)
#define NOTE_A1  (54)
#define NOTE_AS1  (57)
#define NOTE_B1  (60)
#define NOTE_C2  (64)
#define NOTE_CS2  (68)
#define NOTE_D2  (72)
#define NOTE_DS2  (76)
#define NOTE_E2  (81)
#define NOTE_F2  (86)
#define NOTE_FS2  (91)
#define NOTE_G2  (96)
#define NOTE_GS2  (102)
#define NOTE_A2  (108)
#define NOTE_AS2  (114)
#define NOTE_B2  (121)
#define NOTE_C3  (129)
#define NOTE_CS3  (136)
#define NOTE_D3  (144)
#define NOTE_DS3  (153)
#define NOTE_E3  (162)
#define NOTE_F3  (172)
#define NOTE_FS3  (182)
#define NOTE_G3  (193)
#define NOTE_GS3  (204)
#define NOTE_A3  (217)
#define NOTE_AS3  (229)
#define NOTE_B3  (243)
#define NOTE_C4  (258)
#define NOTE_CS4  (273)
#define NOTE_D4  (289)
#define NOTE_DS4  (306)
#define NOTE_E4  (325)
#define NOTE_F4  (344)
#define NOTE_FS4  (364)
#define NOTE_G4  (386)
#define NOTE_GS4  (409)
#define NOTE_A4  (434)
#define NOTE_AS4  (459)
#define NOTE_B4  (487)
#define NOTE_C5  (516)
#define NOTE_CS5  (546)
#define NOTE_D5  (579)
#define NOTE_DS5  (613)
#define NOTE_E5  (650)
#define NOTE_F5  (688)
#define NOTE_FS5  (729)
#define NOTE_G5  (773)
#define NOTE_GS5  (819)
#define NOTE_A5  (868)
#define NOTE_AS5  (919)
#define NOTE_B5  (974)
#define NOTE_C6  (1032)
#define NOTE_CS6  (1093)
#define NOTE_D6  (1158)
#define NOTE_DS6  (1227)
#define NOTE_E6  (1300)
#define NOTE_F6  (1377)
#define NOTE_FS6  (1459)
#define NOTE_G6  (1546)
#define NOTE_GS6  (1638)
#define NOTE_A6  (1736)
#define NOTE_AS6  (1839)
#define NOTE_B6  (1948)
#define NOTE_C7  (2064)
#define NOTE_CS7  (2187)
#define NOTE_D7  (2317)
#define NOTE_DS7  (2455)
#define NOTE_E7  (2601)
#define NOTE_F7  (2755)
#define NOTE_FS7  (2919)
#define NOTE_G7  (3093)
#define NOTE_GS7  (3277)
#define NOTE_A7  (3472)
#define NOTE_AS7  (3678)
#define NOTE_B7  (3897)
#define NOTE_C8  (4128)
#define NOTE_CS8  (4374)
#define NOTE_D8  (4634)
#define NOTE_DS8  (4910)
#define NOTE_E8  (5202)
#define NOTE_F8  (5511)
#define NOTE_FS8  (5839)
#define NOTE_G8  (6186)
#define NOTE_GS8  (6554)
#define NOTE_A8  (6944)
#define NOTE_AS8  (7356)
#define NOTE_B8  (7794)
#else 
#define NOTE_C0  (16.13)
#define NOTE_CS0  (17.09)
#define NOTE_D0  (18.10)
#define NOTE_DS0  (19.18)
#define NOTE_E0  (20.32)
#define NOTE_F0  (21.53)
#define NOTE_FS0  (22.81)
#define NOTE_G0  (24.17)
#define NOTE_GS0  (25.60)
#define NOTE_A0  (27.12)
#define NOTE_AS0  (28.74)
#define NOTE_B0  (30.45)
#define NOTE_C1  (32.26)
#define NOTE_CS1  (34.18)
#define NOTE_D1  (36.21)
#define NOTE_DS1  (38.36)
#define NOTE_E1  (40.64)
#define NOTE_F1  (43.06)
#define NOTE_FS1  (45.62)
#define NOTE_G1  (48.33)
#define NOTE_GS1  (51.21)
#define NOTE_A1  (54.25)
#define NOTE_AS1  (57.48)
#define NOTE_B1  (60.89)
#define NOTE_C2  (64.51)
#define NOTE_CS2  (68.35)
#define NOTE_D2  (72.42)
#define NOTE_DS2  (76.72)
#define NOTE_E2  (81.28)
#define NOTE_F2  (86.12)
#define NOTE_FS2  (91.24)
#define NOTE_G2  (96.66)
#define NOTE_GS2  (102.41)
#define NOTE_A2  (108.50)
#define NOTE_AS2  (114.95)
#define NOTE_B2  (121.79)
#define NOTE_C3  (129.03)
#define NOTE_CS3  (136.70)
#define NOTE_D3  (144.83)
#define NOTE_DS3  (153.44)
#define NOTE_E3  (162.57)
#define NOTE_F3  (172.23)
#define NOTE_FS3  (182.47)
#define NOTE_G3  (193.32)
#define NOTE_GS3  (204.82)
#define NOTE_A3  (217.00)
#define NOTE_AS3  (229.90)
#define NOTE_B3  (243.57)
#define NOTE_C4  (258.06)
#define NOTE_CS4  (273.40)
#define NOTE_D4  (289.66)
#define NOTE_DS4  (306.88)
#define NOTE_E4  (325.13)
#define NOTE_F4  (344.47)
#define NOTE_FS4  (364.95)
#define NOTE_G4  (386.65)
#define NOTE_GS4  (409.64)
#define NOTE_A4  (434.00)
#define NOTE_AS4  (459.81)
#define NOTE_B4  (487.15)
#define NOTE_C5  (516.12)
#define NOTE_CS5  (546.81)
#define NOTE_D5  (579.32)
#define NOTE_DS5  (613.77)
#define NOTE_E5  (650.27)
#define NOTE_F5  (688.93)
#define NOTE_FS5  (729.90)
#define NOTE_G5  (773.30)
#define NOTE_GS5  (819.28)
#define NOTE_A5  (868.00)
#define NOTE_AS5  (919.61)
#define NOTE_B5  (974.30)
#define NOTE_C6  (1032.23)
#define NOTE_CS6  (1093.61)
#define NOTE_D6  (1158.64)
#define NOTE_DS6  (1227.54)
#define NOTE_E6  (1300.53)
#define NOTE_F6  (1377.86)
#define NOTE_FS6  (1459.80)
#define NOTE_G6  (1546.60)
#define NOTE_GS6  (1638.57)
#define NOTE_A6  (1736.00)
#define NOTE_AS6  (1839.23)
#define NOTE_B6  (1948.59)
#define NOTE_C7  (2064.46)
#define NOTE_CS7  (2187.22)
#define NOTE_D7  (2317.28)
#define NOTE_DS7  (2455.07)
#define NOTE_E7  (2601.06)
#define NOTE_F7  (2755.73)
#define NOTE_FS7  (2919.59)
#define NOTE_G7  (3093.20)
#define NOTE_GS7  (3277.13)
#define NOTE_A7  (3472.00)
#define NOTE_AS7  (3678.46)
#define NOTE_B7  (3897.19)
#define NOTE_C8  (4128.93)
#define NOTE_CS8  (4374.44)
#define NOTE_D8  (4634.56)
#define NOTE_DS8  (4910.15)
#define NOTE_E8  (5202.12)
#define NOTE_F8  (5511.46)
#define NOTE_FS8  (5839.18)
#define NOTE_G8  (6186.40)
#define NOTE_GS8  (6554.26)
#define NOTE_A8  (6944.00)
#define NOTE_AS8  (7356.91)
#define NOTE_B8  (7794.38)
#endif
