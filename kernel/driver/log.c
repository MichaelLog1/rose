#include <kernel/log.h>
#include <kernel/serial.h>

static const char* level_strings[] = {
    "INFO",
    "WARN",
    "ERROR",
    "DEBUG"
};

void serial_log(log_level_t level, const char* msg) {
    serial_out("[");
    serial_out(level_strings[level]);
    serial_out("] ");
    serial_out(msg);
    serial_out("\n\r");
}
