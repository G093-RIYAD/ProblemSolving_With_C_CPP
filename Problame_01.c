#include<stdio.h>
int main()
{
    /*
    ##Quction:
    Take 3 integer Variables named a,b and c. Scan the values of these three
    variables from user. Then store the average of these into a new float variable
    average. Finally print the output like the following example:

    Value of a: 10
    Value of b: 20
    Value of c: 30
    Average of a,b and c:20.00
    */
    
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    float average = (a+b+c)/3.0;
    printf("Value of a: %d\n",a);
    printf("Value of b: %d\n",b);
    printf("Value of c: %d\n",c);
    printf("Average of a,b and c: %.2f\n",average);
    return 0;
}
