#include <stdio.h>

int main (){

    int c; // declare 
    int stats; // status if already blank

    //initialize 
    
    stats = 0;

    // operation
    while ((c = getchar()) != EOF){

        if (c != ' '){
            putchar(c);
            putchar(' ');
        }

        

    }


    return 0;
}