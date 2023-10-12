#include<stdio.h>
#include<conio.h>
void main()
{
  int p;
  float r,n,ans;
  clrscr;
  printf("Enter your principal amount:");
  scanf("%d",&p);
  printf("Enter your rate of intrest:");
  scanf("%f",&r);
  printf("Enter your number of year:");
  scanf("%f",&n);
  ans=(p*r*n)/100;
  printf("your ans is ==> %f",ans);
  getch();




}