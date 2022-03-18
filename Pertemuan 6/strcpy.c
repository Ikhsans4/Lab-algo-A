#include<stdio.h>
#include<string.h>//penting

int main(){

    char kata1[] = "WhatsApp ngelag";
    char kata2[20];

    //sebelum dicopy
    printf("sebelum dicopy\n");
    printf("isi kata 1 : %s\n", kata1);
    printf("isi kata 2 : %s\n", kata2);

    //mengcopy string
    strcpy(kata2, kata1);

    //setelah dicopy
    printf("setelah dicopy\n");
    printf("isi kata 1 : %s\n", kata1);
    printf("isi kata 2 : %s\n", kata2);

    printf("%p\n", kata1);
    printf("%p\n", kata2);

    return 0;
}