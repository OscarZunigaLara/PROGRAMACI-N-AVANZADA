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
    return 0;
}

int printRange(){

    return 0;
}

int xo(){

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
    season();
    return 0;
}

