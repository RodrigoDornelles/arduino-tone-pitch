#ifndef TONE_VERIFIED
/**
 *
 * if the error directive was called
 * you depend on choosing a header for your tones
 * 
 * @see recommended to use Tone440.h or ToneDefault.h
 * 
 * @example #include <ToneDefault.h>
 * @example #include <Tone432.h>
 * @example #include <Tone434.h>
 * @example #include <Tone436.h>
 * @example #include <Tone438.h>
 * @example #include <Tone440.h>
 * @example #include <Tone442.h>
 * @example #include <Tone444.h>
 * @example #include <Tone446.h>
 * 
 */ 
#error please choose your tone header.
#endif

#ifndef TONE_USE_INT
#ifndef TONE_USE_REAL
#ifndef TONE_USE_FLOAT
#ifndef TONE_USE_DOUBLE
#ifndef TONE_USE_PRECISE
/**
 * when you do not define TONE_USE_INT this library identifies it as accurate,
 * so it is recommended to make it explicit in some way to make it better understandable
 * 
 * @example TONE_USE_REAL
 * @example TONE_USE_FLOAT
 * @example TONE_USE_DOUBLE
 * @example TONE_USE_PRECISE
 * 
 */
#warning if you use fine tuning, it is recommended to use constant explicit TONE_USE_DOUBLE or similar
#endif
#endif
#endif
#endif
#endif