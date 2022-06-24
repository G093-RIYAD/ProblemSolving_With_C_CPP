#include <stdio.h>
int main()
{
    /*Write a program which will take a positive integer as input
    from the user and print whether the integer is EVEN or ODD.*/
    int a,b;
    printf("Input a integer value: ");
    scanf("%d",&a);
    b = a % 2;
    if(b == 0){
        printf("%d is an EVEN number.",a);
    }
    else{
        printf("%d is an ODD number.",a);
    }

    return 0;
}
