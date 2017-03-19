#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int tst;
    scanf("%d", &tst);
    char cmnd[20], visit[100], stck[111][55];
    for(int i=1; i<=tst; i++)
    {
        printf("Case %d:\n", i);
        strcpy(stck[0], "http://www.lightoj.com/");
        int x = 0, y = 0;
        while(true)
        {
            scanf("%s", cmnd);
            if(cmnd[0] == 'Q') break;
            else if(cmnd[0] == 'V')
            {
                scanf("%s", visit);
                strcpy(stck[++x], visit);
                printf("%s\n", stck[x]);
                y = x;
            }
            else if(cmnd[0] == 'B')
            {
                if(x == 0) printf("Ignored\n");
                else printf("%s\n", stck[--x]);
            }
            else if(cmnd[0] == 'F')
            {
                if(y == x) printf("Ignored\n");
                else printf("%s\n", stck[++x]);
            }
        }
    }
    return 0;
}
