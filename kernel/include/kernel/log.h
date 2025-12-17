#ifndef _KERNEL_LOG_H
#define _KERNEL_LOG_H

typedef enum {
    LOG_INFO,
    LOG_WARN,
    LOG_ERROR,
    LOG_DEBUG
} log_level_t;

void serial_log(log_level_t level, const char* msg);

#endif