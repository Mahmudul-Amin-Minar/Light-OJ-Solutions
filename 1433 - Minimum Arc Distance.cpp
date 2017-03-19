#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
 
int main()
{
    int tst,i,j,o1,o2,a1,a2,b1,b2;
    double angle,r,dstnc,th;
    scanf("%d",&tst);
 
    for(i=1; i<=tst; i++){
        scanf("%d%d%d%d%d%d",&o1,&o2,&a1,&a2,&b1,&b2);
 
        r = sqrt((o1-a1)*(o1-a1) + (o2-a2)*(o2-a2));
        dstnc = sqrt((b1-a1)*(b1-a1) + (b2-a2)*(b2-a2));
 
        th = 1-(dstnc*dstnc)/(2*r*r);
        angle = acos(th);
        printf("Case %d: %lf\n",i,angle*r);
    }
    return 0;
}
