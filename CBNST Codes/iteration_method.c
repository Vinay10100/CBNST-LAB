#include<stdio.h>
#include<math.h>
#define f(x) cos(x)-3*x+1
#define g(x) (cos(x)+1)/3
#define diff(x) (-sin(x)/3)
#define e 0.001
int main(){
    float x0,x1,err;
    do{
        printf("enter initial value\n");
        scanf("%f",&x0);
        if(fabs(diff(x0))>=1)
        printf("wring input..try again");
    }while(fabs(diff(x0))>=1);
    int i=1;
    do{
        x1=g(x0);
        printf("value of x%d: %f\n",i++,x1);
        x0=x1;
    }
	while (fabs(g(x0)-x1)>e);
        printf("value ofx%d: %f\n",i++,g(x0));
        printf("root is %f", g(x0));
        return 0;
}
