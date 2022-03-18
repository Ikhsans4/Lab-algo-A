#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "abcd";
    char str2[] = "abCd";
    char str3[] = "Abcd";
    int result;

    // comparing strings str1 and str2
    result = strcmp(str1, str2);
    printf("strcmp(str1, str2) = %d\n", result);

    //comparing strings str1 and str1
    result = strcmp(str1, str1);
    printf("strcmp(str1, str1) = %d\n", result);

    // comparing strings str1 and str3
    result = strcmp(str3, str1);
    printf("strcmp(str3, str1) = %d\n", result);

    return 0;
}