#include<stdio.h>
int main()
{
    long long int a,b,c,T,i;
    scanf("%lld",&T);
    for(i=1; i<=T; i++){
        scanf("%lld%lld%lld",&a,&b,&c);
        if(a>=1 && b>=1 && c>=1 && a<=40000 && b<=40000 && c<=40000){
            if(a>=b){
                if(a>=c){
                    if(a*a==c*c+b*b){
                        printf("Case %d: yes\n",i);
                    }
                    else{
                        printf("Case %d: no\n",i);
                    }
                }
                if(c>=a){
                    if(c*c==a*a+b*b){
                        printf("Case %d: yes\n",i);
                    }
                    else{
                        printf("Case %d: no\n",i);
                    }
                }
            }
            else if(b>=c){
                    if(b*b==c*c+a*a){
                        printf("Case %d: yes\n",i);
                    }
                     else{
                    printf("Case %d: no\n",i);
                }
            }
            else if(c>=a){
                if(c*c==a*a+b*b){
                    printf("Case %d: yes\n",i);
                }
                else{
                    printf("Case %d: no\n",i);
                }
            }
        }
        else{
            return 0;
        }
    }
    return 0;
}
 
