#include<stdio.h>

void ReverseofNumber(int iNo)
{
	int iCnt=0;
	int iAns=0;
   
   printf("ReverseofNumber is:\n");

	for(iCnt=iNo; iCnt>=1; iCnt--)
	{
		

		printf("%d\n",iCnt);
	}
    
}

int main()
{
	int iValue=0, iRet=0;

	printf("Enter the number:\n");
	scanf("%d",&iValue);

	ReverseofNumber(iValue);


	return 0;
}