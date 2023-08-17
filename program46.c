#include<stdio.h>
#include<stdbool.h>

int CalculatePower(int iBase, int iPower)
{
    int iCnt = 0;
    int iResult = 1;

    iCnt = 1;
    while(iCnt <=iPower)
    {
        iResult = iResult * iBase;
        iCnt++;
    }
    return iResult;
}
int main()
{
    int iValue1 = 0, iValue2 = 0;
    int iRet = 0;

    printf("Enter base : \n");
    scanf("%d",&iValue1);      //2
    printf("Enter power : \n");
    scanf("%d",&iValue2);      //5

    iRet = CalculatePower(iValue1,iValue2);

    printf("Result is : %d\n",iRet);

    return 0;

}