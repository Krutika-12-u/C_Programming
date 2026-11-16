#include<stdio.h>
#include<stdlib.h>

void Display(int iNo)
{
    int iCnt = 0;

    if(iNo != 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 0; iCnt <= iNo; iCnt++)
    {
        printf("*\t",iCnt);
    }

    for(iCnt = 0; iCnt <= iNo; iCnt++)
    {
        printf("#\t",iCnt);
    }

    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    Display(iValue);

    return EXIT_SUCCESS;
}