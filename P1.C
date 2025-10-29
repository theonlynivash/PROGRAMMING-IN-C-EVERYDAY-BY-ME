#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
int ch;
float a,b,c;
printf("choose u r choice : 1) ADD, 2) SUB , 3) MULTIPLE , 4) DIVIDE :");
scanf("%d",&ch);
printf("enter the two numbers to perform ur function :");
scanf("%lf,%lf",&a,&b);
switch(ch)
{
case 1:
c=a+b;
printf("%f",a+b);
break;
case 2:
c=a-b;
printf("%f",c);
break;
case 3:
c=a*b;
printf("%f",c);
break;
case 4:
c =a/b;
printf("%f",c);
break;
default:
printf("INVALID CHOICE\n");
break;
}
getch();
return 0;
}