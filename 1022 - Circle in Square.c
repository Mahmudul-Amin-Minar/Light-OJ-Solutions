#include<stdio.h>
#include<math.h>
int main()
{
    int T,i;
    double r,a,square_area,circulur_area;
    scanf("%d",&T);
    for(i=1; i<=T; i++){
        scanf("%lf",&r);
        if(r>0 && r<=1000){
            a=r*r;
 
            square_area=4*a;
 
            circulur_area= acos(-1)*a;
 
            printf("Case %d: %.2lf\n",i,square_area-circulur_area);
        }
        else{
            break;
        }
    }
    return 0;
}
 
