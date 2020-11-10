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
#define NOTE_FS0  (23)
#define NOTE_G0  (24)
#define NOTE_GS0  (25)
#define NOTE_A0  (27)
#define NOTE_AS0  (29)
#define NOTE_B0  (30)
#define NOTE_C1  (32)
#define NOTE_CS1  (34)
#define NOTE_D1  (36)
#define NOTE_DS1  (38)
#define NOTE_E1  (41)
#define NOTE_F1  (43)
#define NOTE_FS1  (46)
#define NOTE_G1  (48)
#define NOTE_GS1  (51)
#define NOTE_A1  (54)
#define NOTE_AS1  (58)
#define NOTE_B1  (61)
#define NOTE_C2  (65)
#define NOTE_CS2  (68)
#define NOTE_D2  (73)
#define NOTE_DS2  (77)
#define NOTE_E2  (82)
#define NOTE_F2  (86)
#define NOTE_FS2  (92)
#define NOTE_G2  (97)
#define NOTE_GS2  (103)
#define NOTE_A2  (109)
#define NOTE_AS2  (116)
#define NOTE_B2  (122)
#define NOTE_C3  (130)
#define NOTE_CS3  (137)
#define NOTE_D3  (146)
#define NOTE_DS3  (154)
#define NOTE_E3  (164)
#define NOTE_F3  (173)
#define NOTE_FS3  (184)
#define NOTE_G3  (195)
#define NOTE_GS3  (206)
#define NOTE_A3  (219)
#define NOTE_AS3  (232)
#define NOTE_B3  (245)
#define NOTE_C4  (260)
#define NOTE_CS4  (275)
#define NOTE_D4  (292)
#define NOTE_DS4  (309)
#define NOTE_E4  (328)
#define NOTE_F4  (347)
#define NOTE_FS4  (368)
#define NOTE_G4  (390)
#define NOTE_GS4  (413)
#define NOTE_A4  (438)
#define NOTE_AS4  (464)
#define NOTE_B4  (491)
#define NOTE_C5  (520)
#define NOTE_CS5  (551)
#define NOTE_D5  (584)
#define NOTE_DS5  (619)
#define NOTE_E5  (656)
#define NOTE_F5  (695)
#define NOTE_FS5  (736)
#define NOTE_G5  (780)
#define NOTE_GS5  (826)
#define NOTE_A5  (876)
#define NOTE_AS5  (928)
#define NOTE_B5  (983)
#define NOTE_C6  (1041)
#define NOTE_CS6  (1103)
#define NOTE_D6  (1169)
#define NOTE_DS6  (1238)
#define NOTE_E6  (1312)
#define NOTE_F6  (1390)
#define NOTE_FS6  (1473)
#define NOTE_G6  (1560)
#define NOTE_GS6  (1653)
#define NOTE_A6  (1752)
#define NOTE_AS6  (1856)
#define NOTE_B6  (1966)
#define NOTE_C7  (2083)
#define NOTE_CS7  (2207)
#define NOTE_D7  (2338)
#define NOTE_DS7  (2477)
#define NOTE_E7  (2625)
#define NOTE_F7  (2781)
#define NOTE_FS7  (2946)
#define NOTE_G7  (3121)
#define NOTE_GS7  (3307)
#define NOTE_A7  (3504)
#define NOTE_AS7  (3712)
#define NOTE_B7  (3933)
#define NOTE_C8  (4166)
#define NOTE_CS8  (4414)
#define NOTE_D8  (4677)
#define NOTE_DS8  (4955)
#define NOTE_E8  (5250)
#define NOTE_F8  (5562)
#define NOTE_FS8  (5893)
#define NOTE_G8  (6243)
#define NOTE_GS8  (6614)
#define NOTE_A8  (7008)
#define NOTE_AS8  (7424)
#define NOTE_B8  (7866)
#else 
#define NOTE_C0  (16.28)
#define NOTE_CS0  (17.25)
#define NOTE_D0  (18.27)
#define NOTE_DS0  (19.36)
#define NOTE_E0  (20.51)
#define NOTE_F0  (21.73)
#define NOTE_FS0  (23.02)
#define NOTE_G0  (24.39)
#define NOTE_GS0  (25.84)
#define NOTE_A0  (27.38)
#define NOTE_AS0  (29.00)
#define NOTE_B0  (30.73)
#define NOTE_C1  (32.55)
#define NOTE_CS1  (34.49)
#define NOTE_D1  (36.54)
#define NOTE_DS1  (38.71)
#define NOTE_E1  (41.02)
#define NOTE_F1  (43.46)
#define NOTE_FS1  (46.04)
#define NOTE_G1  (48.78)
#define NOTE_GS1  (51.68)
#define NOTE_A1  (54.75)
#define NOTE_AS1  (58.01)
#define NOTE_B1  (61.45)
#define NOTE_C2  (65.11)
#define NOTE_CS2  (68.98)
#define NOTE_D2  (73.08)
#define NOTE_DS2  (77.43)
#define NOTE_E2  (82.03)
#define NOTE_F2  (86.91)
#define NOTE_FS2  (92.08)
#define NOTE_G2  (97.55)
#define NOTE_GS2  (103.35)
#define NOTE_A2  (109.50)
#define NOTE_AS2  (116.01)
#define NOTE_B2  (122.91)
#define NOTE_C3  (130.22)
#define NOTE_CS3  (137.96)
#define NOTE_D3  (146.16)
#define NOTE_DS3  (154.86)
#define NOTE_E3  (164.06)
#define NOTE_F3  (173.82)
#define NOTE_FS3  (184.16)
#define NOTE_G3  (195.11)
#define NOTE_GS3  (206.71)
#define NOTE_A3  (219.00)
#define NOTE_AS3  (232.02)
#define NOTE_B3  (245.82)
#define NOTE_C4  (260.44)
#define NOTE_CS4  (275.92)
#define NOTE_D4  (292.33)
#define NOTE_DS4  (309.71)
#define NOTE_E4  (328.13)
#define NOTE_F4  (347.64)
#define NOTE_FS4  (368.31)
#define NOTE_G4  (390.21)
#define NOTE_GS4  (413.42)
#define NOTE_A4  (438.00)
#define NOTE_AS4  (464.04)
#define NOTE_B4  (491.64)
#define NOTE_C5  (520.87)
#define NOTE_CS5  (551.85)
#define NOTE_D5  (584.66)
#define NOTE_DS5  (619.43)
#define NOTE_E5  (656.26)
#define NOTE_F5  (695.28)
#define NOTE_FS5  (736.63)
#define NOTE_G5  (780.43)
#define NOTE_GS5  (826.83)
#define NOTE_A5  (876.00)
#define NOTE_AS5  (928.09)
#define NOTE_B5  (983.28)
#define NOTE_C6  (1041.74)
#define NOTE_CS6  (1103.69)
#define NOTE_D6  (1169.32)
#define NOTE_DS6  (1238.85)
#define NOTE_E6  (1312.52)
#define NOTE_F6  (1390.56)
#define NOTE_FS6  (1473.25)
#define NOTE_G6  (1560.85)
#define NOTE_GS6  (1653.67)
#define NOTE_A6  (1752.00)
#define NOTE_AS6  (1856.18)
#define NOTE_B6  (1966.55)
#define NOTE_C7  (2083.49)
#define NOTE_CS7  (2207.38)
#define NOTE_D7  (2338.64)
#define NOTE_DS7  (2477.70)
#define NOTE_E7  (2625.03)
#define NOTE_F7  (2781.13)
#define NOTE_FS7  (2946.50)
#define NOTE_G7  (3121.71)
#define NOTE_GS7  (3307.34)
#define NOTE_A7  (3504.00)
#define NOTE_AS7  (3712.36)
#define NOTE_B7  (3933.11)
#define NOTE_C8  (4166.98)
#define NOTE_CS8  (4414.76)
#define NOTE_D8  (4677.28)
#define NOTE_DS8  (4955.40)
#define NOTE_E8  (5250.07)
#define NOTE_F8  (5562.25)
#define NOTE_FS8  (5893.00)
#define NOTE_G8  (6243.42)
#define NOTE_GS8  (6614.67)
#define NOTE_A8  (7008.00)
#define NOTE_AS8  (7424.72)
#define NOTE_B8  (7866.21)
#endif