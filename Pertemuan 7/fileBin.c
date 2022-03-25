#include <stdio.h>
#include <stdlib.h>

struct threeNum
{
    int n1, n2, n3;
};

int main(int argc, char *argv[])
{
    int n;
    struct threeNum num, num1;
    FILE *fptr;

    printf("cli :%d\n", argc);

    if ((fptr = fopen("program.bin", "wb")) == NULL)
    {
        printf("Error! opening file");

        // Program exits if the file pointer returns NULL.
        exit(1);
    }
    // menulis file .bin
    // for (n = 1; n < 5; ++n)
    // {
    //     num.n1 = n;
    //     num.n2 = 5 * n;
    //     num.n3 = 5 * n;
    //     fwrite(&num, sizeof(struct threeNum), 1, fptr);
    // }

    for (n = 1; n < 5; ++n)
    {
        fread(&num, sizeof(struct threeNum), 1, fptr);
        printf("n1: %d\tn2: %d\tn3: %d\n", num.n1, num.n2, num.n3);
    }
    fclose(fptr);

    return 0;
}