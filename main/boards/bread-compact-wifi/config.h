#ifndef _BOARD_CONFIG_H_
#define _BOARD_CONFIG_H_

#include <driver/gpio.h>

// 1. НАСТРОЙКА МИКРОФОНА (INMP441) И УСИЛИТЕЛЯ (MAX98357) – СТРОГО ПО ЗАПИСКЕ
#define AUDIO_I2S_MIC_GPIO_WS GPIO_NUM_41 // WS микрофона и LRC усилителя
#define AUDIO_I2S_MIC_GPIO_SCK GPIO_NUM_42 // SCK микрофона и BCLK усилителя
#define AUDIO_I2S_MIC_GPIO_DIN GPIO_NUM_40 // SD микрофона
#define AUDIO_I2S_SPK_GPIO_DOUT GPIO_NUM_2 // DIN усилителя

// Дублируем для совместимости с глобальным аудио-движком проекта:
#define AUDIO_I2S_GPIO_WS GPIO_NUM_41
#define AUDIO_I2S_GPIO_BCLK GPIO_NUM_42
#define AUDIO_I2S_GPIO_DIN GPIO_NUM_40
#define AUDIO_I2S_GPIO_DOUT GPIO_NUM_2

// Частота дискретизации для аудио-потока (необходима компилятору)
#define AUDIO_INPUT_SAMPLE_RATE 16000
#define AUDIO_OUTPUT_SAMPLE_RATE 16000

// 2. НАСТРОЙКА ЭКРАНА SSD1306 (OLED 0.96") – СТРОГО ПО ЗАПИСКЕ
#define DISPLAY_SDA_PIN GPIO_NUM_17 // SDA экрана
#define DISPLAY_SCL_PIN GPIO_NUM_18 // SCL (SCK) экрана
#define DISPLAY_WIDTH 128

#if defined(CONFIG_OLED_SSD1306_128X32)
#define DISPLAY_HEIGHT 32
#elif defined(CONFIG_OLED_SSD1306_128X64)
#define DISPLAY_HEIGHT 64
#endif

// Выключение переворота картинки (фиксирует ошибку линковщика дисплея)
#define DISPLAY_MIRROR_X true
#define DISPLAY_MIRROR_Y true

// 3. НАСТРОЙКА КНОПКИ АКТИВАЦИИ – СТРОГО ПО ЗАПИСКЕ
#define BUILTIN_LED_GPIO GPIO_NUM_NC // Светодиод не используется
#define BOOT_BUTTON_GPIO GPIO_NUM_0 // Кнопка на GPIO 0
#define TOUCH_BUTTON_GPIO GPIO_NUM_NC
#define VOLUME_UP_BUTTON_GPIO GPIO_NUM_NC
#define VOLUME_DOWN_BUTTON_GPIO GPIO_NUM_NC

// Заглушка для индикатора (фиксирует ошибку линковщика лампы)
#define LAMP_GPIO GPIO_NUM_NC

#endif // _BOARD_CONFIG_H_
