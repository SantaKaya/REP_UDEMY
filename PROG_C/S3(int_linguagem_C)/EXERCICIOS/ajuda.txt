#include <stdio.h>
#include <stdlib.h>


////////////////////////////// conversão///////////////////////////////////

//temperatura (celcius - fahrenheit)
float celcius_farenheit(float cl, float fh){

    printf("Digite sua temperatura em Celcius:\n");
    scanf("%f",&cl);
    fh = (cl * 9/5) + 32; 
    printf("Sua temperatura em farenheit eh: %.2f\n", fh);
};
//temperatura (fahrenheit - celcius)
float farenheit_celcius(float cl, float fh){

    printf("Digite sua temperatura em Fahrenheit:\n");
    scanf("%f",&cl);
    cl = 5*(fh - 32)/9;
    printf("Sua temperatura em Celcius eh: %.2f\n", cl);
};

//temperatura (kelvin - celcius)

float kelvin_celcius(float kl, float cl){

    #ifndef x
        #define x 273.15;
    #endif

    printf("Digite sua temperatura em Kelvin:\n");
    scanf("%f",&kl);
    cl = kl - x;
    printf("Sua temperatura em Celcius eh: %.2f\n", cl);
};

//temperatura (celcius - kelvin)

float celcius_kelvin(float kl, float cl){

    #ifndef x
        #define x 273.15;
    #endif

    printf("Digite sua temperatura em Celcius:\n");
    scanf("%f",&cl);
    kl = cl + x;
    printf("Sua temperatura em Celcius eh: %.2f\n", kl);
};

// Metros/s para kilometros/h
float ms_kmh(float ms, float kmh){

    printf("Digite sua velocidade em km/h:\n");
    scanf("%f",&ms);
    kmh = ms * 3.6;
    printf("Sua velocidade em km/h eh: %.2f\n", kmh);
};


