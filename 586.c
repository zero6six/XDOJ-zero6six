#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c;
    double d,e,f;
    scanf("%d%d%d",&a,&b,&c);
    d=b*b-4*a*c;
    if (a==0){
        if (b==0){
            printf("No real root");
        }
        else{
            printf("%.2f",-c/(double)b);
        }
    }
    else if (d<0){
        printf("No real root");
    }
    else if (d==0){
        e=-b/(2.0*a);
        printf("%.2f",e);
    }
    else if (d>0){
        e=(-b+sqrt(d))/(2.0*a);
        f=(-b-sqrt(d))/(2.0*a);
        printf("%.2f %.2f",e,f);
    }
    
    return 0;
}