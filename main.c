#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[])
{
    float value;
    float result;

    printf("Enter a positive number:");
    scanf("%f", &value);

    result = log2(value);

    printf("The Base 2 Logarithm of %f is %f\n", value, result);

    return 0;
}
