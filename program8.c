
#include<stdio.h>
  
 int DivisibleByFive(int iNo)
  {
    int iAns=0;
     
     iAns= iNo%5;

     if(iAns == 0)
     {
       return 1;
     }

    else
    {
      return 0;
    }

  }
  
int main()
{
  int iValue=0;
  int iRet=0;
  


  printf("Enter the number:\n");
  scanf("%d",&iValue);

   iRet=DivisibleByFive(iValue);

   if(iRet == 1)
   {
    printf("Number is Divisible By Five:\n",iValue);
   }
    else
    {
      printf("Number is Not Divisible By Five:\n",iValue);
    }


   return 0;
}