#include <stdio.h>


int main (){
    float fahr, celsius;
    int lower, upper, step;

    lower = 0; // lower limit of temp table
    upper = 300; // upper limit
    step = 20; // step size

    fahr = lower;

    printf("Fahrenheit to Celsius");

    while (fahr <= upper){
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }


    return 0;
}