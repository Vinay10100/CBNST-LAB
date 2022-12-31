#include <stdio.h>
int main(){
int n;
float x, sum = 0, term;
printf("Enter the number of terms : ");
scanf("%d", &n);
float X[n], Y[n];
printf("\n Enter the values of x= ");
for(int i = 0; i < n; i++){
scanf("%f", &X[i]);
}
printf("Enter the values of y = ");
for(int i = 0; i < n; i++){
scanf("%f", &Y[i]);
}
printf("\nEnter the value of x for which you want y : ");
scanf("%f", &x);
for(int i = 0; i < n; i++){
term = 1;
for(int j = 0; j < n; j++){
if(i != j){
term = term * ((x - X[j])/(X[i] - X[j]));
}
}
sum += term * Y[i];
}
printf("\n Interpolated value at %.3f is %.3f.", x, sum);
return 0;
}


