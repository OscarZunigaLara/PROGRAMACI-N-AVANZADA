#include <stdio.h>

/*A
void printer(double x, double y, double bubble) {
    printf("x = %.2f and y = %.1f\n", x, y);
    printf("x = %.2f and y = %.4f\n", x, bubble);
    printf("The value from main is: %.4f\n", bubble);
}

int main(void) {
    double bubble = 867.5309;
    double x = 10.01;
    double y = 8.0;
    int z = 5;

    printer( x,  y, bubble);

    printf("z = %d", z);

    return 0;
}
 */

/*
 B



 */

void printStrings(char *i, int n){
    for (int j = 0; j < n; ++j) {
        while(*i - '\0')
        {
            if(*i==' ') {*i = '_';}
            i++;
        }
    }

}
int main (void){
    printStrings("abc", 5);
    return 0;
}

