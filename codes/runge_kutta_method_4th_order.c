#include <stdio.h>
#include <math.h>
float f (float x, float y) { 
 return x-y; 
}
int main() {
	float x, y, h, eval, k1, k2, k3, k4;
	printf("\n Enter values of x0: ");
	scanf("%f", &x);
	printf("\n Enter values of y0: ");
	scanf("%f", &y);
	printf("\n Enter values of h: ");
	scanf("%f", &h);
	printf("\n Enter values of point of evaluation: ");
	scanf("%f", &eval);
	while (x < eval) {
		k1 = h*f(x, y);
		k2 = h*f(x + (h/2.0), y + (k1/2.0));
		k3 = h*f(x + (h/2.0), y + (k2/2.0));
		k4 = h*f(x + h, y + k3);
		y += (k1 + 2*k2 + 2*k3 + k4) / 6;
		x += h;
	}
	printf("\n Output : %f\n", y);
	return 0;
}