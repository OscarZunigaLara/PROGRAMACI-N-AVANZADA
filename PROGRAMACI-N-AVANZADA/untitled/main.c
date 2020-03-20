#include <stdio.h>
#include <math.h>

int palindrobits(int n){
    int pal = 0;
    int normal =n;
    int isPal;
    while (0 < normal) {
        pal<<=1;
        pal |= normal & 1;
        normal >>= 1;

    }
        //printf("%d \n", pal);
        if (pal == n){
            isPal = 1;
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
    while (n!=0){
        //binprintf(n);
        //printf("\n");
        if (n%2 == 1){
            numberOfOnes++;
        }
        n = n>>1;
    }
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

/*
int main(void) {
    int n1;
    scanf("%d", &n1);
    int n2;
    scanf("%d", &n2);
    printf("%d", cmp_bits(n1, n2));
    return 0;
}
int invert(x, p, n) {
    unsigned int xr = 0;
    unsigned int clone = x;
    unsigned  int clone2= x;
    unsigned  int clone3= x;


    clone = clone>> (p);
    clone = ~clone;
    clone = clone<<(32 -(n));
    clone = clone>>(32- p - n);
    printf("\n");

    printf("\n");
    clone3 = clone3 << (32- p);
    clone3 = clone3 >> (32 - (p) );


    xr= clone + clone3;


    return xr;
}
int main(void) {
    int n1;
    scanf("%d", &n1);
    int n2;
    scanf("%d", &n2);
    int n3;
    scanf("%d", &n3);\
    printf("%d", invert(n1, n2,n3));
}

 */

int invert(x, p, n) {
    unsigned int xr = 0;
    unsigned int clone = x;
    unsigned  int clone3= x;


    clone = clone>> (p);
    clone = ~clone;
    clone = clone<<(32 -(n));
    clone = clone>>(32- p - n);
    printf("\n");

    printf("\n");
    clone3 = clone3 << (32- p);
    clone3 = clone3 >> (32 - (p) );


    xr= clone + clone3;


    return xr;
}
/*
int main(void) {
    int n1;
    scanf("%d", &n1);
    int n2;
    scanf("%d", &n2);
    int n3;
    scanf("%d", &n3);\
    printf("%d", invert(n1, n2,n3));
}
 */

int circularLeftShift(){
    int xr;


    return xr;
}

int main(void) {
    int n1;
    scanf("%d", &n1);
    int n2;
    scanf("%d", &n2);
    int n3;
    scanf("%d", &n3);\
    printf("%d", invert(n1, n2,n3));
}