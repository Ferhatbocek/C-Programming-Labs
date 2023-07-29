#include <stdio.h>
#include <math.h>

int power(int x, int y);

int power(int base, int a) {
    if (a != 0)
        return (base * power(base, a - 1));
    else
        return 1;
}

int pow(int bbase, int eexponent)
{
	if(eexponent==1)
	return bbase;
	return bbase*pow(bbase,eexponent-1);
}
int sum (int bbase, int eexponent)
{
	if(eexponent==1)
	return pow(bbase,eexponent);
	return pow(bbase,eexponent)+sum(bbase,eexponent-1);
}

int main()
{

int number;
printf("Calculate Power (1)\n");
printf("Calculate Sum (2)\n");
printf("Please Enter Your Process Number: ");
scanf("%d",&number);

switch(number)
{
	
	case 1:
	printf("\nEE103: Introduction to Programming\n");
	printf("Laboratory(3)-Problem 1\n");
    int base, a, result;
    printf("Enter base: ");
    scanf("%d", &base);
    printf("Enter exponent: ");
    scanf("%d", &a);
    result = power(base, a);
    printf("The result of power(%d,%d)=%d^%d = %d",base,a,base, a, result);
    return 0;
	break;
	
	case 2: 
	int bbase=1, eexponent=1;
    printf("\nEE103: Introduction to Programming\n");
    printf("Laboratory(3)-Problem 2\n");
    printf("Enter the base: ");
    scanf("%d",&bbase);
    printf("Enter the exponent: ");
    scanf("%d",&eexponent);
    printf("The result of sum(%d,%d) is %d\n",bbase,eexponent,sum(bbase,eexponent));
    break;
    

}
}

