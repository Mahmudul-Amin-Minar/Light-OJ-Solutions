#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int T,i,j,k,l;
    scanf("%d",&T);
    char n[100],peli[100];
    for(i=1; i<=T; i++){
        scanf("%s",n);
        l=strlen(n);
        for(k=0,j=l-1; j>=0; j--,k++){
            peli[k]=n[j];
        }
        peli[k]='\0';
        if(strcmp(peli,n)==0){
            printf("Case %d: Yes\n",i);
        }
        else{
            printf("Case %d: No\n",i);
        }
    }
    return 0;
}
