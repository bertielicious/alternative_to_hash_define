#include <stdio.h>
#include "constants.h"
#include "esp_log.h"

void app_main(void)
{
    display_pins_t phil;
    display_pins_t *ptr;
    ptr = &phil;

    phil.sck = 19;
    ptr->mosi = 23;
}
