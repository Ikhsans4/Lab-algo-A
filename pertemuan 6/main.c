// #include<stdio.h>
// #include<string.h>//penting

// int main(){
//     char univ[12] = "Universitas";
//     char nama[] = "_Syiah Kuala";

//     //menggabungkan string
//     strcat(univ, nama);

//     printf(univ);

//     return 0;
// }

#include<stdio.h>
#include<stdlib.h>

int main(){
// 
    // int a = 10;
    char nama[10];

    printf("program berhasil dijalankan");

    printf("Masukkan nama anda : ");
    scanf("%[^\n]s", nama);

    printf("nama saya adalah : %s", nama);

    return 2020;
}