#include<stdio.h>
float findValueAt(float x)
{
    return x*x*x;
}
int main()
{
    int n;
    float i,a,b,sum=0,h;
    printf("\n Enter Value of a and b\n");
    scanf("%f%f",&a,&b);
    printf("\n Enter no. of Intervals\n");
    scanf("%d",&n);
    h=(b-a)/n;
    sum = findValueAt(a) +findValueAt(b);
    for(i=a+h;i<b;i=i+h)
    sum = sum + 2*findValueAt(i);
    sum = (h * sum)/2;
    printf("\n Value of The integral  = %f",sum);    
    
}
