#include <stdio.h>

/*
 * Create a program that read two parameters (row_count and col_count) from the console and prints a rectangle of "*" using one loop (The amount of rows of the rectangle is row_count and the amount of columns is col_count).
This assignment is optional and must be solved without using arrays.
This assignment must be solved individually.
Submission after the deadline is not valid.
 *
 */


int readRow(){

    puts("INTRDODUCE row_count\n");
    int row_count;
    scanf("%d", &row_count);
    return (row_count);
}

int readCol(){
    puts("INTRODUCE col_count \n");
    int col_count;
    scanf("%d", &col_count);
    return (col_count);
}

int main() {

    int row_count;

    int col_count;

    /*
    row_count = readRow();
    col_count = readCol();
    */
    row_count = 30;
    col_count = 20;

    printf("ROW COUNT %d \nCOL COUNT %d", row_count, col_count);
    puts("................................");

    for (int i = 0; i<= row_count; i++){
        char asteriscos = '*';

        printf("%0*i", col_count, 0);
        printf("\n");
    }
    return 0;
}


