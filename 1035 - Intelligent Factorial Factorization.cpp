#include<bits/stdc++.h>
 
using namespace std;
vector <int> primeList[101];
long long int i,j, sqrtI;
 
void primeFactor(long long int n)
{
 
    memset(primeList,0,sizeof(primeList));
    for(int j=2; j<=n; j++){
        long long int tmp = j;
        while(tmp%2==0){
            tmp/=2;
            primeList[j].push_back(2);
        }
        for(int i=3; i<=n; i+=2)
            while(tmp%i==0){
                tmp/=i;
                primeList[j].push_back(i);
            }
        if(tmp > 1){
            primeList[j].push_back(tmp);
        }
    }
}
 
int main()
{
    long long int t,k,N,x,y,first;
    scanf("%lld",&t);
    k=1;
    while(t--){
        cin >> N;
        long long int ans[110];
        memset(ans,0,sizeof(ans));
        primeFactor(N);
        for(x=2; x<=N; x++){
            for(y=0; y<primeList[x].size(); y++){
                ans[primeList[x][y]]++;
            }
        }
        for(first=1, i=2; i<=N; i++){
            if(ans[i]>0){
                if(first == 1){
                    printf("Case %lld: %lld = %lld (%lld)",k,N,i,ans[i]);
                    first = 0;
                }
                else{
                    printf(" * %lld (%lld)",i,ans[i]);
                }
            }
        }
        cout << endl;
        k++;
    }
    return 0;
}
 
