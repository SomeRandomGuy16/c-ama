#include <stdio.h>

#define PI 3.1415

int main(void)
{
    int radius;

    printf("Please enter the radius: ");
    scanf("%d", &radius);

    float volume = 4.0f/3.0f * PI * radius * radius;
    
    printf("volume: %.2f", volume);
    return 0;
}
