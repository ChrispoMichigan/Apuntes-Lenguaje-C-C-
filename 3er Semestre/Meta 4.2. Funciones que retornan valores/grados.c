#include <stdio.h>

float farenheitToCelcius(float farenheit){
    return (farenheit - 32) * 5/9;
}

float celciusToKelvin(float celcius){
    return celcius + 273.15;
}

int main(){
    float farenheit, celcius;
    printf("Conversor de temperatura\n");
    printf("1. Farenheit a Celsius\n");
    scanf("%f", &farenheit);
    printf("Celsius: %.2f\n", farenheitToCelcius(farenheit));
    printf("2. Celsius a Kelvin\n");
    scanf("%f", &celcius);
    printf("Kelvin: %.2f\n", celciusToKelvin(celcius));
}