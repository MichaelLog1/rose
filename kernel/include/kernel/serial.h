#ifndef _KERNEL_SERIAL_H
#define _KERNEL_SERIAL_H

int serial_initialize(void);
int serial_recieved(void);
char read_serial(void);
int is_transmit_empty(void);
void write_serial(char a);
void serial_out(const char* s);

#endif