#ifndef _BOARD_CONFIG_H_
#define _BOARD_CONFIG_H_

#include <driver/gpio.h>

// 1. НАСТРОЙКА МИКРОФОНА (INMP441) И УСИЛИТЕЛЯ (MAX98357) — СТРОГО ПО ЗАПИСКЕ
#define AUDIO_I2S_MIC_GPIO_WS GPIO_NUM_41 // WS микрофона и LRC усилителя
#define AUDIO_I2S_MIC_GPIO_SCK GPIO_NUM_42 // SCK микрофона и BCLK усилителя
#define AUDIO_I2S_MIC_GPIO_DIN GPIO_NUM_40 // SD микрофона
#define AUDIO_I2S_SPK_GPIO_DOUT GPIO_NUM_2 // DIN усилителя

// Дублируем для совместимости с глобальным аудио-движком проекта:
#define AUDIO_I2S_GPIO_WS GPIO_NUM_41
#define AUDIO_I2S_GPIO_BCLK GPIO_NUM_42
#define AUDIO_I2S_GPIO_DIN GPIO_NUM_40
#define AUDIO_I2S_GPIO_DOUT GPIO_NUM_2

// 2. НАСТРОЙКА ЭКРАНА SSD1306 (OLED 0.96) — СТРОГО ПО ЗАПИСКЕ
#define DISPLAY_SDA_PIN         GPIO_NUM_17  // SDA экрана
#define DISPLAY_SCL_PIN         GPIO_NUM_18  // SCL (SCK) экрана
#define DISPLAY_WIDTH           128

#if defined(CONFIG_OLED_SSD1306_128X32)
#define DISPLAY_HEIGHT          32
#elif defined(CONFIG_OLED_SSD1306_128X64)
#define DISPLAY_HEIGHT          64
#endif

// 3. НАСТРОЙКА КНОПКИ АКТИВАЦИИ — СТРОГО ПО ЗАПИСКЕ
#define BUILTIN_LED_GPIO        GPIO_NUM_NC  // Светодиод не используем
#define BOOT_BUTTON_GPIO        GPIO_NUM_0   // Кнопка на GPIO 0
#define TOUCH_BUTTON_GPIO       GPIO_NUM_NC
#define VOLUME_UP_BUTTON_GPIO   GPIO_NUM_NC
#define VOLUME_DOWN_BUTTON_GPIO GPIO_NUM_NC

#endif // _BOARD_CONFIG_H_
