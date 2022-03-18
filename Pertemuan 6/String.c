#include<stdio.h>

int main(){

    char *kalimat[3] = {"aku", "kamu", "dia"};

    int i = 0;

    while(i<3){
        printf("isi kata ke-%d : %s\n", i+1, kalimat[i]);
        i++;
    }

    printf("tes 123");


    return 0;
}