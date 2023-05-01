#include <stdio.h>

#define PI 3.1415

int main(void)
{
    int radius = 10;
    float volume = 4.0f/3.0f * PI * radius * radius;
    
    printf("volume: %f", volume);
    return 0;
}

//note, when using 4/3 as opposed to 4.0f/3.0f it'll just trunacate 4/3 to 1