#include <stdio.h>
#include <stdlib.h>



int palindrobits(int n){
    int reversed = 0;
    int normal =n;
    int isPal;

    while (normal > 0) {
        reversed <<= 1;
        reversed |= (normal & 1);
        normal = normal >> 1;
    }
        //printf("%d \n", reversed);
        if (reversed == n){
            isPal =  1;
        } else
            isPal = 0;



    return isPal;
}
/*
int main(void) {
    int n;
    scanf("%d", &n);

    printf("%d", palindrobits(n));

    return 0;
}

*/
void binprintf(int v)
{
    unsigned int mask=1<<((sizeof(int)<<3)-1);
    while(mask) {
        printf("%d", (v&mask ? 1 : 0));
        mask >>= 1;
    }
}

int countOne(int n){
    int numberOfOnes = 0;
    while (n>0){
        binprintf(n);
        printf("\n");
        if (n%2 == 1){
            int n1 = n%2;
            //printf(" %d", n1);
            numberOfOnes++;
        }
        n = n>>1;
    }
    printf("\n");

    return numberOfOnes;
}
/*
int main(void) {
    int n;
    scanf("%d", &n);

    printf("%d",countOne(n));
    return 0;

}
*/

int cmp_bits(int n1, int n2){
    int ans = 0;

    int bn1 = countOne(n1);
    int bn2 = countOne(n2);

    if (bn1 > bn2){
        ans = 1;
    }
    if (bn2 > bn1 ){
        ans = -1;
    }


    return ans;
}

int main(void) {
    int n1;
    n1 = abs(n1);
    scanf("%d", &n1);
    int n2;
    scanf("%d", &n2);
    n2 = abs(n2);
    printf("%d", cmp_bits(n1, n2));
    return 0;
}