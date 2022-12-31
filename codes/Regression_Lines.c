#include <stdio.h>
int main()
{
int i, j, n;
float sumx = 0, sumy = 0, sumxy = 0, sumx2 = 0, a, b;
printf("\n Enter the number of points: ");
scanf("%d", &n);
float x[n],y[n];
printf("\n Enter the values of x and y: ");
for (i = 0; i < n; i++){
    scanf("%f%f", &x[i], &y[i]);
}
for (i = 0; i < n; i++)
{
    sumx = sumx + x[i];
    sumy = sumy + y[i];
    sumxy = sumxy + x[i] * y[i];
    sumx2 = sumx2 + x[i] * x[i];
}
b = (n * sumxy - sumx * sumy) / (n * sumx2 - sumx * sumx);
a = (sumy - b * sumx) / n;
printf("\n The line is: y = %f + %fx", b, a);

return 0;
}

