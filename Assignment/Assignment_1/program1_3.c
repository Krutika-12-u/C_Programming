//Program to Print 5 to 1 Numbers on screen 

/* 
  Function Name : Display
  Input : Integer
  Output : Integers
  Description : Print Reverse Numbers on screen 
  Date : 25/10/2026
  Author : Krutika Gulab Ubhe
*/

#include<stdio.h>

void Display()
{
    int i = 0;
    i = 5;

    while(i >= 1)
    {
        printf("%d\n",i);
        i--;
    }
}

int main()
{
    Display();

    return 0;
}
