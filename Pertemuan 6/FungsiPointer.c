#include<stdio.h>

//called-by value
int kali(int a, int b){
    int hasil = a * b;
    int temp = b;  
    b = a;
    a = temp;
    return hasil;
}

int main(){
    int a = 2, b = 7;

    printf("nilai a sebelum masuk fungsi : %d\n",a);
    printf("nilai b sebelum masuk fungsi : %d\n",b);

    int result = kali(a, b);

    printf("hasil setelah masuk fungsi= %d\n", result);
    printf("nilai a setelah masuk fungsi: %d\n",a);
    printf("nilai b setelah masuk fungsi: %d\n",b);
    return 0;
}

/*
    output ;
    nilai a sebelum masuk fungsi : 2
    nilai b sebelum masuk fungsi : 7
    hasil setelah masuk fungsi= 14
    nilai a setelah masuk fungsi: 2
    nilai b setelah masuk fungsi: 7
*/


// #include<stdio.h>

// int kali(int* a, int*b){
//     int hasil = *a * *b;
//     a = b;//kaji ulang
//     b = a;
//     return hasil;
// }

// int main(){
//     int a = 2, b = 3;
//     int result = kali(&a, &b);
//     printf("hasil = %d", result);
//     printf("nilai a : %d",a);
//     printf("nilai b : %d",b);
//     return 0;
// }