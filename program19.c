#include<stdio.h>
 
 void Display(int iNumber)
 {
 	int iCnt=0;

  iCnt=1;

 	while(iCnt<=iNumber)
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
  Display(iNo);
	return 0;
}