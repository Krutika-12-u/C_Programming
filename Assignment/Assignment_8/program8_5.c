#include<stdio.h>
#include<stdlib.h>

void TableRev(int iNo)
{
    int iNum = 0;

    for(iNum = 10; iNum >= 1; iNum--)
    {
        printf("%d\t",iNo * iNum);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    TableRev(iValue);

    return EXIT_SUCCESS;
}