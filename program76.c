#include<stdio.h>    // IO
#include<stdlib.h>  // Memory Management

int Addition(int Arr[], int iLenght)
{
    int iSum = 0;
    int iCnt = 0;

    for(iCnt = 0; iCnt < iLenght; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }
    return iSum;
}

int main()     //Entry point fun
{
    int iSize =0; // to store size of array
    int *ptr = NULL; // to store address of array
    int iCnt = 0;   // Loop Counter 
    int iRet = 0;
      
      // step 1: Accept the number of elements from user
    printf("Enter Number of elements : \n");
    scanf("%d",&iSize);

    //Step 2 : Allocate memory Dynamicaly
    ptr = (int *)malloc(iSize * sizeof(int));

    //Step 3 : Accept the value from user
    printf("Enter the elements : \n");
    for(iCnt =0; iCnt< iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
    printf("Elements of array are : \n");
    for(iCnt =0; iCnt< iSize; iCnt++)
    {
        printf("%d\n",ptr[iCnt]);
    }
    // step 4 : pass the array to the functin
    iRet = Addition(ptr, iSize);    // Demo(400,4);
    printf("Addition is : %d\n",iRet);
    // Deallocate the memory of array
    free(ptr); 

    return 0;          // return success of OS
}