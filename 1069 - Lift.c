#include<stdio.h>
int main()
{
    int T,i,j,a,b,c,d;
    scanf("%d",&T);
 
    for(i=1; i<=T; i++){
        scanf("%d%d",&a,&b);
        if(a<=0){
            return 0;
        }
        if(a>b){
            d=a-b;
            c=d+a;
            printf("Case %d: %d\n",i,c*4+3*3+5*2);
        }
        else{
            d=b-a;
            c=d+a;
            printf("Case %d: %d\n",i,c*4+3*3+5*2);
        }
    }
    return 0;
}
