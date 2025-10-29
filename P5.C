#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(){
	//AMSTRONG NUMBERS
	int n ,i,lenn,tempn,reminders[10],amstrong1=0;
	printf("ENTER ANY NUMBER(S) : ");
	scanf("%d",&n);
	lenn=(int)log10(n)+1;
	tempn=n;
	clrscr();
	for(i=0;i<lenn;i++){
		reminders[i]=tempn%10;
		tempn = tempn/10;
	}
	for(i=0;i<lenn;i++){
		amstrong1+=pow(reminders[i],lenn);
	}
	if(amstrong1==n){
		printf("%d IS AN AMSTRONG NUMBER",n);
	}
	else{
		printf("THE GIVEN NUMBER IS NOT AN AMSTRONG !");
	}
getch();
}