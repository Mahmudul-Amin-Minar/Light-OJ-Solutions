#include<iostream>
#include<cstdio>
 
 
int main()
{
    long long int n,m,i,t,tst;
    scanf("%lld",&tst);
    for(i=1; i<=tst; i++){
        scanf("%lld%lld",&n,&m);
        t = (m*2)/3 - ((n-1)*2)/3;
        printf("Case %lld: %lld\n",i,t);
    }
    return 0;
}
