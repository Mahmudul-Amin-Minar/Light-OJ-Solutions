#include<iostream>
#include<cstdio>
#include<cmath>
double sum[1000009];
using namespace std;
int main()
{
    int m,n,t,i,j=1;
    sum[0]=0;
    for(i=1; i<=1000009; i++){
        sum[i] = log(i) + sum[i-1];
    }
    cin >> t;
    while(t--){
        scanf("%d%d",&m,&n);
        double result = floor(sum[m]/log(n))+1;
        printf("Case %d: %0.0lf\n",j,result);
        j++;
    }
    return 0;
}
