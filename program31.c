// get input from user and display factor of that number
#include<stdio.h>

int Factorial(int iValue)
{
int iFact=1;
int iCnt=0;

  for(iCnt=1; iCnt<=iValue; iCnt++)
  {
  	iFact=iFact*iCnt;
  }

    return iFact;
}
int main()
{
   int iRet=0;
   int iNo=0;

   printf("Enter the Number:\n");
   scanf("%d",&iNo);

   iRet= Factorial(iNo);

   printf("Factorial of %d is %d\n",iNo,iRet);

	  return 0;
}