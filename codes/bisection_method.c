#include <stdio.h>
#include <math.h>
float check(float x){
float ans = x*log10(x)-1.2;
return ans;
}
int main(){
float a, b;
int itr = 1;
printf("Enter the value of a and b:");
scanf("%f %f", &a, &b);
printf("Equation is:x^3-5x+1\n");
if (check(a) * check(b) < 0){
printf("Roots lies between %0.f & %0.f\n", a, b);
float allowed_error;
printf("Enter the allowed error:");
scanf("%f", &allowed_error);
float x = (a + b) / 2;
while (fabs(check(x)) > allowed_error) {
x = (a + b) / 2;
printf("%d iteration for %f and %f,the value of x is:%f and the value of f(%f)=%f\n", itr, a, b, x, x, check(x));
if (check(a) * check(x) < 0)
b = x;
else if (check(x) * check(b) < 0)
a = x;
itr++;}
printf("Root of equation is:%f\n", x); }
else
printf("Range is incorrect...\n");
return 0;
}
