#include<stdio.h>
int main()
{
    long long int n,m,i,j,k,l,t,d,sum;
    scanf("%lld",&t);
    for(i=1; i<=t; i++){
        scanf("%lld%lld",&n,&m);
        d=n/(2*m);
        sum = d*(m*m);
        printf("Case %lld: %lld\n",i,sum);
    }
}
 
