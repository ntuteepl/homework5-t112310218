#include <stdio.h>
#include <stdlib.h>

int main()
{
    int input;
    double output;

    scanf("%d", &input);

    output = input * 0.9;

    if(input >= 1500){
        output *= 0.79;
    }else if(input >= 800){
        output *= 0.9;
    }

    printf("%.1f", output);
    return 0;
}
