#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
 
using namespace std;
 
int main()
{
    int t,n,m,i,j,x,y,cas=1;
    scanf("%d",&t);
    while(t--){
        scanf("%d%d",&n,&m);
        int ara[n],d;
        char ch;
        for(i=0; i<n; i++){
            scanf("%d",&ara[i]);
        }
        for(i=0; i<m; i++){
            getchar();
            scanf("%c",&ch);
            if(ch == 'S'){
                scanf("%d",&d);
                for(j=0; j<n; j++){
                    ara[j] +=d;
                }
            }
            else if(ch == 'M'){
                scanf("%d",&d);
                for(j=0; j<n; j++){
                    ara[j] *=d;
                }
            }
            else if(ch == 'D'){
                scanf("%d",&d);
                for(j=0; j<n; j++){
                    ara[j] /=d;
                }
            }
            else if(ch == 'R'){
                reverse(ara,ara+n);
            }
            else if(ch == 'P'){
                scanf("%d%d",&x,&y);
                int tmp = ara[x];
                ara[x] = ara[y];
                ara[y] = tmp;
            }
        }
        for(i=0; i<n; i++){
            if(i==0){
                printf("Case %d:\n",cas);
            }
            printf("%d",ara[i]);
            if(i<n-1){
                printf(" ");
            }
        }
        printf("\n");
        cas++;
    }
}
 
