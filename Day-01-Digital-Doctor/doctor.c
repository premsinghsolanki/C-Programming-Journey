#include <stdio.h>

int main()
{
    int c;
    int choice;
    float f;
    do
{
    printf("Enter the temp. in celsius:\n");
    scanf("%d",&c);
    f = (((float)c*9/5) + 32); /* we have used here type casting to know the adject value of f*/
    printf(" The temp. in Fahrenheit is: %.2f \n",f);
    if(f>102.0)
    {
        printf("CRITICAL: Go to the Hospital immediately!\n");
    }
   else if(f>98.6 && f<=102.0)
    {
        printf("Mild Fever: Take Paracetamol and rest.");
    }
    else
    {
        printf("You are perfectly healthy.. \n");
        
    }


printf("Want to check another patient. \n 1 for continue 0 for exit. ");
scanf("%d",&choice);
    }
while(choice==1);



    return 0;
}
