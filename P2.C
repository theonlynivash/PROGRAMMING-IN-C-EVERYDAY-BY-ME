#include<stdio.h>
void main(){
int n1,n2,min,i,cd;
printf("ENTER THE FIRST NUMBER :");
scanf("%d",&n1);
printf("ENTER THE SECOND NUMBER:");
scanf("%d",&n2);
min = if(n1<n2)?n2:n1;
for(i>=1,i<=min,i++){
    if((n1%i == 0)&&(n2%i == 0))
	cd = i;
	}
    }
printf("THE GCD OF %d,AND,%d IS ,%d,:",n1,n2,cd);
}
