#include <stdio.h>
#include <stdlib.h>


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

void liberaInstance(Instance * instance){
    free(instance->featureTypes);
    free(instance->features);
    free(instance);
}



Instance * findNearestNeighbor(const Instance * const instances, const int length, const Instance * const query,
                               double (*dissimilarityFunction)(const Instance * const instanceOne, const Instance * const instanceTwo)) {


}


double computeEuclideanDissimilarity(const Instance * const instanceOnePtr, const Instance * const instanceTwoPtr){
    double dob;
    return dob;
}


int main() {
    printf("TAREA 8\n");



    return 0;
}
