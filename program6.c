#include<stdio.h>

int main()
{
	int iValue1=0;
	int iValue2=0;
	int iMult=0;

	printf("Enter First Number:\n");
	scanf("%d",&iValue1);

	printf("Enter Second Number:\n");
	scanf("%d",&iValue2);

	iMult=iValue1 * iValue2;

	printf("Multiplication is:%d\n",iMult);



	return 0;
}