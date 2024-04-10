// accept number from user and display addition of  non factors of that numbers.
#include<stdio.h>

int  DisplayAddFactors(int iNo)
{
  int iCnt=0;
  int iSum=0;
  
  for(iCnt=1; iCnt<iNo; iCnt++)
  {
     if((iNo % iCnt) != 0)
     {
       iSum=iSum+ iCnt;
     }

  }
    return iSum;
	
}
int main()
{
	int iValue=0;
  int iRet=0;

	printf("Enter the Number:\n");
	scanf("%d",&iValue);

   iRet=DisplayAddFactors(iValue);
  printf("Addition of non Factors of %d are:\n",iRet);


	return 0;
}