#include <stdio.h>
#include <stdbool.h>

//天气晴朗和场地可用的情况侠，就可以举行高尔夫球活动

int main(void)
{
    bool isWeatherSunny = true;
    bool isVenueAvailable = false;

    if (isWeatherSunny && isVenueAvailable) {
        printf("如期举行\n");
    }
    else {
        printf("活动无法举行\n");
        if (!isWeatherSunny) {
            printf("原因：天气不清朗\n");
        }

        if (!isVenueAvailable) {
            printf("原因：场地不可用\n");
        }
    }

    return 0;
}