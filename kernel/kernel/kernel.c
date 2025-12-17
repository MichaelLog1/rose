#include <stdio.h>

#include <kernel/tty.h>
#include <stdint.h>
#include <kernel/serial.h>
#include <kernel/log.h>

void kernel_main(uint32_t multiboot_magic, void* multiboot_info) {
	terminal_initialize();
    if (serial_initialize() != 0) {
        printf("Serial initialization falied...\n\r");
    } else {
        serial_log(LOG_INFO, "Serial initialization successful...");
    }
    
    serial_log(LOG_INFO, "Booting kernel...");

	/* Validate Multiboot */
    if (multiboot_magic != 0x2BADB002) {
        serial_log(LOG_ERROR, "Invalid multiboot magic number...");
    }
}
