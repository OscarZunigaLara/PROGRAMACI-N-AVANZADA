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
    printf("\n");
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

int circularLeftShift(int n1, int toShift){
    unsigned int xr;
    unsigned int x1 = n1;
    x1 = x1 << toShift;
    //binprintf(n1);
    //printf("\n");
    //binprintf(x1);
    unsigned int x2 = n1;
    x2 = x2 >> 32 - toShift;
    //printf("\n");
    //binprintf(x2);
    //printf("\n");
    //binprintf(375);
    xr = x1 + x2;
    return xr;
}
/*
int main(void) {
    int n1;
    scanf("%d", &n1);
    int n2;
    scanf("%d", &n2);

    printf("%u", circularLeftShift(n1, n2));
}
 */

int circularRightShift(int n1, int toShift){
    int xr = circularLeftShift(n1, 32 - toShift);
    return xr;
}
/*
int main(void) {
    int n1;
    scanf("%d", &n1);
    int n2;
    scanf("%d", &n2);

    printf("%u", circularRightShift(n1, n2));
}
 */

int swapBits(int n1, int n2, int n3){
    unsigned  int xr = n1;

    //printf("\n");
    //binprintf(n1);
    //printf("\n");
    int b1 = n1;
    b1 = b1 >>  n2;
    unsigned int x1 = 1;
    x1 <<= n2;

    if (b1 %2 == 1){
        xr =xr -x1;
    } else{
        xr = xr + x1;
    }
    //binprintf(b1);
    //binprintf(x1);
    //printf("\n");
    unsigned int b2 = n1;
    b2 = b2 >> n3;
    int x2 = 1;
    x2 <<= n3;

    if (b2 %2 == 1){
        xr = xr-x2;
    } else{
        xr = xr + x2;
    }

    //binprintf(x2);
    //binprintf(b2);
    //printf("\n");

    return xr;
}

int main(void) {
    int n1;
    scanf("%d", &n1);
    int n2;
    scanf("%d", &n2);
    int n3;
    scanf("%d", &n3);
    printf("%u", swapBits(n1, n2, n3));
}