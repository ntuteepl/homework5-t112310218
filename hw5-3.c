#include <stdio.h>
#include <stdlib.h>

int main()
{
    int h,m;
    double output;

    scanf("%d%d", &h, &m);

    if(h > 120){
        output += (h - 120) * 1.66 * m;
        h = 120;
    }
    if(h > 60){
        output += (h - 60) * 1.33 * m;
        h = 60;
    }
    output += h * m;
    printf("%.1f", output);
    return 0;
}

