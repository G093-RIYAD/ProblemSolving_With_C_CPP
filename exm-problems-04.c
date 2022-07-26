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
//##03 findout fahrenheit to celsius, celsius to fahrenheit
#include <stdio.h>;
int main()
{
    float fahrenheit, celsius;
    printf("Enter the temperature in fahrenheit : ");
    scanf("%f",&fahrenheit);
    celsius = (fahrenheit - 32) * 5 / 9;
    printf("The conversion of %.2ff is %.2fc",fahrenheit,celsius);
    return 0;
}
//##04  take input of height, width and length and find out volume of a box
#include <stdio.h>
int main()
{
    float height, width, length,volume;
    printf("Enter height: ");
    scanf("%f",&height);
    printf("Enter width: ");
    scanf("%f",&width);
    printf("Enter length: ");
    scanf("%f",&length);
    volume = height*width*length;
    printf("The Volume of the box is : %.2f ",volume);
    return 0;
}
//##05 take length and width to find out area of a rectangle
#include <stdio.h>
int main()
{
    float width, length, rectangle;
    printf("Enter width: ");
    scanf("%f",&width);
    printf("Enter length: ");
    scanf("%f",&length);
    rectangle = width*length;
    printf("The area of a rectangle is : %.2f sq. units ",rectangle);
    return 0;
}
