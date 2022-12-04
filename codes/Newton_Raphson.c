#include<stdio.h>
#include<math.h>

float f(float x) {
  return (x * x * x - 3 * x - 5);
}
float df(float x) {
  return (3 * x * x - 3);
}
float g(float x) {
  return x - (f(x) / df(x));
}
int main() {
  float x0, x1, allowed_error;
  int it = 0;
  printf("Equation is: x=x*x*x-3*x-5\n");
  printf("Enter the values of x0 & x1: \n");
  scanf("%f %f", & x0, & x1);
  printf("Enter allowed error:\n");
  scanf("%f", & allowed_error);
  if (f(x0) * f(x1) < 0) {
    while (1) {
      x1 = g(x0);
      it++;
      printf("%d iterations,the value of x%d is %f\n", it, it, x1);
      if (fabs(x1 - x0) <= allowed_error) {
        printf("Root is x1:%f\n", x1);
        printf("Total number of iterations are: %d\n", it);
        break;
      } else {
        x0 = x1;
      }
    }
  } else {
    printf("Wrong Interval Try Again\n");
  }
  return 0;
}