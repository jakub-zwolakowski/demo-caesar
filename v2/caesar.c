#include <stdlib.h>

int absolute_int(int x)
{
    int abs_x;
    if (x < 0)
        abs_x = -x;
    else
        abs_x = x;
    return abs_x;
}

char *caesar_encrypt(char *str, int len, int d)
{
    int shift = absolute_int(d);
    int i = 0;
    char *buf = (char *)malloc(len);

    if (buf) {
        while (*str) {
            /* Spaces are not encrypted. */
            buf[i] = *str == ' ' ? ' ' : *str + (char)shift;
            i++;
            str++;
        }
        buf[i] = '\0';
    }
    return buf;
}

char *caesar_decrypt(char *str, int len, int d)
{
    int shift = absolute_int(d);
    int i = 0;
    char *buf = (char *)malloc(len);

    if (buf) {
        while (*str) {
            /* Spaces are not decrypted. */
            buf[i] = *str == ' ' ? ' ' : *str - (char)shift;
            i++;
            str++;
        }
        buf[i] = '\0';
    }
    return buf;
}
