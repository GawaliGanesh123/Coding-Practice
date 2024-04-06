// n number display marvellous

#include<stdio.h>
 
 void Digit(int iValue)
 {
   int iCnt=0;
   for(iCnt=1; iCnt<=iValue; iCnt++)
   {
    printf("Marvellous: %d\n",iCnt );
   }

}
int main()
{
  int iNo=0;
  printf("Enter the Number that you want display:\n");
  scanf("%d",&iNo);

  Digit(iNo);
	return 0;
}