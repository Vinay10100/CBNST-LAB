#include <stdio.h>
int main()
{
int i, j, n;
float sumx = 0, sumy = 0, sumxy = 0, sumx2 = 0, a, b;
printf("Enter the number of data points: ");
scanf("%d", &n);
float x[n],y[n];
printf("Enter the values of x: ");
for (i = 0; i < n; i++)
{
    scanf("%f", &x[i]);
}
printf("Enter the values of y: ");
for (i = 0; i < n; i++)
{
    scanf("%f",&y[i]);
}
for (i = 0; i < n; i++)
{
    sumx = sumx + x[i];
    sumy = sumy + y[i];
    sumxy = sumxy + x[i] * y[i];
    sumx2 = sumx2 + x[i] * x[i];
}
a = (n * sumxy - sumx * sumy) / (n * sumx2 - sumx * sumx);
b = (sumy - a * sumx) / n;
printf("The line is: y = %f + %fx", b, a);

return 0;
}
