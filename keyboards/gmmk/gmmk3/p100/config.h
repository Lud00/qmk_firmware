#pragma once

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
#define LOCKING_RESYNC_ENABLE

/* External SPI flash */
#define EXTERNAL_FLASH_SPI_SLAVE_SELECT_PIN C4

/* SPI Config for LED Driver (AW20216) */
#define SPI_DRIVER SPIDQ
#define SPI_SCK_PIN A5
#define SPI_MOSI_PIN A7
#define SPI_MISO_PIN A6

// Alternate function mode definitions for STM32F411 (AF5 for SPI1)
#define SPI_SCK_PAL_MODE 5
#define SPI_MOSI_PAL_MODE 5
#define SPI_MISO_PAL_MODE 5

/* AW20216 LED driver chip select and enable pins */
#define AW20216S_CS_PIN_1 C5
#define AW20216S_CS_PIN_2 B11
#define AW20216S_EN_PIN   C13

/* Total number of LEDs per driver */
#define DRIVER_1_LED_TOTAL 67
#define DRIVER_2_LED_TOTAL 59
#define RGB_MATRIX_LED_COUNT (DRIVER_1_LED_TOTAL + DRIVER_2_LED_TOTAL)

/* DIP switch setup (e.g., for layer toggle or reset) */
#define DIP_SWITCH_PINS { A13 }
