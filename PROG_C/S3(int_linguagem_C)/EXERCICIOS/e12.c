#include <stdio.h>
#include <stdlib.h>

int main(){

    float ml,kmh;

    printf("Diite sua distancia em milhas:\n");
    scanf("%f",&ml);

    kmh = 1.61 * ml;

    printf("Distancia em Km/h: %.2f",kmh);



    return 0;
}