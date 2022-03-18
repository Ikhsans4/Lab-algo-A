#include<stdio.h>
#include<string.h>//penting

int main(){
    char univ[] = "Universitas";
    char nama[] = "_Syiah Kuala";

    //menggabungkan string
    strcat(univ, nama);

    printf(univ);

    return 0;
}