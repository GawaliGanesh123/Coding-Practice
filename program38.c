// accept number from user and display table of that number 
#include<stdio.h>

void DisplayTable(int iNo)
{
	int iCnt=0;
          printf("____________________\n");
           printf("table of %d is: \n",iNo);
     printf("____________________\n");
	for(iCnt=1; iCnt<=10; iCnt++)
	{
	  printf("%d\n",iNo*iCnt);
	}
     printf("____________________\n");
	
}

int main()
{
	int iValue=0;
	int iRet=0;

	printf("Enter the number:\n");
	scanf("%d",&iValue);

	DisplayTable(iValue);

	return 0;
}