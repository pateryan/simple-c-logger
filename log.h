#ifndef _SIMPLE_C_LOGGER_
#define _SIMPLE_C_LOGGER_

#include <stdio.h>

void log_info   (FILE* stream, const char* format, ...);
void log_debug  (FILE* stream, const char* format, ...);
void log_warning(FILE* stream, const char* format, ...);
void log_error  (FILE* stream, const char* format, ...);
void log_fatal  (FILE* stream, const char* format, ...);

#endif // !_SIMPLE_C_LOGGER
