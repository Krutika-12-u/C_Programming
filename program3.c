/*
    step 1 : Understand the problem statement 
    step 2 : Write the Algorithm
    step 3 : Decide the programming language 
    step 4 : write the program
    step 5 : Test the program

*/

////////////////////////////////////////////////////////////////////////
//
//Step1: Understand the problem statement 
//       User is going to enter any two integers
//       And we have tom perform addition
//
////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////
// step2 : Write the Algorithm
/*
    Start 
        Accept First Number as No1
        Accept Second Number as No2
        Create the Varible as Ans to store the result
        Perform the Addition and shore into Ans 
        Diplay the result from Ans
    End
*/
////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////
//
// step 3 : Decide the programming language 
//          We select C programming language
////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////
//
// step 4 : write the program
//
////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int main()
{
    int iValue1 = 10, iValue2 = 11, iResult = 0;

    iResult= iValue1 + iValue2;           //Bussiness Logic

    printf("%d\n",iResult);

    return 0;
}