#include<stdio.h>
#include<stdlib.h>

int OddDisplay(int Arr[], int iLength)
{

    int iCnt = 0;

    for(iCnt = 0; iCnt< iLength; iCnt++)
    if((Arr[iCnt] % 2)   != 0 );
    {
        printf("%d\n",Arr[iCnt]);
    }
}

int main()     //Entry point fun
{
    int iSize =0; // to store size of array
    int *ptr = NULL; // to store address of array
    int iCnt = 0;   // Loop Counter 
    
      
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

    // Step 4 : pass the array to the function
    OddDisplay(ptr,iSize);   // Demo(400,4);

    // Step 5 : Deallocate the memory of array
    free(ptr);

    return 0;          // Return success to OS

}