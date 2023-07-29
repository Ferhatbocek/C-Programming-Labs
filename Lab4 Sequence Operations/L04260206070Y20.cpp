#define MAX 100
#include<stdio.h>
#include<math.h>
float closet(float array[MAX], int n, float p);
int main() {
    float array[MAX];
    float r;
    int i,n0,n,p;
    float a,mean=0,var=0,toplam=0,toplam2=0;
    printf("n0: ");
    scanf("%d",&n0);
    printf("n: ");
    scanf("%d",&n);
    printf("r: ");
    scanf("%f",&r);
    printf("p: ");
    scanf("%d",&p);
 for(i=n0;i<=n;i++) {
     array[i] = pow(i,2.0)*pow(r,i);
     toplam += array[i];
 }
 mean = (toplam/(n-n0 +1.0));
 for(i=n0;i<=n;i++) {
     a= abs(array[i]-mean);
     toplam2 += pow(a,2.0);
     printf("\na[%d]= %f \t %f",i,array[i],toplam2);
 }
 
 var= (toplam2/(n-n0 +1.0));
 printf("\nsum= %f\nmean= %f\nVariance= %f\n",toplam,mean,var);
 printf("\ncloset= %f",closet(array,n,p));
 
}

float closet(float array[MAX], int n, float p) {
    int i;
    float temp,min,newmin;
    min = (array[n] - p); 
    for(i=1;i<=n;i++) {
        temp = (array[i] -p);
        if(temp<0.0)
         temp = temp* -1.0;
        if(temp < min) {
            min = temp;
            newmin = array[i];
        }
    }
    return newmin;
}
