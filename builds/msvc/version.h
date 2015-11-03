
#ifndef __SODIUM_VERSION_H__
#define __SODIUM_VERSION_H__

#include "export.h"

#define SODIUM_VERSION_STRING "1.0.6"

#define SODIUM_LIBRARY_VERSION_MAJOR 8
#define SODIUM_LIBRARY_VERSION_MINOR 0

#ifdef __cplusplus
extern "C" {
#endif

SODIUM_EXPORT
const char *sodium_version_string(void);

SODIUM_EXPORT
int         sodium_library_version_major(void);

SODIUM_EXPORT
int         sodium_library_version_minor(void);

#ifdef __cplusplus
}
#endif

#endif
