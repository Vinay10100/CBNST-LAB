#include<stdio.h>
int main(){
float a[20][20];
int n;
printf("Enter the number of rows: ");
scanf("%d",&n);
float b[10];
printf("inputing argumented matrix\n");
for(int i=1;i<=n;i++){
for(int j=1;j<=(n+1);j++){
printf("a[%d][%d]: ",i,j);
scanf("%f",&a[i][j]);    
}
}
for(int j=1;j<=n;j++){
for(int i=1;i<=n;i++) {
if(i!=j){
float c=a[i][j]/a[j][j];
for(int k=1;k<=n+1;k++){
a[i][k]=a[i][k]-c*a[j][k];}}}}
printf("\n");
printf("diagonal matrix\n");
for(int i=1;i<=n;i++) {
for(int j=1;j<=n+1;j++){
printf("%f ",a[i][j]);}
printf("\n");
}
printf("\n");
printf("Solution for given equations\n");
for(int i=1;i<=n;i++){
printf("x%d=>%f\n",i,a[i][n+1]/a[i][i]);
}
}
