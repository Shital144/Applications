#include<stdio.h>
#include<stdlib.h>

int Average(int Arr[], int iLenght)
{
    int iCnt = 0;
    int iSum = 0;

  for(iCnt = 0;iCnt< iLenght; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }
    return ((float)iSum / (float)iLenght);

}

int main()     //Entry point fun
{
    int iSize =0; // to store size of array
    int *ptr = NULL; // to store address of array
    int iCnt = 0;   // Loop Counter 
    int fRet = 0.0f;
      
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
    // step 4 : pass the array to the function
    fRet = Average(ptr,iSize); // Demo (400,4)
    printf("Average is : %f\n",fRet);
     // Deallocate the Memory of array
    free(ptr);

    return 0;     // Return success to OS
}