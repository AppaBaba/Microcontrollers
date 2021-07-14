#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/gpio.h"

#define buttonA 23
#define buttonB 18


void app_main()
{
    printf("Hi There!\n");

    gpio_pad_select_gpio(buttonA);
    gpio_set_direction(buttonA, GPIO_MODE_INPUT);
    gpio_pulldown_en(buttonA);
    gpio_pad_select_gpio(buttonB);
    gpio_set_direction(buttonB, GPIO_MODE_INPUT);
    gpio_pulldown_en(buttonB);
    
    while (true)
    {
        int bA = gpio_get_level(buttonA);
        if(bA == 0) {
        printf("ButtonA Level %d\n",bA);
        }
        int bB = gpio_get_level(buttonB);
        if(bB == 0) {
        printf("ButtonB Level %d\n",bB);
        }
        vTaskDelay(1);
    }
}
