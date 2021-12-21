#ifndef TONE_PITCH_DEFAULT
#ifndef TONE_PITCH
/**
 *
 * if the error directive was called
 * you depend on choosing a tune for your tones
 * 
 * @see recommended to use 440 or Default
 * 
 * @example
 * #define TONE_PITCH_DEFAULT
 * #include <TonePitch.h> 
 * 
 * @example
 * #define TONE_PITCH 432
 * #include <TonePitch.h> 
 * 
 * @example
 * #define TONE_PITCH 434
 * #include <TonePitch.h> 
 * 
 * @example
 * #define TONE_PITCH 436
 * #include <TonePitch.h> 
 * 
 * @example
 * #define TONE_PITCH 438
 * #include <TonePitch.h> 
 * 
 * @example
 * #define TONE_PITCH 440
 * #include <TonePitch.h> 
 * 
 * @example
 * #define TONE_PITCH 442
 * #include <TonePitch.h> 
 * 
 * @example
 * #define TONE_PITCH 444
 * #include <TonePitch.h> 
 * 
 * @example
 * #define TONE_PITCH 446
 * #include <TonePitch.h> 
 * 
 * @example
 * #define TONE_PITCH DEFAULT
 * #include <TonePitch.h> 
 * 
 */ 
#error please choose your tune setting.
#endif
#endif

#ifdef TONE_PITCH_DEFAULT
#define TONE_CONFIG_OK
#include <ToneDefault.h>
#endif

#ifdef TONE_PITCH

#if TONE_PITCH == 432 
#define TONE_CONFIG_OK
#include <Tone432.h>
#endif

#if TONE_PITCH == 434 
#define TONE_CONFIG_OK
#include <Tone434.h>
#endif

#if TONE_PITCH == 436
#define TONE_CONFIG_OK
#include <Tone436.h>
#endif

#if TONE_PITCH == 438 
#define TONE_CONFIG_OK
#include <Tone438.h>
#endif

#if TONE_PITCH == 440 
#define TONE_CONFIG_OK
#include <Tone440.h>
#endif

#if TONE_PITCH == 442 
#define TONE_CONFIG_OK
#include <Tone442.h>
#endif

#if TONE_PITCH == 444 
#define TONE_CONFIG_OK
#include <Tone444.h>
#endif

#if TONE_PITCH == 446 
#define TONE_CONFIG_OK
#include <Tone446.h>
#endif

#endif

#ifndef TONE_CONFIG_OK
/**
 *
 * if the error directive was called
 * you must choose one of the valid constants
 * 
 * @example TONE_PITCH 432
 * @example TONE_PITCH 434
 * @example TONE_PITCH 436
 * @example TONE_PITCH 438
 * @example TONE_PITCH 440
 * @example TONE_PITCH 442
 * @example TONE_PITCH 444
 * @example TONE_PITCH 446
 * 
 */
#error invalid TONE_PITCH const macro value.
#endif

#include <ToneVerify.h>
