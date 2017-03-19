#include<bits/stdc++.h>
using namespace std;
 
int primes[7809], x=1;
 
void seivePrime()
{
    char prime_b[46350];
    memset(prime_b, 0, sizeof(prime_b));
    prime_b[1]=1;
    int till = 46349;
    for(int i=4; i<=till; i+=2)
        prime_b[i] = 1;
    int limit = sqrt(till)+1;
    for(int i=3; i<=limit; i+=2)
    {
        if(!prime_b[i])
        {
            for(int j=i*i; j<=till; j+=(i*2))
                prime_b[j] = 1;
        }
    }
    primes[0] = 2;
    for(int i=3; i<=till; i+=2)
        if(!prime_b[i])
            primes[x++] = i;
}
long long segment_prime(long long a, long long b)
{
    if(a==1){
        a++;
    }
    char dif[b-a+1];
    memset(dif, 0, sizeof(dif));
    long long int limit = sqrt(b) + 1,cont = 0;
    for(long long int i=0; i<x && primes[i]<=limit; i++){
        long long int start = primes[i] * primes[i];
        if(start<a){
            start = ((a +primes[i]-1)/primes[i])*primes[i];
        }
        for(; start<=b; start+=primes[i]){
            dif[start-a] = 1;
        }
    }
    if(a<=2 && b>=2){
        cont++;
    }
    long long int j = a+1;
    if(a%2){
        j = a;
    }
    for(; j<=b; j+=2){
        if(!dif[j-a]){
            cont ++;
        }
    }
    return cont;
}
 
int main()
{
    seivePrime();
    long long int t,a,b,cont;
    cin >> t;
    for(long long int i=1; i<=t; i++){
        scanf("%lld%lld",&a,&b);
        cont = segment_prime(a,b);
        printf("Case %lld: %lld\n",i,cont);
    }
    return 0;
}
 
