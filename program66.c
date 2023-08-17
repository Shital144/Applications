#include<stdio.h>
float DigitAverage(int iNo)
{
    int iDigit = 0;
    int iSum = 0;
    int iCount = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo !=0)
    {
        iDigit = iNo % 10;
        iSum = iSum + iDigit;
        iCount++;
        iNo = iNo / 10;
    }
    return((float)iSum / (float)iCount);

}
int main()
{
    int iValue = 0;
    float fRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    fRet = DigitAverage(iValue);

    printf("Average of digits is : %f\n",fRet);

    return 0; 
}
    