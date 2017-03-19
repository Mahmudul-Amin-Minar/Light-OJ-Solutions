#include<stdio.h>
int main()
{
    int n,i,sum,b,T;
    scanf("%d",&T);
    for(i=1;i<=T;i++){
        scanf("%d",&n);
        sum=0;
        while(n>0){
            b=n%2;
            n=n/2;
            sum=sum+b;
        }
 
        if(sum%2==0)
            printf("Case %d: even\n",i);
        else
            printf("Case %d: odd\n",i);
    }
    return 0;
}
 
