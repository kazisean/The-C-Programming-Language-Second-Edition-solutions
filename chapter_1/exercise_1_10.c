#include <stdio.h>

int main (){

    int c; // declare 




    // operation
    while ((c = getchar()) != EOF){
        // if tab or backspace or blackslash 
        if (c == '\t' || c == '\b' || c == '\\'){
            putchar('\\');
        }
        
    }

    return 0;
}