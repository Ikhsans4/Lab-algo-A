#include<stdio.h>
#include<string.h>//penting

int main(){
    char kata1[] = "Nama";
    char kata2[] = "mama";

    //membandingkan string dengan nilai Asci
    if ((strcmp(kata1, kata2))==0){
        printf("format kata sama");
    }else{
        printf("format kata berbeda");
    }
        printf("\nnilai %d", strcmp(kata1, kata2));

    return 0;
}