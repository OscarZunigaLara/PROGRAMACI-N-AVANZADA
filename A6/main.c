#include <stdio.h>
#include <stdlib.h>


int comp(const void *a,const void *b) {
    return (*(int *) a - *(int *) b);
}

int  *  sorter(int array[]){
    qsort (array, sizeof(array), sizeof(int), comp);
    for (int i = 0 ; i < sizeof(array) ; i++) {
        printf("%d ", array[i]);
    }
    return array;
}

int niIdea() {
    int arraySize;
    scanf("%d", &arraySize);
    int nABUSCAR;
    scanf("%d", &nABUSCAR);
    arraySize = 8;
    nABUSCAR = 7;
    
    int arr[arraySize];

    for (int i = 0; i < arraySize; ++i) {
        int n1;
        scanf("%d", &n1);
        arr[i]= n1;
    }

    qsort(arr, sizeof(arr), sizeof(int), comp);

    for (int i = 0 ; i < sizeof(arr) ; i++) {
        printf("\n %d ", arr[i]);
    }

    return 0;

    return 0;

}

int arrayHistogram(){
    #define SIZE 10
    unsigned int h[SIZE] = {0};
    scanf("%u%u%u%u%u%u%u%u%u%u", &h[0], &h[1], &h[2], &h[3], &h[4], &h[5], &h[6], &h[7],&h[8], &h[9]);
    for(int i=0; i<SIZE;i++){
        for(int j=0;j<h[i];j++){
            printf("%c", 'b');
        }
        printf("\n");
    }
    return 0;
}

int arrayMean(){
    #define SIZE 10
    unsigned int h[SIZE] = {0};
    scanf("%u%u%u%u%u%u%u%u%u%u", &h[0], &h[1], &h[2], &h[3], &h[4], &h[5], &h[6], &h[7], &h[8], &h[9]);

    float sum = 0;
    for (int i = 0; i < SIZE; ++i) {
        sum += h[i];
    }
    //printf("%.1f",sum);
    sum = sum/SIZE;
    printf("%.1f",sum);

    return 0;

}

int computeMode(int size, int *arr){
    int mode = 0;

    qsort(arr,size, sizeof(int), comp);
    int nganador = arr[0];
    int sizenganador = 0;
    int sizeCompetidor = 0;

    for (int i = 1; i <= size ; i++) {
        if(arr[i] != arr[i-1]){

            sizeCompetidor = 0;

            for (int j = 0; j < size; ++j) {
                if (arr[i-1] == arr[j]){
                    sizeCompetidor++;
                }
            }
            if (sizeCompetidor > sizenganador){
                sizenganador = sizeCompetidor;
                nganador = arr[i-1];
            }
            //printf("%d    %d "  , arr[i-1], sizeCompetidor);
        }
    }

    printf("%d", nganador);
    return mode;
}


int arrayMode(){
    int n;
    scanf("%d", &n);
    int h[n];
    for (int i = 0; i < n; ++i) {
        scanf("%d", &h[i]);
    }
    computeMode(n, h);



    return 0;
}

int computeMax(int size, int *arr) {
    qsort(arr,size, sizeof(int), comp);

    int max = arr[size-1];
    printf("%d",max);
    return max;
}

int arrayMax(){
    int n;
    scanf("%d", &n);
    int h[n];
    for (int i = 0; i < n; ++i) {
        scanf("%d", &h[i]);
    }
    computeMax(n, h);

    return 0;
}

int computeMin(int size, int *arr) {
    qsort(arr,size, sizeof(int), comp);
    int min = arr[0];
    printf("%d", min);
    return min;
}

int arrayMin(){
    int n;
    scanf("%d", &n);
    int h[n];
    for (int i = 0; i < n; ++i) {
        scanf("%d", &h[i]);
    }
    computeMin(n, h);
    return 0;
}

int computeMedian(int size, int *arr) {
    qsort(arr,size, sizeof(int), comp);
    float median;
    if (size%2 == 1){
        median = arr[size/2];
    } else{
        int n1 = arr[size/2];
        int n2 = arr[size/2 -1];
        median = n1 + n2;
        median = median/2;
    }

    printf("%.1f", median);
    return median;
}

int arrayMedian(){
    int n;
    scanf("%d", &n);
    int h[n];
    for (int i = 0; i < n; ++i) {
        scanf("%d", &h[i]);
    }
    computeMedian(n, h);
    return 0;
}

int searchValue2(int size, int *arr, int value  ) {
    qsort(arr,size, sizeof(int), comp);
    int valRet;
    int closer;
    for (int i = 0; i < size; ++i) {
        //printf("%d", arr[i]);

        if (arr[i] == value){
            valRet = i;
        }
    }
    printf("%d", valRet);
    return  valRet;
}

int searchValue(){
    int n;
    scanf("%d", &n);
    int nSearch;
    scanf("%d", &nSearch);
    int h[n];
    for (int i = 0; i < n; ++i) {
        scanf("%d", &h[i]);
    }

    searchValue2(n, h, nSearch);
    return 0;

}

int buubleSort(int size, int *arr) {
    qsort(arr,size, sizeof(int), comp);
    for (int i = 0; i < size; ++i) {
        printf("%d \n", arr[i]);
    }

}

int arraySort(){
    int n;
    scanf("%d", &n);
    int h[n];
    for (int i = 0; i < n; ++i) {
        scanf("%d", &h[i]);
    }
    buubleSort(n,h);
    return 0;
}

int sortRange(int size, int *arr) {
    qsort(arr,size, sizeof(int), comp);

    int range = 1;
    for (int j = arr[0]; j <arr[size-1] ; ++j) {
        range++;
    }

    printf("%d", range);
}


int arrayRange(){
    int n;
    scanf("%d", &n);

    int h[n];
    for (int i = 0; i < n; ++i) {
        scanf("%d", &h[i]);
    }

    sortRange(n, h);

}

int ArrayCountInRange(){
    int nMinimum;
    scanf("%d", &nMinimum);
    int nMaximum;
    scanf("%d", &nMaximum);
    int arrSize;
    scanf("%d", &arrSize);

    int arr[arrSize];
    for (int i = 0; i < arrSize; ++i) {
        scanf("%d", &arr[i]);
    }
    int times = 0;
        for (int i = 0; i <arrSize ; ++i) {
            if(arr[i] <= nMaximum && arr[i]>= nMinimum){
                times++;
                //printf("  %d  ", arr[i]);
            }

    }
    printf("%d", times);
    return times;
}

int priceIsRight(){


    return 0;
}


int arrayIsMagicSquare(){


    return 0;
}

int arraySieveOfEratosthenes(){


    return 0;
}


int main(){

    //arrayHistogram();
    //arrayMean();
    //arrayMode();
    //arrayMax();
    //arrayMin();
    //arrayMedian();
    //searchValue();
    //arraySort();
    //arrayRange();
    ArrayCountInRange();

    return 0;
}