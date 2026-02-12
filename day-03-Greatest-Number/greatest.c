#include <stdio.h>
void greatest(int a, int b, int c);
void greatest(int a, int b, int c)
{
    if (a == b && b == c) /*If all the 3 no. will be same it will print c is the greatest to tackle this problem I have used this statement */
    {
        printf("The no. you have entered are same");
    }
    /* else if (a > b && a > c ) here is a problem what will be the output if a=5 and c=5 it will print c is the greatest.To know the adject value if    a > c or not use >= logic at the boundries.*/
    else if (a > b && a > c )
    {
        printf("A is the greatest no.");
    }
    else if (b >= c)
    {
        printf("B is the greatest no.");
    }
    else
    {
        printf("C is the greatest no.");
    }
}
int main()
{
    int X, Y, Z;
    printf("Enter the Three no.:\n");
    scanf("%d%d%d", &X, &Y, &Z);
    greatest(X, Y, Z);
    return 0;
}