#include<stdio.h>
int main()
{
    long long int T,W,i,j,k,l,N,M,temp;
    scanf("%lld",&T);
    for(i=1; i<=T; i++){
        scanf("%lld",&W);
        temp=W;
        if(W%2==1){
            printf("Case %lld: Impossible\n",i);
        }
        else{
            while(temp%2!=1){
                temp=temp/2;
            }
            for(j=1; j<=W/2; j++){
                if(j*temp == W){
                    N=temp,M=j;
                    break;
                }
            }
            printf("Case %lld: %lld %lld\n",i,N,M);
        }
    }
    return 0;
}
