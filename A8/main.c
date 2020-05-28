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

        if (firstInstancePointer->featureTypes[i] == 0){
            double firstVal = firstInstancePointer->features[i];
            double secondVal = secondInstancePointer->features[i];
            sum += firstInstancePointer->features[i] != secondInstancePointer->features[i] ? 1: 0;
        }

    }

    double sim = sqrt(sum);
    return sim;
}



Instance * findNearestNeighbor(const Instance * const instances, const int length, const Instance * const query,
                               double (*dissimilarityFunction)(const Instance * const instanceOne, const Instance * const instanceTwo)) {

    const int dist;



}



int main() {
    printf("TAREA 8\n");



    return 0;
}
