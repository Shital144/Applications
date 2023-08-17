
// Write a program which checks whether number is given or odd.
#include<stdio.h>       // For printf and scanf
#include<stdbool.h>    // for bool Data type

/////////////////////////////////////////////////////////////
//
// Function name : checkEvenOdd
// Input :         Integer
// Output :        Boolean
// Description :   Checks whether input is Divisible by 3 and 5
// Author :        Shital Ashok Saindane
// Date :          25/04/ 2023
// Update date:    26/04/2023     
//
///////////////////////////////////////////////////////////////

bool CheckDivisible(int iNo)
{
    if(((iNo % 3) == 0) && ((iNo % 5) == 0))
    {
        return true;
    }
    else
    {
        return false;
    }
}
////////////////////////////////////////////////////////////////
// Entry point function
///////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;            //Variable to accept input 
    bool bRet = false;         //Variable to accept return value

    printf("Please enter number check whether it is divisible by 3 AND 5 : \n");
    scanf("%d",&iValue);

    bRet = CheckDivisible(iValue);     //Function call

    if(bRet == true) 
    {
        printf("%d is completely divisible by 3 and 5\n",iValue);
    }
    else
    {
        printf("%d is not completely divisible by 3 and 5\n",iValue);

    }
    return 0;
}  
