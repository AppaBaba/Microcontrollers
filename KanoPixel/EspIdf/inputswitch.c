#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/gpio.h"

#define PIN_SWITCH 23

void app_main()
{
    printf("Hi There!\n");

    gpio_pad_select_gpio(PIN_SWITCH);
    gpio_set_direction(PIN_SWITCH, GPIO_MODE_INPUT);
    gpio_pulldown_en(PIN_SWITCH);
    
    gpio_pullup_dis(PIN_SWITCH);
    
    while (true)
    {
        int level = gpio_get_level(PIN_SWITCH);
        if(level == 0) {
        printf("Switch Level %d\n",level);
        }
        vTaskDelay(1);
    }
}
