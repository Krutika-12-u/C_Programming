#include<stdio.h>
#include<stdlib.h>

void Table(int iNo)
{
    int iNum = 0;

    for(iNum = 1; iNum <= 10; iNum++)
    {
        printf("%d\t",iNo * iNum);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    Table(iValue);

    return EXIT_SUCCESS;
}