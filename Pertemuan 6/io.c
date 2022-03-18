#include<stdio.h>

void print(char nama[], int usia){
    printf("=== ini adalah hasil outputnya ===\n");
    printf("nama saya adalah %s\n", nama);
    printf("usia saya adalah : %d tahun", usia);
}

int main(){

    printf("=== ini adalah form perkenalan diri ===\n");

    char nama[20];
    int usia;
    printf("masukkan nama anda : ");
    scanf(" %s", nama);
    // scanf(" %[^\n]s", nama);  //untuk print nama lebih dari satu kata

    printf("masukkan usia anda : ");
    scanf(" %d", &usia);

    //fungsi untuk show up data nama dan usia
    print(nama, usia);

    // printf("size dari integer : %d\n", sizeof(int));
    // printf("size dari float : %d\n", sizeof(float));
    // printf("size dari double : %d\n", sizeof(double));
    // printf("size dari char : %d\n", sizeof(char));

    return 0;
}