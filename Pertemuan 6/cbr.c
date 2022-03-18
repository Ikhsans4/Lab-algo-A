// #include<stdio.h>

// int penjumlahan(int a, int b){
//     a = b +3;
//     return (a + b);
// }

// int main(){

//      char aku[20] = "mereka";
//      char mereka[20] = aku;

//      //aku = dia;
//      mereka[3] = 'd';
//      printf("%s",aku);
//     // printf("%u", &aku);
//     // printf("%u", &dia);


//     return 0;
// }

#include<stdio.h>

//called-by reference
int kali(int *a, int *b){
    int hasil = *a * *b;
    int temp = *a;
    *a = *b;
    *b = temp;
    return hasil;
}

int main(){
    int a = 2, b = 7;
    printf("nilai a sebelum masuk fungsi : %d\n",a);
    printf("nilai b sebelum masuk fungsi : %d\n",b);

    int result = kali(&a, &b);

    printf("hasil setelah masuk fungsi= %d\n", result);
    printf("nilai a setelah masuk fungsi: %d\n",a);
    printf("nilai b setelah masuk fungsi: %d\n",b);
    return 0;
}

