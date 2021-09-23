#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(void) {
    char *integer = (char *)malloc(10 * sizeof(char));
    char *dec = (char *)malloc(10 * sizeof(char));

    char c;
    int int_count = 0;

    while(((c = getchar()) != ' ') && (c != '|')) 
        integer[int_count++] = c;

    while (((c = getchar()) == ' ') || (c == '|'));

    int dec_count = 0;
    dec[dec_count++] = c;
    while ((c = getchar()) != '\n')
        dec[dec_count++] = c;

    double res = 0;

    for (int i = 0; i < int_count; i++)
        res += (integer[i] - '0') * pow(10, (int_count - i - 1));
    
    for (int i = 0; i < dec_count; i++)
        res += (dec[i] - '0') / pow(10, i + 1);

    printf("%f\n", res);

    // puts(integer);
    // puts(dec);

    return 0;
}