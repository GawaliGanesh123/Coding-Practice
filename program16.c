#include<stdio.h>

void print(int iValue)
{
	int iCnt=0;

	for(iCnt=1; iCnt<=iValue; iCnt++)
	{
	  printf("\nGanesh Gawali......\n");
	}
}

int main()
{
	int iNo=0;

	printf("Enter the Number:\n");
	scanf("%d",&iNo);

	print(iNo);


	return 0;
}