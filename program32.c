// accept number from user and display factors of that number.

#include<stdio.h>

void DisplayFactors(int iNo)
{ 
	int iCnt=0;
	printf("Factors are:\n");

	for(iCnt=1; iCnt<iNo; iCnt++)
	{
		if((iNo % iCnt)==0)
		{
			printf("%d\n",iCnt);
		}
	}
}

int main()
{
   int iValue=0;

   printf("Enter the number:\n");
   scanf("%d",&iValue);

   DisplayFactors(iValue);
	
	return 0;
}