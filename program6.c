#include<stdio.h>
int main()
{
   int ino1=0; 
   int ino2=0;
   int mult=0;

printf("Enter the first number:\n");
scanf("%d",&ino1);

printf("Enter the second number:\n");
scanf("%d",&ino2);

printf("first Element is :%d\n",ino1);

printf("second Element is: %d\n",ino2);

mult=ino1*ino2;
printf("Multiplication is:%d\n",mult);
return 0;
}