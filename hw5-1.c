#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    float input;
    double output;
    scanf("%f", &input);
    output = (input * (9.0 / 5.0) + 32.0);
    printf("%.1f", output);
    return 0;
}

