/**
 * printf, puts
 * format specifier
 * scanf, fgets
 */

#include<stdio.h>

int main(){

    //int, float, double, char, boolean
    char nama[30] = "fulan";
    int umur = 18 ;
    float TinggiBandan = 154.5 ;

    printf("masukkan nama anda : ");
    scanf(" %s", nama);

    printf("masukkan umur anda :");
    scanf("%d", &umur);

    printf("masukkan tiggi badan :");
    scanf("%f", &TinggiBandan);


    printf("\n\nhasil output dari yang kira masukkan \n");
    printf("nama saya adalah %s, \numur saya adalah %d, \ntinggi badan saya adlah %.3f", nama,umur, TinggiBandan);

    return 0;
}