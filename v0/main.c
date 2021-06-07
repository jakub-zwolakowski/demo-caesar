#include <stdlib.h>
#include <stdio.h>
#include <caesar.h>

void gen_test(int user_shift, char *str)
{
    char *res1, *res2;

    printf("Encrypt text '%s'\n", str);
    res1 = caesar_encrypt(str, user_shift);
    printf("Result: %s\n", res1);

    printf("Decrypt text '%s'\n", res1);
    res2 = caesar_decrypt(res1, user_shift);
    printf("Result: %s\n", res2);

    free(res1);
    free(res2);
}

int main(void)
{
    char str[] = "People of Earth, your attention please";

    printf("Test 1: Shift with a negative input\n");
    gen_test(-3, str);
    printf("\nTest 2: Shift with a positive input\n");
    gen_test(7, str);

    return 0;
}
