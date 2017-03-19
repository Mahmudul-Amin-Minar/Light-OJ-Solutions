#include<iostream>
#include<cstdio>
using namespace std;
 
int main()
{
    int t,i,j,n,m,l,cont,d,k;
    scanf("%d",&t);
    for(i=1; i<=t; i++){
        scanf("%d%d",&n,&m);
        cont = 0;
        d = m-2;
        if(d>=5){
            cont = d/5;
            if(d%5>=1 && d%5<=5){
                cont++;
            }
        }
        else if(d>=1 && d<5){
            cont++;
        }
        for(j=1; j<n; j++){
            scanf("%d",&l);
            d = l-m;
            if(d>=5){
                cont += d/5;
                if(d%5>=1 && d%5<=5){
                    cont++;
                }
            }
            else if(d>0 && d<5){
                cont++;
            }
            m = l;
        }
        printf("Case %d: %d\n",i,cont);
    }
    return 0;
}
 
