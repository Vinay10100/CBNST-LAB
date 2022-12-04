#include <stdio.h>

#include <math.h>

float f(float x) {
  return x * log10(x) - 1.2;
}
int main() {
  float a, b, allowed_error, x;
  int itr = 1;
  printf("For equation: x*x*x - 2*x -5\n");
  printf("Enter the value of a and b:");
  scanf("%f %f", & a, & b);
  if (f(a) * f(b) < 0) {
    printf("Roots lies between %0.f and %0.f\n", a, b);
    printf("Enter allowed error:");
    scanf("%f", & allowed_error);
    x = a - ((b - a) / (f(b) - f(a))) * f(a);
    while (fabs(f(x)) > allowed_error) {
      x = a - ((b - a) / (f(b) - f(a))) * f(a);
      printf("%d iteration for %f and %f and the value of x is:%f\n", itr, a, b, x);
      if (fabs(f(x)) < allowed_error)
        printf("Roots found at :%f\n", x);
      else if (f(a) * f(x) < 0)
        b = x;
      else if (f(b) * f(x) < 0)
        a = x;
      itr++;
    }
  } else
    printf("Wrong interval!!..try again\n");
  return 0;
}