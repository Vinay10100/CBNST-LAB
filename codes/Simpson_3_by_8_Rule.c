#include<stdio.h>
float findValueAt(float x)
{
    return 1/(1+x*x);
}
int main()
{
    int n;
    float i,a,b,sum=0,h;
    int position=1;
    printf("\n Enter Value of a : ");
    scanf("%f",&a);
    printf("\n Enter Value of b : ");
    scanf("%f",&b);
    printf("\n Enter no. of Intervals : ");
    scanf("%d",&n);
    h=(b-a)/n;
    sum = findValueAt(a) +findValueAt(b);
 	//position : position of term
    for(i=a+h;i<b;i=i+h)
    {
       if(position %3 ==0)
         sum = sum + 2*findValueAt(i);
       else 
         sum = sum + 3*findValueAt(i); 
       position++;   
    }
    sum = (3*h)/8 * sum;
    printf("\n Value of The Integral  = %f",sum);    
    
}
