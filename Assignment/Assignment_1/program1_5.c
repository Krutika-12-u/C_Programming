// Accept one Number from user and print that number of * on Screen

/* 
  Function Name : Accept 
  Input : Integer
  Output : *
  Description : Print no.of * on screen
  Date : 25/10/2026
  Author : Krutika Gulab Ubhe
*/

#include <stdio.h>

void Accept(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("*");
    }
}

int main()
{
    int iValue = 0;
    iValue = 5;

    Accept(iValue);

    return 0;
}
