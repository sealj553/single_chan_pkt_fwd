#ifndef GPIO_H
#define GPIO_H

#include <fcntl.h>

int gpio_init(const char *dev, mode_t mode);
void gpio_close(int fd);
int gpio_read(int fd);
int gpio_write(int fd, int value);
    
#endif
