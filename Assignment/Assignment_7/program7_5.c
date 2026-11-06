#include<stdio.h>
#include<stdlib.h>

void MultipleDisplay(int iNo)
{  
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\t",iNo * iCnt);
    }

    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);

    return EXIT_SUCCESS;
}