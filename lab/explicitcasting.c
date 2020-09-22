#include <stdio.h>

int main()
{
    double x = 10.22;
    int y = 10;
    char z = 'p';
    
    //float sum = (int)x+y+z;
    //float sum = (float)x+(float)y+(float)z;
    float sum = (int)x+y+(float)z;
    printf("%f", sum);

    return 0;
}
