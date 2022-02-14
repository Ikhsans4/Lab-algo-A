#include<stdio.h>

int main(){

    float a = 5,  b = 10, c;

    c = a+b;
    printf(" penjumlahan a dan b : %.2f\n",c );
    c = a*b;
    printf(" perkalian a dan b : %.2f\n",c );
    c = a/b;
    printf(" pembagian a dan b : %.2f\n",c );
    c = a-b;
    printf(" pengurangan a dan b : %.2f\n",c );
    c= 10 % 5;
    printf(" modulus a dan b : %.2f\n",c );

    return 0;
}