#include <stdio.h>

int main() {
 float x,y,tempsum,solk,soll,solm,maximum;
s:
 printf ("enter num: ");
 scanf ("%f",&x); 
 scanf ("%f",&y);
 
 tempsum = x+y;
 
 if (tempsum > 0)
    solk = x-y;
 else {
    solk= x*x + y;
      }
    
 if(tempsum <=0)
    soll= x +1.0/3.0;
 else if(tempsum <=10 && tempsum >0)
    soll= (x+y)/(x*y+1);
 else {
    soll= y +1.0/3.0;
    }
 if (x==y)
    solm = 7*x + 5;
 else {
    solm = 3*y +6;
    }
    
 maximum  = (solk>soll) ? solk:soll;
 maximum = (maximum > solm) ? maximum:solm;
 
 printf (" k= %f \n l= %f \n m= %f \n n= %f \n",solk,soll,solm,maximum); 
 
}
 
