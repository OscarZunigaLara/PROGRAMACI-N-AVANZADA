#include <stdio.h>

/*
 * A. CompleteLoop

int main() {

    int inicio = -4;
    int mmm = 18;

    for (int i = 0; i<=5;i++){


        int numero = inicio + mmm * i;


        printf("%d \n", numero);
    }

    return 0;
}

/*
 * A. Count

int main() {

    for (int i = 1; i<=4;i++){
        printf("2 times %d = %d \n" ,i, i*2);

    }

    return 0;
}
*/

/*
 * A. ThreeDigitsFunction

int main( ) {

    int n;

    //printf( "Enter a value :");
    scanf("%d", &n);
    //printf("%d \n",n);
    int ddd = 1000;
    int imp = n%ddd;
    printf("%d", imp);


    return 0;
}
*/

/*
 * A. startSquare

int main() {

    char u = 'u';

    for (int i = 0; i<5; i++){
        printf("%c", u);
    }
    printf("\n");


    for (int i = 0; i<5; i++){
        printf("%c", u);
    }
    printf("\n");


    for (int i = 0; i<5; i++){
        printf("%c", u);
    }
    printf("\n");


    for (int i = 0; i<5; i++){
        printf("%c", u);
    }
    printf("\n");

    return 0;
}
*/

/*
 * A. WaveNumer40

int main() {
    int counter = 0;
    for (int i = 0;i <40; i++){
        char p = '-';
        printf("%c", p);
    }
    printf("\n");

    for (int i = 0;i <10; i++){
        printf("_-^-");
    }
    printf("\n");
    for (int i =1;i <10; i++){
        printf("%d", i);
        printf("%d", i);
        if (i == 9 && counter == 0){
            i = -1;
            counter = 1;
        }
    }
    printf("00");
    printf("\n");
    for (int i = 0;i <40; i++){
        char p = '-';
        printf("%c", p);
    }



    return 0;
}
*/


/*
 * A. NestedNUmbers

int main() {
    for (int k = 0; k <3 ; ++k) {
        for (int i = 0; i < 10; ++i) {
            for (int j = 0; j < 3; ++j) {
                printf("%d", i);
            }
        }
        printf("\n");
    }



    return 0;
}
*/


/*
 * A. PrintDesign

int main() {

    for (int i = 0; i < 10; ++i) {
            if (i%2 == 1){
                int p = 11 - i;
                p = p/2;
                for (int k = 0; k <p ; ++k) {
                    printf("-");
                }
                for (int m = 0; m <i-1 ; ++m) {
                    printf("%d", i);
                }
                printf("%d",i);
                for (int l = 0; l <p ; ++l) {
                    printf("-");
            }
                printf("\n");

            }

    }

    return 0;
}
*/

/*
 * A. SlashFigure
int main() {

    for (int i = 0; i < 6; ++i) {
        for (int j = 0; j < 11; ++j) {
            if (j < i *2){
                printf("\\");
            } else
                printf("!!");
        }
        for (int k = 0; k <i*2 ; ++k) {
            printf("/");
        }
        printf("\n");
    }
    return 0;
}
*/

/*
 * A. SlashFigure2
int main() {

    int n;

    scanf("%d", &n);



    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n*2-1; ++j) {
            if (j < i *2){
                printf("\\");
            } else
                printf("!!");
        }
        for (int k = 0; k <i*2 ; ++k) {
            printf("/");
        }
        printf("\n");
    }
    return 0;
}
*/

/*
 * A. DollarFigure

int main() {

    for (int i = 0; i <7 ; ++i) {
        for (int j = 0; j <i*2 ; ++j) {
            printf("*");
        }
        for (int k = 7-i; k >0 ; --k) {
            printf("$");
        }

        for (int k = (7-i)*2; k >0 ; --k) {
            printf("*");
        }

        for (int k = 7-i; k >0 ; --k) {
            printf("$");
        }
        for (int j = 0; j <i*2 ; ++j) {
            printf("*");
        }
        printf("\n");

    }

    return 0;
}
*/

/*
 * A. ToManyRockets

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 0; i <n ; ++i) {
        printf("   /\\    ");
    }
    printf("\n");
    for (int j = 0; j < n; ++j) {
        printf("  /  \\   ");
    }
    printf("\n");
    for (int k = 0; k < n ; ++k) {
        printf(" /    \\  ");
    }
    printf("\n");
    for (int l = 0; l < n; ++l) {
        printf("+------+ ");
    }
    printf("\n");
    for (int m = 0; m < n; ++m) {
        printf("|      | ");
    }
    printf("\n");
    for (int m = 0; m < n; ++m) {
        printf("|      | ");
    }
    printf("\n");
    for (int l = 0; l < n; ++l) {
        printf("+------+ ");
    }
    printf("\n");
    for (int l = 0; l < n; ++l) {
        printf("| Viva | ");
    }
    printf("\n");
    for (int l = 0; l < n; ++l) {
        printf("|Mexico| ");
    }
    printf("\n");
    for (int l = 0; l < n; ++l) {
        printf("+------+ ");
    }
    printf("\n");
    for (int m = 0; m < n; ++m) {
        printf("|      | ");
    }
    printf("\n");
    for (int m = 0; m < n; ++m) {
        printf("|      | ");
    }
    printf("\n");
    for (int l = 0; l < n; ++l) {
        printf("+------+ ");
    }
    printf("\n");
    for (int i = 0; i <n ; ++i) {
        printf("   /\\    ");
    }
    printf("\n");
    for (int j = 0; j < n; ++j) {
        printf("  /  \\   ");
    }
    printf("\n");
    for (int k = 0; k < n ; ++k) {
        printf(" /    \\  ");
    }
    return 0;
}
*/

/*
 * A. NumbersOutput
*/

int main() {
    for (int i = 0; i <6 ; ++i) {
        for (int j = 1; j <10 ; ++j) {
            if(j != 9){
                printf(" ");
            } else
                printf("|");
        }
        printf(" ");

    }
    printf("\n");
    for (int k = 0; k < 6; ++k) {
        for (int j = 1; j <10 ; ++j) {
            printf("%d", j);
        }
        printf("%d", 0);
    }
    return 0;
}


