#ifndef __LOG_H__
#define __LOG_H__

#include <syslog.h>

void log_printf(int level, const char *string, ...);

#endif
