#include <stdio.h>
#include<math.h>
int main()
{
int n;
printf("\n Enter total no. of terms: ");
scanf("%d",&n);
float arr[n][n+1];
printf("\n Enter the values of x: ");
for(int i=0;i<n;i++){
    scanf("%f",&arr[i][0]);
}
printf("\n Enter the values of y: ");
for(int i=0;i<n;i++){
    scanf("%f",&arr[i][1]);
}
int x;
printf("\n Enter the value of x for which you want y : ");
scanf("%df",&x);
for(int j=2;j<=n;j++){
    for(int i=0;i<=n-j;i++){
        arr[i][j]=arr[i+1][j-1]-arr[i][j-1];
    }
}
for(int i=0;i<n;i++){
    for(int j=0;j<=n-i;j++){
        printf("%f\t",arr[i][j]);
    }
    printf("\n");
}
float u=(x-arr[n-1][0])/(arr[1][0]-arr[0][0]);
float u1=u;
float y=arr[n-1][1]; 
int fact=1,j=2;
for(int i=n-2;i>=0;i--){
    y+=(u1*arr[i][j])/fact;
    fact*=j;
    u1*=(u+(j-1)); 
    j++;
}
printf("\n The Value of 'y' - %f",y);
}
