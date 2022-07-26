//##01 take two numbers as input and add them.
#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Type two numbers: \n");
    scanf("%d %d",&a,&b);
    printf("The result:%d",a+b);
    return 0;
}

//##02 take two numbers as input (float type), divide first number by the second number and show the result.
#include <stdio.h>
int main()
{
    float x,y,sum;
    printf("Type two numbers : \n");
    scanf("%f%f",&x,&y);
    sum = x/y;
    printf("result of %.2f and %.2f = %.2f",x,y,sum);
    return 0;
}
