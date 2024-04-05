#include<stdio.h>

void print(int iValue)
{
   int iCnt=0;
    iCnt=1;
   while(iCnt<=iValue)
   {
   	printf("Jay Ganesh....\n");
   	iCnt++;
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