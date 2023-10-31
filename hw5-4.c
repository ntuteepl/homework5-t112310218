#include <stdio.h>
#include <stdlib.h>

int main()
{
    int h, m;
    double hAngle, mAngle, output;
    scanf("%d%d", &h, &m);

    hAngle = h * 30.0 + (30.0 / 60.0 * m);

    mAngle = 6.0 * m;

    if(hAngle >= mAngle){
        output = hAngle - mAngle;
    }else{
        output = mAngle - hAngle;
    }

    if(output > 180) output = 360 - output;

    printf("%.3f", output);

    return 0;
}

