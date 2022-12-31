#include <stdio.h>
#define f(x,y) x+y
int main()
{
float n, x0, y0, xn, yn, h, slope;
printf("\n Enter the initial value of x and y : ");
scanf("%f%f", &x0, &y0);
printf("\n Enter the last value : ");
scanf("%f", &xn);
printf("\n Enter the number of steps : ");
scanf("%f", &n);
h = (xn - x0) / n;
for(int i = 0; i < n; i++){
slope = f(x0,y0);
yn = y0 + (h*slope);
y0 = yn;
x0 = x0 + h;
}
printf("\n Value of y at n = %0.4f is %0.4f", xn, yn);
return 0;
}



