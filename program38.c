#include<stdio.h>

void DisplayB(int iNo)
{
    int iCnt = 0;
//        1           2          3
    for(iCnt = iNo; iCnt >= 1; iCnt--)
    {
        printf("%d\t",iCnt);            //4
    }
}
int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    DisplayB(iValue);

    return 0;
    
}