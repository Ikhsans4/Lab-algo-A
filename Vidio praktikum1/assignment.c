#include<stdio.h>

int main(){

    float a = 5,  b = 10, c;

    c += a;
    printf(" penjumlahan a dan b : %.2f\n",c );
    c *= b;
    printf(" perkalian a dan b : %.2f\n",c );
    c /= b;
    printf(" pembagian a dan b : %.2f\n",c );
    c -= b;
    printf(" pengurangan a dan b : %.2f\n",c );
    // c %= 5;
    // printf(" modulus a dan b : %.2f\n",c );

    return 0;
}