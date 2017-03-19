#include<stdio.h>
int main()
{
    int T,N,i,j,k,l;
    scanf("%d",&T);
    for(i=1; i<=T; i++){
        scanf("%d",&N);
        l=0;
        for(j=0; j<N; j++){
            scanf("%d",&k);
            if(k>=1){
                l=l+k;
            }
        }
        printf("Case %d: %d\n",i,l);
    }
    return 0;
}
