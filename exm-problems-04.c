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
//##06 find out the square of a number
#include <stdio.h>
int main()
{
    float square, number;
    printf("Enter Your Number : ");
    scanf("%f",&number);
    square = number * number;
    printf("Square = %.2f",square);
    return 0;
}
//##07 take two numbers as input divide them and find out quotient and remainder
#include <stdio.h>
int main()
{
    int dividend, divisor, quotient, remainder;
    printf("The two dividend and divisor = \n");
    scanf("%d %d",&dividend, &divisor);
    quotient = dividend / divisor;
    remainder = dividend % divisor;
    printf("Quotient = %d and Remainder = %d ",quotient,remainder);
    return 0;
}
//##08 findout the sum of digits of a number (2 digits or 3 digits)
#include <stdio.h>
int main()
{
    int n,t,remainder,sum=0;
    printf("Enter an integer value: \n");
    scanf("%d",&n)
    t=n;
    while(t!=0){
        remainder=t%10;
        sum = sum + remainder;
        t=t/10;
    }
    printf("Sum of the digits )
    return 0;
}
//##09 take a number as input and check if it is positive or negative
#include <stdio.h>
int main()
{
    int a;
    printf("Type your number: ");
    scanf("%d",&a);
    if(a>=0){
        printf("The Number %d is Positive",a);
    }
    else{
        printf("The Number %d is Negative",a);
    }
    return 0;
}
