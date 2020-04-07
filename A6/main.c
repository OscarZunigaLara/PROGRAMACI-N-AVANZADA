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

int binarySearch(int array[]){



}

int main() {
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
        printf("%d ", arr[i]);
    }

    return 0;

    return 0;
}

