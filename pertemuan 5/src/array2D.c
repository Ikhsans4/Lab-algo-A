#include <stdio.h>

int main()
{
    // array 1d
    int angka[10] = {1, 2};
    // angka[1];
    // array 2d
    int matriks[3][2] = {{1, 2},
                         {3, 4},
                         {5, 6}};

    printf("%d \n", matriks[1][1]);
    printf("%d \n", matriks[1][0]);
    for (int baris = 0; baris < 3; baris++)
    {
        for (int kolom = 0; kolom < 2; kolom++)
        {
            printf("%d ", matriks[baris][kolom]);
        }
        printf("\n");
    }

    return 0;
}