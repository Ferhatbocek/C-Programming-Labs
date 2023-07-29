#include<stdio.h>
void bin(unsigned short message)
{
    unsigned short n =  message;
    if (n > 1) {
        bin(n >> 1);
    printf("%d", n & 1);
}
 
// Driver code
int main(void)
{
    int i;
    short int message;
    i=1;
    printf("To write message, press anything except 0\n");
    while(getchar() != '0'){
        printf("Enter 16 bit message-%d:  ",i);
        scanf("%hu",&message);
        bin(message);
        printf(" = %hu ",message);
        i++;
        printf("\nTo write message, press anything except 0\n");
    }
    return 0;
}
