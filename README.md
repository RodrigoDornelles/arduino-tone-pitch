Arduino Tone Pitch `TonePitch`
==============================
[![version](https://img.shields.io/github/v/release/rodrigodornelles/arduino-tone-pitch?sort=semver)](https://github.com/RodrigoDornelles/arduino-tone-pitch/releases) [![size](https://img.shields.io/badge/repo%20size-327%20MB-blue)](https://github.com/RodrigoDornelles/arduino-tone-pitch/archive/master.zip) [![license](https://img.shields.io/github/license/rodrigodornelles/arduino-tone-pitch)](https://github.com/RodrigoDornelles/arduino-tone-pitch/blob/master/LICENSE.txt) [![quality](https://app.codacy.com/project/badge/Grade/18b3e3b7c2294e82b2a2e976a5b50d2c)](https://www.codacy.com/gh/RodrigoDornelles/arduino-tone-pitch/dashboard?utm_source=github.com&amp;utm_medium=referral&amp;utm_content=RodrigoDornelles/arduino-tone-pitch&amp;utm_campaign=Badge_Grade)

this library is very important for those who prefer to have the buzzer tuned correctly for their musical project, it is fully compatible with other third party libraries.

## How to Use ##
### Simple Bip ###
```C
#include <Arduino.h>

#define TONE_USE_INT
#define TONE_PITCH 440
#include <TonePitch.h>

void setup(){}

void loop()
{
  tone(8, NOTE_C4, 500);
  delay(1000);
}
```

## Tuning frequency list ##
| Note | Frequency<br/>_432 Hz_ | Frequency<br/>_434 Hz_ | Frequency<br/>_436 Hz_ | Frequency<br/>_438 Hz_ | Frequency<br/>_440 Hz_ | Frequency<br/>_442 Hz_ | Frequency<br/>_444 Hz_ | Frequency<br/>_446 Hz_ |
| - | - | - | - | - | - | - | - | - |
| `C0` | 16.05 | 16.13 | 16.20 | 16.28 | 16.35 | 16.43 | 16.50 | 16.57 |
| `C#0` `Db0`  | 17.01 | 17.09 | 17.17 | 17.25 | 17.32 | 17.40 | 17.48 | 17.56 |
| `D0` | 18.02 | 18.10 | 18.19 | 18.27 | 18.35 | 18.44 | 18.52 | 18.60 |
| `D#0` `Eb0`  | 19.09 | 19.18 | 19.27 | 19.36 | 19.45 | 19.53 | 19.62 | 19.71 |
| `E0` | 20.23 | 20.32 | 20.41 | 20.51 | 20.60 | 20.70 | 20.79 | 20.88 |
| `F0` | 21.43 | 21.53 | 21.63 | 21.73 | 21.83 | 21.93 | 22.03 | 22.12 |
| `F#0` `Gb0`  | 22.70 | 22.81 | 22.91 | 23.02 | 23.12 | 23.23 | 23.33 | 23.44 |
| `G0` | 24.05 | 24.17 | 24.28 | 24.39 | 24.50 | 24.61 | 24.72 | 24.83 |
| `G#0` `Ab0`  | 25.48 | 25.60 | 25.72 | 25.84 | 25.96 | 26.07 | 26.19 | 26.31 |
| `A0` | 27.00 | 27.12 | 27.25 | 27.38 | 27.50 | 27.62 | 27.75 | 27.88 |
| `A#0` `Bb0`  | 28.61 | 28.74 | 28.87 | 29.00 | 29.14 | 29.27 | 29.40 | 29.53 |
| `B0` | 30.31 | 30.45 | 30.59 | 30.73 | 30.87 | 31.01 | 31.15 | 31.29 |
| `C1` | 32.11 | 32.26 | 32.41 | 32.55 | 32.70 | 32.85 | 33.00 | 33.15 |
| `C#1` `Db1`  | 34.02 | 34.18 | 34.33 | 34.49 | 34.65 | 34.81 | 34.96 | 35.12 |
| `D1` | 36.04 | 36.21 | 36.37 | 36.54 | 36.71 | 36.87 | 37.04 | 37.21 |
| `D#1` `Eb1`  | 38.18 | 38.36 | 38.54 | 38.71 | 38.89 | 39.07 | 39.24 | 39.42 |
| `E1` | 40.45 | 40.64 | 40.83 | 41.02 | 41.20 | 41.39 | 41.58 | 41.77 |
| `F1` | 42.86 | 43.06 | 43.26 | 43.46 | 43.65 | 43.85 | 44.05 | 44.25 |
| `F#1` `Gb1`  | 45.41 | 45.62 | 45.83 | 46.04 | 46.25 | 46.46 | 46.67 | 46.88 |
| `G1` | 48.11 | 48.33 | 48.55 | 48.78 | 49.00 | 49.22 | 49.44 | 49.67 |
| `G#1` `Ab1`  | 50.97 | 51.21 | 51.44 | 51.68 | 51.91 | 52.15 | 52.39 | 52.62 |
| `A1` | 54.00 | 54.25 | 54.50 | 54.75 | 55.00 | 55.25 | 55.50 | 55.75 |
| `A#1` `Bb1`  | 57.21 | 57.48 | 57.74 | 58.01 | 58.27 | 58.54 | 58.80 | 59.07 |
| `B1` | 60.61 | 60.89 | 61.17 | 61.45 | 61.74 | 62.02 | 62.30 | 62.58 |
| `C2` | 64.22 | 64.51 | 64.81 | 65.11 | 65.41 | 65.70 | 66.00 | 66.30 |
| `C#2` `Db2`  | 68.04 | 68.35 | 68.67 | 68.98 | 69.30 | 69.61 | 69.93 | 70.24 |
| `D2` | 72.08 | 72.42 | 72.75 | 73.08 | 73.42 | 73.75 | 74.08 | 74.42 |
| `D#2` `Eb2`  | 76.37 | 76.72 | 77.07 | 77.43 | 77.78 | 78.14 | 78.49 | 78.84 |
| `E2` | 80.91 | 81.28 | 81.66 | 82.03 | 82.41 | 82.78 | 83.16 | 83.53 |
| `F2` | 85.72 | 86.12 | 86.51 | 86.91 | 87.31 | 87.70 | 88.10 | 88.50 |
| `F#2` `Gb2`  | 90.82 | 91.24 | 91.66 | 92.08 | 92.50 | 92.92 | 93.34 | 93.76 |
| `G2` | 96.22 | 96.66 | 97.11 | 97.55 | 98.00 | 98.44 | 98.89 | 99.34 |
| `G#2` `Ab2`  | 101.94 | 102.41 | 102.88 | 103.35 | 103.83 | 104.30 | 104.77 | 105.24 |
| `A2` | 108.00 | 108.50 | 109.00 | 109.50 | 110.00 | 110.50 | 111.00 | 111.50 |
| `A#2` `Bb2`  | 114.42 | 114.95 | 115.48 | 116.01 | 116.54 | 117.07 | 117.60 | 118.13 |
| `B2` | 121.23 | 121.79 | 122.35 | 122.91 | 123.47 | 124.03 | 124.59 | 125.15 |
| `C3` | 128.43 | 129.03 | 129.62 | 130.22 | 130.81 | 131.41 | 132.00 | 132.60 |
| `C#3` `Db3`  | 136.07 | 136.70 | 137.33 | 137.96 | 138.59 | 139.22 | 139.85 | 140.48 |
| `D3` | 144.16 | 144.83 | 145.50 | 146.16 | 146.83 | 147.50 | 148.17 | 148.83 |
| `D#3` `Eb3`  | 152.74 | 153.44 | 154.15 | 154.86 | 155.56 | 156.27 | 156.98 | 157.68 |
| `E3` | 161.82 | 162.57 | 163.32 | 164.06 | 164.81 | 165.56 | 166.31 | 167.06 |
| `F3` | 171.44 | 172.23 | 173.03 | 173.82 | 174.61 | 175.41 | 176.20 | 177.00 |
| `F#3` `Gb3`  | 181.63 | 182.47 | 183.32 | 184.16 | 185.00 | 185.84 | 186.68 | 187.52 |
| `G3` | 192.43 | 193.32 | 194.22 | 195.11 | 196.00 | 196.89 | 197.78 | 198.67 |
| `G#3` `Ab3`  | 203.88 | 204.82 | 205.76 | 206.71 | 207.65 | 208.60 | 209.54 | 210.48 |
| `A3` | 216.00 | 217.00 | 218.00 | 219.00 | 220.00 | 221.00 | 222.00 | 223.00 |
| `A#3` `Bb3`  | 228.84 | 229.90 | 230.96 | 232.02 | 233.08 | 234.14 | 235.20 | 236.26 |
| `B3` | 242.45 | 243.57 | 244.70 | 245.82 | 246.94 | 248.06 | 249.19 | 250.31 |
| `C4` | 256.87 | 258.06 | 259.25 | 260.44 | 261.63 | 262.81 | 264.00 | 265.19 |
| `C#4` `Db4`  | 272.14 | 273.40 | 274.66 | 275.92 | 277.18 | 278.44 | 279.70 | 280.96 |
| `D4` | 288.33 | 289.66 | 290.99 | 292.33 | 293.66 | 295.00 | 296.33 | 297.67 |
| `D#4` `Eb4`  | 305.47 | 306.88 | 308.30 | 309.71 | 311.13 | 312.54 | 313.96 | 315.37 |
| `E4` | 323.63 | 325.13 | 326.63 | 328.13 | 329.63 | 331.13 | 332.62 | 334.12 |
| `F4` | 342.88 | 344.47 | 346.05 | 347.64 | 349.23 | 350.82 | 352.40 | 353.99 |
| `F#4` `Gb4`  | 363.27 | 364.95 | 366.63 | 368.31 | 369.99 | 371.68 | 373.36 | 375.04 |
| `G4` | 384.87 | 386.65 | 388.43 | 390.21 | 392.00 | 393.78 | 395.56 | 397.34 |
| `G#4` `Ab4`  | 407.75 | 409.64 | 411.53 | 413.42 | 415.30 | 417.19 | 419.08 | 420.97 |
| `A4` | 432.00 | 434.00 | 436.00 | 438.00 | 440.00 | 442.00 | 444.00 | 446.00 |
| `A#4` `Bb4`  | 457.69 | 459.81 | 461.93 | 464.04 | 466.16 | 468.28 | 470.40 | 472.52 |
| `B4` | 484.90 | 487.15 | 489.39 | 491.64 | 493.88 | 496.13 | 498.37 | 500.62 |
| `C5` | 513.74 | 516.12 | 518.49 | 520.87 | 523.25 | 525.63 | 528.01 | 530.39 |
| `C#5` `Db5`  | 544.29 | 546.81 | 549.33 | 551.85 | 554.37 | 556.88 | 559.40 | 561.92 |
| `D5` | 576.65 | 579.32 | 581.99 | 584.66 | 587.33 | 590.00 | 592.67 | 595.34 |
| `D#5` `Eb5`  | 610.94 | 613.77 | 616.60 | 619.43 | 622.25 | 625.08 | 627.91 | 630.74 |
| `E5` | 647.27 | 650.27 | 653.26 | 656.26 | 659.25 | 662.25 | 665.25 | 668.24 |
| `F5` | 685.76 | 688.93 | 692.11 | 695.28 | 698.46 | 701.63 | 704.81 | 707.98 |
| `F#5` `Gb5`  | 726.53 | 729.90 | 733.26 | 736.63 | 739.99 | 743.35 | 746.72 | 750.08 |
| `G5` | 769.74 | 773.30 | 776.86 | 780.43 | 783.99 | 787.55 | 791.12 | 794.68 |
| `G#5` `Ab5`  | 815.51 | 819.28 | 823.06 | 826.83 | 830.61 | 834.38 | 838.16 | 841.94 |
| `A5` | 864.00 | 868.00 | 872.00 | 876.00 | 880.00 | 884.00 | 888.00 | 892.00 |
| `A#5` `Bb5`  | 915.38 | 919.61 | 923.85 | 928.09 | 932.33 | 936.57 | 940.80 | 945.04 |
| `B5` | 969.81 | 974.30 | 978.79 | 983.28 | 987.77 | 992.26 | 996.75 | 1001.24 |
| `C6` | 1027.47 | 1032.23 | 1036.99 | 1041.74 | 1046.50 | 1051.26 | 1056.02 | 1060.77 |
| `C#6` `Db6`  | 1088.57 | 1093.61 | 1098.65 | 1103.69 | 1108.73 | 1113.77 | 1118.81 | 1123.85 |
| `D6` | 1153.30 | 1158.64 | 1163.98 | 1169.32 | 1174.66 | 1180.00 | 1185.34 | 1190.68 |
| `D#6` `Eb6`  | 1221.88 | 1227.54 | 1233.19 | 1238.85 | 1244.51 | 1250.16 | 1255.82 | 1261.48 |
| `E6` | 1294.54 | 1300.53 | 1306.52 | 1312.52 | 1318.51 | 1324.50 | 1330.50 | 1336.49 |
| `F6` | 1371.51 | 1377.86 | 1384.21 | 1390.56 | 1396.91 | 1403.26 | 1409.61 | 1415.96 |
| `F#6` `Gb6`  | 1453.07 | 1459.80 | 1466.52 | 1473.25 | 1479.98 | 1486.70 | 1493.43 | 1500.16 |
| `G6` | 1539.47 | 1546.60 | 1553.73 | 1560.85 | 1567.98 | 1575.11 | 1582.24 | 1589.36 |
| `G#6` `Ab6`  | 1631.01 | 1638.57 | 1646.12 | 1653.67 | 1661.22 | 1668.77 | 1676.32 | 1683.87 |
| `A6` | 1728.00 | 1736.00 | 1744.00 | 1752.00 | 1760.00 | 1768.00 | 1776.00 | 1784.00 |
| `A#6` `Bb6`  | 1830.75 | 1839.23 | 1847.70 | 1856.18 | 1864.66 | 1873.13 | 1881.61 | 1890.08 |
| `B6` | 1939.61 | 1948.59 | 1957.57 | 1966.55 | 1975.53 | 1984.51 | 1993.49 | 2002.47 |
| `C7` | 2054.95 | 2064.46 | 2073.98 | 2083.49 | 2093.00 | 2102.52 | 2112.03 | 2121.54 |
| `C#7` `Db7`  | 2177.14 | 2187.22 | 2197.30 | 2207.38 | 2217.46 | 2227.54 | 2237.62 | 2247.70 |
| `D7` | 2306.60 | 2317.28 | 2327.96 | 2338.64 | 2349.32 | 2360.00 | 2370.67 | 2381.35 |
| `D#7` `Eb7`  | 2443.76 | 2455.07 | 2466.39 | 2477.70 | 2489.02 | 2500.33 | 2511.64 | 2522.96 |
| `E7` | 2589.07 | 2601.06 | 2613.05 | 2625.03 | 2637.02 | 2649.01 | 2660.99 | 2672.98 |
| `F7` | 2743.03 | 2755.73 | 2768.43 | 2781.13 | 2793.83 | 2806.52 | 2819.22 | 2831.92 |
| `F#7` `Gb7`  | 2906.14 | 2919.59 | 2933.05 | 2946.50 | 2959.96 | 2973.41 | 2986.86 | 3000.32 |
| `G7` | 3078.95 | 3093.20 | 3107.45 | 3121.71 | 3135.96 | 3150.22 | 3164.47 | 3178.73 |
| `G#7` `Ab7`  | 3262.03 | 3277.13 | 3292.23 | 3307.34 | 3322.44 | 3337.54 | 3352.64 | 3367.74 |
| `A7` | 3456.00 | 3472.00 | 3488.00 | 3504.00 | 3520.00 | 3536.00 | 3552.00 | 3568.00 |
| `A#7` `Bb7`  | 3661.50 | 3678.46 | 3695.41 | 3712.36 | 3729.31 | 3746.26 | 3763.21 | 3780.16 |
| `B7` | 3879.23 | 3897.19 | 3915.15 | 3933.11 | 3951.07 | 3969.03 | 3986.99 | 4004.95 |
| `C8` | 4109.90 | 4128.93 | 4147.95 | 4166.98 | 4186.01 | 4205.03 | 4224.06 | 4243.09 |
| `C#8` `Db8`  | 4354.29 | 4374.44 | 4394.60 | 4414.76 | 4434.92 | 4455.08 | 4475.24 | 4495.40 |
| `D8` | 4613.21 | 4634.56 | 4655.92 | 4677.28 | 4698.63 | 4719.99 | 4741.35 | 4762.71 |
| `D#8` `Eb8`  | 4887.52 | 4910.15 | 4932.78 | 4955.40 | 4978.03 | 5000.66 | 5023.29 | 5045.91 |
| `E8` | 5178.15 | 5202.12 | 5226.09 | 5250.07 | 5274.04 | 5298.01 | 5321.99 | 5345.96 |
| `F8` | 5486.06 | 5511.46 | 5536.85 | 5562.25 | 5587.65 | 5613.05 | 5638.45 | 5663.85 |
| `F#8` `Gb8`  | 5812.28 | 5839.18 | 5866.09 | 5893.00 | 5919.91 | 5946.82 | 5973.73 | 6000.64 |
| `G8` | 6157.89 | 6186.40 | 6214.91 | 6243.42 | 6271.93 | 6300.44 | 6328.94 | 6357.45 |
| `G#8` `Ab8`  | 6524.06 | 6554.26 | 6584.47 | 6614.67 | 6644.88 | 6675.08 | 6705.28 | 6735.49 |
| `A8` | 6912.00 | 6944.00 | 6976.00 | 7008.00 | 7040.00 | 7072.00 | 7104.00 | 7136.00 |
| `A#8` `Bb8`  | 7323.01 | 7356.91 | 7390.81 | 7424.72 | 7458.62 | 7492.52 | 7526.43 | 7560.33 |
| `B8` |  7758.46 | 7794.38 | 7830.30 | 7866.21 | 7902.13 | 7938.05 | 7973.97 | 8009.89 |
