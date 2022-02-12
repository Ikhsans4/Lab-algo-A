#include <stdio.h>
#include <stdbool.h>

int main()
{

    int a = 10 ;
    int b = 10 ;
    // a %= 4;
    // a = a + 2
    // a = 10 + 2
    printf("a = %d\n", a);
    bool cek = (a > b);
    printf("boolean = %d\n", cek);

    int hasil = a % b;
    int result = a / b;
    printf("hasil bagi = %d\n", result);
    printf("hasil = %d", hasil);

    return 0;
}