#include <stdio.h>

int main()
{
    int *pc, c;
    c = 5;
    pc = &c;
    printf("%d\n", c); // Output: 1
    c = 1;
    printf("%d\n", c);   // Output: 1
    printf("%d\n", *pc); // Ouptut: 1
    *pc = 10;
    printf("%d\n", c);   // Output: 1
    printf("%d\n", *pc); // Ouptut: 1

    // membuktikan alamat yang sama
    printf("Address of c: %p\n", &c);
    printf("Address of pointer pc: %p\n", pc);
    return 0;
}