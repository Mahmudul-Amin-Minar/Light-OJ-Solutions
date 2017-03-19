#include<iostream>
#include<cstdio>
#include<cstring>
#include<ctype.h>
using namespace std;
 
int main()
{
    int i,j,k,l1,l2,t,m;
    char name1[1001],name2[1001];
    scanf("%d",&t);
    for(i=1; i<=t; i++){
        if(i==1){
            getchar();
        }
        gets(name1),gets(name2);
        int name_1[26],name_2[26];
        for(j=0; j<26; j++){
            name_1[j]=0,name_2[j]=0;
        }
        for(j=0; name1[j]; j++){
            if((name1[j]>=65 && name1[j]<=90)){
                name_1[name1[j]-65]++;
            }
            else if((name1[j]>=97 && name1[j]<=122)){
                name_1[name1[j]-97]++;
            }
        }
        for(j=0; name2[j]; j++){
            if((name2[j]>=65 && name2[j]<=90)){
                name_2[name2[j]-65]++;
            }
            else if((name2[j]>=97 && name2[j]<=122)){
                name_2[name2[j]-97]++;
            }
        }
        for(m=0,j=0; j<26; j++){
            if(name_1[j]!=name_2[j]){
                printf("Case %d: No\n",i);
                m=1;
                break;
            }
        }
        if(m==0){
            printf("Case %d: Yes\n",i);
        }
    }
    return 0;
}
 
