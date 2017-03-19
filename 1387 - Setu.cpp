#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
 
int main()
{
    int t,i,j,n,l,sum,amount;
    scanf("%d",&t);
    for(i=1; i<=t; i++){
        scanf("%d",&n);
        string s;
        sum = 0,amount = 0;
        printf("Case %d:\n",i);
        for(j=0; j<n; j++){
            cin>>s;
            if(s.at(0)=='d'){
                scanf("%d",&amount);
                sum += amount;
            }
            if(s.at(0)=='r'){
                printf("%d\n",sum);
            }
        }
    }
    return 0;
}
