#ifndef SPI_H
#define SPI_H

#include <stdint.h>

int spi_init();
void spi_close();

uint8_t ReadRegister(uint8_t reg);
void WriteRegister(uint8_t reg, uint8_t value);

#endif
