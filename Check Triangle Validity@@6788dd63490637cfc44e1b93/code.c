#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a>b&&a>c){
        if(a*a==b*b+c*c){
            printf("Valid");
        }
        else{
            printf("Invalid");
        }
    }
    else if(b>a&&b>c){
        if(b*b==a*a+c*c){
            printf("Valid");
        }
        else{
            printf("Invalid");
        }
    }
    else if(c>a&&c>b){
        if(c*c==a*a+b*b){
            printf("Valid");
        }
        else{
            printf("Invalid");
        }
    }
    return 0;
}