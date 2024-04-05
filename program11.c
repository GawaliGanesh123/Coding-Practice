
#include<stdio.h>
#include<stdbool.h>
  
 bool DivisibleByFivethree(int iNo)
  {
    
     if((iNo % 5== 0) && (iNo % 3==0))
     {
       return true;
     }

    else
    {
      return false;
    }

  }
  
int main()
{
  int iValue=0;
  bool bRet=0;
  


  printf("Enter the number:\n");
  scanf("%d",&iValue);

   bRet=DivisibleByFivethree(iValue);

   if(bRet == true)
   {
    printf("Number is Divisible By Three and  Five:\n",iValue);
   }
    else
    {
      printf("Number is Not Divisible By Three and Five:\n",iValue);
    }


   return 0;
}