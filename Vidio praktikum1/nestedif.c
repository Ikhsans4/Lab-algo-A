#include<stdio.h>

int main(){

    int umur= 60;
    float berat_badan = 90;

    if (umur >40){
        if(berat_badan>=100){
            printf("ada kolesterol\n");
            printf("berpotensi serangan jantung");
        }else{
            printf("jaga-jaga");
        }
    }else{
        printf("hidupnya aman ");
    }
    

    return 0;
}