#include<stdio.h>
#include<stdbool.h>
///////////////////////////////////////////
//
// Description  = for checking the no is armstrong or not.
// Input  = Int, Int
// Return = Int
//
///////////////////////////////////////////
int CheckArmstrong(int iNo)
{
    int iTemp = iNo;
    int iSum = 0,iCnt = 0, iDigcnt =0, iDigit = 0;
    int iRet = 1;

    while(iNo!=0)
    {
        iDigcnt++;
        iNo = iNo/10;
    }

    iNo = iTemp;

    for (iCnt = 1; iCnt <= iDigcnt; iCnt++)
    {

        while (iNo!=0)
        {
        iRet = iNo%10;

        iSum = iSum + Power(iRet,iDigcnt); 
        iNo = iNo/10;
        }
    }

    if(iTemp == iSum)
    {
        return true;
    }
    else
    return false;
}


///////////////////////////////////////////
//
// Description  = For checking power of the number
// Input  = Int, Int
// Return = Int
//
///////////////////////////////////////////

int Power(int iNo, int iCnt)
{
    
    int iAns = 1;
    int i=0;

    for ( i = 1; i <= iCnt; i++)
    {
        iAns = iAns * iNo;
    }
    
    return iAns;
}

int main()
{
    int iVal=0;
    bool bRet;
    scanf("%d",&iVal);

    bRet =  CheckArmstrong(iVal);

    if (bRet == true)
    {
        printf("%d IS A ARMSTRONG NUMBER\n",iVal);
    }
    else
    {
        printf("%d IS NOT A ARMSTRONG NUMBER\n",iVal);

    }
 
    return 0;
}
