#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
int main()
{
    int a[4],b,c,d,t,i,j,k,sum;
    char ip[40],e;
    scanf("%d",&t);
    for(d=1; d<=t; d++){
        for(i=0; i<4; i++){
            scanf("%d",&a[i]);
            scanf("%c",&e);
        }
        scanf("%s",ip);
        c=0,b=0;
        for(i=0; i<strlen(ip); i+=9){
            k=7,sum=0;
            for(j=i; j<i+8; j++){
                sum+=((ip[j]-'0')*pow(2,k));
                k--;
            }
            if(sum==a[b]){
                c++;
            }
            b++;
        }
        if(c==4){
            printf("Case %d: Yes\n",d);
        }
        else{
            printf("Case %d: No\n",d);
        }
    }
    return 0;
}
 
