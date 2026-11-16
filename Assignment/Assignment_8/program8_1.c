#include<stdio.h>
#include<stdlib.h>

void Number(int iNo)
{
    int iCnt = 0;

        if(iNo < 50)
        {
            printf("Number is small");
        }
        else if(iNo > 50 && iNo < 100)
        {
            printf("Number is medium");
        }
        else if(iNo > 100)
        {
            printf("Number is large");
        }
        else
        {
            printf("Number is 50 or 100");
        }

        printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    Number(iValue);

    return EXIT_SUCCESS;
}