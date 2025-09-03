/*
    Getting an input from the keyboard
*/

#include <stdio.h>

int main(void) {
    int square_side = 1;

    // print the prompt
    puts("Enter the side of a square");

    // Get the input
    // & - address operator
    scanf("%d", &square_side);

    // do the math
    int square_perimeter = square_side * 4;

    printf("The perimeter of a square with a side %d is %d\n", square_side, square_perimeter);

    return(0);

}