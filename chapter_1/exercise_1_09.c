#include <stdio.h>

int main (){

    int c, blanks, tabs, newline; // declare 

    //initialize 
    


    // operation
    while ((c - getchar()) != EOF){
        // if new line
        if (c == '\n')
            ++newline;
        if (c == ' ')
            ++blanks;
        if (c == '\t')
            ++tabs;
    }

    printf("%d blanks, %d tabs, %d newlines\n", blanks, tabs, newline);

    return 0;
}