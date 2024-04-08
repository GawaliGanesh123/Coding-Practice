// accept number from user and display factors of that number by using time complexity.

#include<stdio.h>

void DisplayFactors(int iNo)
{ 
	int iCnt=0;
	printf("Factors are:\n");

	for(iCnt=1; iCnt<=(iNo/2); iCnt++) // time complexity iNo/2
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