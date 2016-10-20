#include<stdio.h>
#include<conio.h>
int main()
{
int i;
printf("Enter the value of i");
scanf("%d",&i);
if(i>0)
printf("positive number");
else if(i<0)
printf("negative number");
else
printf("zero");
return 0;
}
