#include <stdio.h>
#include <math.h>



int main(){
	
	int delt;
	float a,b,c,x1,x2;
	printf("EE 103-Introduction to Programming\n\n");
	printf("Lab 2 - Root Finder\n");
	printf("\na: ");
	scanf("%f",&a);
	printf("\nb: ");
	scanf("%f",&b);
	printf("\nc: ");
	scanf("%f",&c);
	
    delt=(b*b)-(4*a*c);
    x1=(-b+sqrt(delt))/(2*a);
    x2=(-b-sqrt(delt))/(2*a);
    
	
	if(delt==0)
	{
	printf("x1:%f\n",x1);
    printf("x2:%f\n",x2);
    printf("Discriminant is %d\n",delt);
    printf("There are two real, identical roots");
	}
	if(delt>0)
	{
	printf("x1:%f\n",x1);
    printf("x2:%f\n",x2);
    printf("Discriminant is %d\n",delt);
    printf("There are two real roots");
	}
	if(delt<0)
	{
	printf("X1 Complex roots not found\n");
    printf("X2 Complex roots not found\n");
    printf("Discriminant is %d\n",delt);
    printf("There are no real roots");
	}
}
