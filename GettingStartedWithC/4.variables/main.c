#include <stdio.h>

// Multiple declatrations are possible
int number1;
int number2;
int number3;

int number1;
int number2;
int number3;

int main() {
    // Definition
    int number1;
    // ERROR:  redefinition of 'number1'
    // int number1;
    // Initalization
    number1 = 1;

    // Definition plus initialization
    int number2 = 2;
    // ERROR:  redefinition of 'number2'
    // int number2 = 2;

    // Definition plus declartion.
    int number3 = 3;
    // change
    number3 = 33;

    printf("Count %d %d %d.", number1, number2, number3);
}
