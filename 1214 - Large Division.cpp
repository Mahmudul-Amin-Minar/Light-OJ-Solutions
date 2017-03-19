#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    long long int t,i,j,divisor,div,remain;
    cin >> t;
    for(i=1; i<=t; i++){
        string number;
        cin >> number >> divisor;
        j=0,div=0;
        if(number.at(0)=='-'){
            j=1;
        }
        while(j<number.size()){
            int d = number.at(j)-'0';
            div = div + d;
            remain = div%divisor;
            div = remain*10;
            j++;
        }
        if(remain == 0){
            cout << "Case "<< i<<": "<< "divisible\n";
        }
        else{
            cout << "Case "<< i<<": "<< "not divisible\n";
        }
    }
    return 0;
}
