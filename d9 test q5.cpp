#include<stdio.h>
int main(){
	int a,b,*r,*s,sum=0;
	printf("enter the value of a and b");
	scanf("%d %d",&a,&b);
	r=&a;
	s=&b;
	sum=*r+*s;
	printf("the sum is %d",sum);
	return 0;
}
