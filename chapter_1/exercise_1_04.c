#include <stdio.h>

// Celsius to Fahrenheit table 


int main (){
    float fahr, celsius;
    int lower, upper, step;

    lower = 0; // lower limit of temp table
    upper = 300; // upper limit
    step = 20; // step size

    fahr = lower;

    printf("Celsius to Fahrenheit\n");

    while (fahr <= upper){
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%3.0f %6.1f\n", celsius, fahr);
        fahr = fahr + step;
    }


    return 0;
}