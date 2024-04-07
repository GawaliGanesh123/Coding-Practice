// factorial 5 number
#include<stdio.h>

int Factorial()
{
int iFact=1;
int iCnt=0;

  for(iCnt=1; iCnt<=5; iCnt++)
  {
  	iFact=iFact*iCnt;
  }

    return iFact;
}
int main()
{
   int iRet=0;

   iRet= Factorial();

   printf(" Factorial  is: %d\n",iRet);

	return 0;
}