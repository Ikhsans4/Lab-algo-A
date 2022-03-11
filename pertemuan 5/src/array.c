#include <stdio.h>

int main()
{
    // tanpa array
    // int angka = 1;
    // int angka2 = 2;
    // int angka3 = 3;

    // array 1 dimensi

        // dengan array
    // index -> lokasi atau posisi suatu nilai di dalam array
    //                0 1 2 3 4
    // int angka[] = {1,2,3,4,5}; // nilai array langsung diisi
    int angka[5];
    //  input nilai ke dalam array

    // angka[0] = 5;
    // angka[1] = 7;
    // angka[2] = 3;
    // angka[3] = 9;
    // angka[4] = 1;

    // printf("index -0 %d", angka[3]);

    // input nilai ke dalam array menggunakan looping
    for (int i = 0; i < 5; i++)
    {
        angka[i] = i + 2;
    }
    // mencetak nilai dari array
    for (int i = 0; i < 5; i++)
    {
        printf("index ke-%d = %d\n", i, angka[i]);
    }

    char nama[25];

    scanf(" %s", &nama);

    printf("%s", nama);

    return 0;
}