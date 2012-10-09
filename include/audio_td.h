#include <config.h>
#if HAVE_TRIPLEDRAGON
#include "../libtriple/audio_td.h"
#elif HAVE_SPARK_HARDWARE
#include "../libspark/audio_lib.h"
#ifdef MARTII
#include "../libspark/audio_mixer.h"
#endif
#elif HAVE_AZBOX_HARDWARE
#include "../azbox/audio_lib.h"
#elif HAVE_GENERIC_HARDWARE
#include "../generic-pc/audio_lib.h"
#else
#error neither HAVE_TRIPLEDRAGON nor HAVE_SPARK_HARDWARE defined
#endif
