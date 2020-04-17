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

int printTriangleType(){
    int n1;
    scanf("%d", &n1);
    int n2;
    scanf("%d", &n2);
    int n3;
    scanf("%d", &n3);

    if (n1 == n2 && n2 == n3){
        printf("equilateral");
    } else{
        if (n1 == n2 || n2 == n3 || n3 == n1){
            printf("isosceles");
        }
    }

    if (n1 != n2 && n2 != n3 && n3 != n1){
        printf("scalene");
    }

    return 0;
}

int quadrant1(){
    float n1;
    scanf("%f", &n1);
    float n2;
    scanf("%f", &n2);
    if (n1 == 0 || n2 == 0){
        printf("0");
    } else {
        if (n1 > 0) {
            if (n2 > 0) {
                printf("%d", 1);
            } else {
                printf("%d",4);
            }
        } else {
            if (n2 > 0) {
                printf("%d",2);
            } else {
                printf("%d",3);
            }
        }
    }

    return 0;
}

int perfectNumbers(){

    int n;
    scanf("%d", &n);
    printf("Perfect numbers up to %d: ",n);

    for (int k = 0; k <= n; ++k) {
        //printf("\n chech %d ", k);

        int factors[1000];
        int suma =0;
        int pos = 0;

        for (int i = 1; i <k ; ++i) {
            int factor = k%i;
            if (factor == 0){
                //printf("%d", i);
                factors[pos] = i;
                pos++;
            }
        }
        for (int j = 0; j < pos; ++j) {
            int nnnn = factors[j];
            //printf("%d ", nnnn);
            suma = suma + nnnn;

        }
        if (suma == k && suma != 0){
            printf("%d ", suma);
        }
    }



    return 0;
}



int zeroDigits(){

    int n;
    scanf("%d", &n);

    int sum = 0;

    while (n > 0){

        if (n % 10 == 0){
            //printf("%   d ",n% 10);
            sum++;
        }

        n = n / 10;
        //printf("%d \n",n);

    }
    printf("%d", sum);

    return 0;
}
int power(int n1, int n2){
    int ans = n1;
    for (int i = 1; i < n2; ++i) {
        ans = ans * n1;
    }
    printf("%d", ans);
}
int showTwos(){
    int n;
    scanf("%d", &n);
    int fff = 0;
    int times = 0;
    int nn = n;

    while (fff == 0){
        if (nn % 2 == 0){
            nn = nn/2;
            times+=1;
        } else{
            fff = 1;
        }
    }
    //printf("%d %d", times, nn);

    printf("%d = ", n);
    for (int i = 0; i < times; ++i) {
        printf("%d * ", 2);
    }
    printf("%d", nn);
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
    //xo();
    //printTriangleType();
    //quadrant1();
    //perfectNumbers();
    //zeroDigits();
    showTwos();
    return 0;
}

