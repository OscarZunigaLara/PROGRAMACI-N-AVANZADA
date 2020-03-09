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
    for (int k = 0; k < n; ++k) {
        printf("%s", i);
    }
}


double ftoc(double tempf) {
    double tempc = (tempf - 32) * 5 / 9;
    return tempc;
}

/*
int main(void) {

    double tempf = 98.6;
    double tempc = 0.0;

    tempc = ftoc(tempf);
    printf("Body temp in C is: %.1f" ,tempc);

    return 0;
}
*/

/*
int main(void) {

    int n1;
    scanf("%d", &n1);
    int n2;
    scanf("%d", &n2);
    int n3;
    scanf("%d", &n3);

    int nf;

    if (n1 > n2){
        nf = n2;
    } else{
        nf = n1;enter code here
int main(void) {
printf("low? ");
int low;
scanf("%i", &low);

printf("sum = %i", 25);

return 0;
}
    }

    if (nf > n3){
        nf = n3;
    } else{
        nf = nf;
    }

    printf("%d",nf);
}

*/


int countQuarters(int nCents){
    int cents;

    cents = nCents % 100;
    //printf("%d", cents);
    cents = cents / 25;
    return cents;
}

/*
int main(){
    int cents = countQuarters(1278);

    printf("%d", cents);

    return 0;
}

int main(){
    int n;
    scanf("%d", &n);

    printf("%d times 2 = %d", n, 2*n);
    return 0;
}



int main(void) {

    printf("low? ");
    int low;
    scanf("%i", &low);
    int high;I. PrintPowersOf2
    printf("high? ");
    scanf("%i",&high);
    int sum = 0;

    for (int i = low; i <=high ; ++i) {
    return 0;
        sum = sum + i;
    }
    printf("sum = %d", sum);

    return 0;
}

int main(void){
    int n;
    scanf("%i", &n);

    for (int i = 1; i <= n; ++i) {
        printf("[%d] ", i);
    }
}
int printPowersOf2(int n){
    int power = 1;
    for (int i = 0; i <=  n; ++i) {
        printf("%d ", power);
        power = 2;
        for (int j = 0; j < i; ++j) {
            power = power * 2;
        }
    }
}

int main(void){
    int n;
    scanf("%i", &n);
    printPowersOf2(n);
    return 0;

 }

int printPowersOfN(int n, int n1){
    int power = 1;
    for (int i = 0; i <=  n; ++i) {
        printf("%d ", power);
        power = n1;
        for (int j = 0; j < i; ++j) {
            power = power * n1;
        }
    }
}

int main(void){
    int n;
    scanf("%i", &n);
    int n1;
    scanf("%i", &n1);

    printPowersOfN(n1,n);
    return 0;

}
 */

int printSquare(int n, n1){

}
int main (void){


    return 0;
}