#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef enum{
    numerical,
    nominal
}FeatureType;


typedef struct {
    double * features;
    FeatureType * featureTypes;
    int length;
}Instance;



Instance * generateInstance(const int length){
    Instance * instanciaPTR = (Instance *) malloc(sizeof(Instance));
    instanciaPTR->length = length;
    instanciaPTR->features = malloc(length * sizeof(double));
    instanciaPTR->featureTypes = malloc(length * sizeof(FeatureType));

    return instanciaPTR;
}

void liberaInstancia(Instance * instance){
    free(instance->featureTypes);
    free(instance->features);
    free(instance);
}


double computeEuclideanDissimilarity(const Instance * const firstInstancePointer, const Instance * const secondInstancePointer){
    double sum;
    sum = 0;
    if (firstInstancePointer->length == 0 || secondInstancePointer->length == 0){
       return -1;
   }
   if (firstInstancePointer->length == secondInstancePointer->length){
       return -2;
   }

    for (int i = 0; i <= firstInstancePointer->length -1; i++) {
        if (firstInstancePointer->featureTypes[i] != secondInstancePointer->featureTypes[i]){
            return -3;
        }
        if (firstInstancePointer->featureTypes[i] == 0 && secondInstancePointer->featureTypes[i] == 0) {
            double value1 = firstInstancePointer->features[i];
            double value2 = firstInstancePointer->features[i];
            sum += pow(value1 - value2, 2);
        } else if (firstInstancePointer->featureTypes[i] == 1 && secondInstancePointer->featureTypes[i] == 1){
            sum += firstInstancePointer->features[i] != secondInstancePointer->features[i] ? 1 : 0;
        }

    }

    double sim = sqrt(sum);
    return sim;
}



Instance * findNearestNeighbor(const Instance * const instances, const int length, const Instance * const query,
                               double (*function)(const Instance * const firstInstancePointer, const Instance * const secondInstancePointer)) {

    const int dist;
    double menor = 0;
    menor = function(&instances[0], query);
    int ind = 0;

    if (menor == -1 || menor == -2 || menor == -3){
        return (int)menor;
    }
    double nuevoMenor = 0;


    for (int j = 0; j < dist-1; j++) {
        nuevoMenor +=function(&instances[j], query);
        if (menor == -1 || menor == -2 || menor == -3){
            return (int)menor;
        }
        if (nuevoMenor< menor){
        menor =nuevoMenor;
        }

    }
    return &instances[ind];

}

int testfindNearestNeighbor0(){

}

int testfindNearestNeighborMenos1(){
    Instance  * firstInstance = generateInstance(3);

    firstInstance->features[0] = 0;
    firstInstance->features[1] = 0;
    firstInstance->features[2] = 0;

    firstInstance->featureTypes[0] = 0;
    firstInstance->featureTypes[0] = 0;
    firstInstance->featureTypes[0] = 0;

    Instance * secondInstance = generateInstance(0);
    double  disSim = computeEuclideanDissimilarity(firstInstance,secondInstance);

    liberaInstancia(firstInstance);
    liberaInstancia(secondInstance);

    return disSim;


}

int testfindNearestNeighbor2(){

}

int testfindNearestNeighbor3(){

}

int testfindNearestNeighbor(){

}


int main() {
    printf("TAREA 8\n");

    printf("PRUEBA DE MENOS  1 %d",testfindNearestNeighborMenos1() );



    return 0;
}
