/**
 * Proposition
 *
 * when importing the "Arduino.h" library (this is implicit in the Arduino IDE),
 * one of the headers "Pitches.h" there are not very accurate values for musical notes
 *
 * @example NOTE_C4, NOTE_D4...
 */
#include <Arduino.h>

/**
 * Libary Configuration
 * 
 * @see set up tune 
 *
 * @example TONE_DEFAULT
 * @example TONE_PITCH 432
 * @example TONE_PITCH 434
 * @example TONE_PITCH 436
 * @example TONE_PITCH 438
 * @example TONE_PITCH 440
 * @example TONE_PITCH 442
 * @example TONE_PITCH 444
 * @example TONE_PITCH 446
 *
 *
 * @see set up typing 
 *
 * @example TONE_USE_INT
 * @example TONE_USE_DOUBLE
 *
 */

#define TONE_USE_INT
#define TONE_PITCH 440

/**
 * 
 * Import dependency
 *
 * after configuring, when importing the library the old values will be replaced by new and more refined.
 * this makes it compatible with any library or third-party code previously worked on.
 *
 */
#include <Pitch.h>

void setup(){}

void loop()
{
    // simple Arduino bip
    tone(8, NOTE_C4, 500);
    delay(1000);
}
