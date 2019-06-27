#include<stdio.h>
int main(){
    int x;
    while(scanf("%d",&x)==1){
        int t = x/2;
        printf("%llu\n",(unsigned long long)(t+1+1)*(t+1)/2);
    }
    return  0;
}
