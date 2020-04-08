#include <stdio.h>


int evenOdd(){
    int n;

    scanf("%d", &n);

    if (n%2 == 1){
        printf("odd");
    } else
        printf("even");

    return 0;
}

int countFactors(){
    int n;

    scanf("%d", &n);
    int result = 0;

    for (int i = 1; i <=n ; ++i) {
        int factor = n%i;
        if (factor == 0){
            result+=1;
        }
    }
    printf("%d ", result);

    return 0;
}


int medianOf3(){
    int n1;
    scanf("%d", &n1);
    int n2;
    scanf("%d", &n2);
    int n3;
    scanf("%d", &n3);

    if (n1 > n2){
        int nn = n1;
        n1 = n2;
        n2 = nn;
    }
    if (n2> n3){
        int nn = n2;
        n2 = n3;
        n3 = nn;
    }
    if (n1 > n2){
        int nn = n1;
        n1 = n2;
        n2 = nn;
    }

    printf("%d", n2);

    return 0;
}

int season(){
    int month;
    scanf("%d", &month);
    int day;
    scanf("%d", &day);

    if (month == 12  && day >= 16)
        printf("Winter");
    if (month ==3 && day <= 15 )
        printf("Winter");
    if (month <3)
        printf("Winter");

    if (month == 3  && day >= 16)
        printf("Spring");
    if (month == 6 && day <= 15)
        printf("Spring");
    if (month <6 && month > 3)
        printf("Spring");

    if (month == 6  && day >=16)
        printf("Summer");
    if (month ==9 && day <= 15)
        printf("Summer");
    if (month <9 && month > 6)
        printf("Summer");

    if (month == 9  && day >= 16)
        printf("Fall");
    if (month ==12 && day <= 15)
        printf("Fall");
    if (month <12 && month > 9)
        printf("Fall");


    return 0;
}

int printRange(){
    int n1;
    scanf("%d", &n1);
    int n2;
    scanf("%d", &n2);

    if (n1 == n2)
        printf("%d", n1);

    if (n1 < n2){
        for (int i =n1 ; i <=n2 ; ++i) {
            printf("%d ", i);
        }
    }

    if (n2 < n1){
        for (int i =n1 ; i >=n2 ; --i) {
            printf("%d ", i);
        }
    }

    return 0;
}

int xo(){
    int n1;
    scanf("%d", &n1);

    for (int i = 0; i < n1; ++i) {
        if (i != 0){
            printf("\n");
        }
        for (int j = 0; j < n1; ++j) {
            char toPrint = 'o';
            if (i == j){
                toPrint = 'x';
           }
            if ((n1 -i-1) == j){
                toPrint = 'x';
            }
           printf("%c", toPrint);
        }
    }

    return 0;
}

int printTRiangleType(){

    return 0;
}

int quadran1(){

    return 0;
}

int perfectNumbers(){

    return 0;
}

int zeroDigits(){

    return 0;
}

int showTwos(){

    return 0;
}

int gcd(){

    return 0;
}

int hopscotch(){

    return 0;
}

int hasMidPoint(){

    return 0;
}

int digitSum(){

    return 0;
}

int digitRange(){

    return 0;
}

int swapDitiPairs(){

    return 0;
}

int main() {

    //evenOdd();
    //countFactors();
    //medianOf3();
    //season();
    //printRange();
    xo();
    return 0;
}

