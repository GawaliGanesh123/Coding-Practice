// accept number from user and display reversing order of that number till 1 using while loop.

#include<stdio.h>
 
 void DisplayReverse(int iNo)
 {
   int iCnt=0;

   printf("__________________________\n");
   iCnt=iNo;
   while(iCnt>=1)
   {
   printf("%d\t",iCnt);
   iCnt--;
   }
   printf("\n__________________________\n");

 }
int main()
{
  int iValue=0;

  printf("Enter the number:\n");
  scanf("%d",&iValue);

  DisplayReverse(iValue);

	
	return 0;
}