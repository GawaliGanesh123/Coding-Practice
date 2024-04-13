// accept number from user and display reversing order of that number till 1.

#include<stdio.h>
 
 void DisplayReverse(int iNo)
 {
   int iCnt=0;

   printf("__________________________\n");

   for(iCnt=iNo; iCnt>=1; iCnt--)
   {
   printf("%d\t",iCnt);
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