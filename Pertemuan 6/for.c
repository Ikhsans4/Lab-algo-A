#include<stdio.h>

int main(){
     
    for (int i = 0; i <= 4; i++){


        for (int  j = 4; j > i; j--){
            printf("*");
        }

        printf("\t");

        for (int  j = 4; j > 0; j--){

            if (j>i){
                continue;
            }
            // printf("*");
            printf("*"); 
            
        }
        
        printf("\n");
    }
    


    return 0;
}