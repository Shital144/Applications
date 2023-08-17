/*
  steps to create the applicatin

  step 1 : Understand the problem statement
  step 2 : Write the algorithm
  step 3 : Decide the programming language
  step 4 : Write the program
  step 5 : Test the written program

*/

// write a program which performs addition of two numbers

/*
   START
       Accept First Number as No1
       Accept Second Number as No2
       Create one variable as Ans
       Perform Addition of No1 and No2
       Store the addition into variable ANS
       Display the value of ANS
  STOP
*/
//////////////////////////////////////////////////////////////////////////////////////
// Problem statement : write a program which performs addition of two numbers
//
/////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////
//
// function Name : Addition
// Input :         Unsigned integer
// Output :        Unsigned integer
// Description :   Perform addition of 2 number
// Author  :       Shital Ashok Saindane
//Date :           19/04/2023
//
///////////////////////////////////////////////////////////////////////////////////

unsigned int Addition(unsigned int iValue1, unsigned int iValue2)
{
    unsigned int iResult = 0;
    iResult = iValue1 + iValue2;
    return iResult;

}
/////////////////////////////////////////////////////////////////////////////////
// Entry Point function
////////////////////////////////////////////////////////////////////////////////

int main()
{
    unsigned int iNo1 = 0, iNo2 = 0, iAns = 0;

    printf("Enter first number : \n");
    scanf("%d",&iNo1);

    printf("Enter second number :\n");
    scanf("%d",&iNo2);

    iAns = Addition(iNo1, iNo2);

    printf("Addition is : %d \n",iAns);

    return 0;
}