#include<stdio.h>

void DisplayF(int iNo)
{
    int iCnt = 0;
//        1           2          3
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\t",iCnt);            //4
    }
}
int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    DisplayF(iValue);

    return 0;
    
}