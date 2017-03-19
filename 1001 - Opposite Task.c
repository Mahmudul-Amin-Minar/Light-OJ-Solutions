#include<stdio.h>
int main()
{
    int a,b,sum,T,i,n;
    scanf("%d",&T);
    for(i=1; i<=T; i++){
        scanf("%d",&n);
        b=0;
        a=n-b;
        if(a>10){
            do{
               a--;
               b++;
               if(b>10){
                b=10;
               }
            }
            while(a!=10);
        }
        printf("%d %d\n",a,b);
    }
    return 0;
}
 
