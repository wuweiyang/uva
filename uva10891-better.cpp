#include<iostream>
#include<cstring>
#include<algorithm>
#include<cstdio>
using namespace std;

const int maxn = 100+10;
int d[maxn][maxn],S[maxn],f[maxn][maxn],g[maxn][maxn],A[maxn],n;
int main()
{   //freopen("a.in","r",stdin);
    //freopen("a.out","w",stdout);
    while(scanf("%d",&n)&&n){
            S[0]=0;
        for(int i=1;i<=n;i++){
                scanf("%d",&A[i]);
                S[i]=S[i-1]+A[i];
            f[i][i]=g[i][i] = d[i][i] = A[i];
    }
    for(int L = 0;L<n;L++)
        for(int i=1;i+L<=n;i++)
    {
        int j = i+L;
        int m=0;
        m = min(m,f[i+1][j]);
        m = min(m,g[i][j-1]);
        d[i][j] = S[j]-S[i-1]-m;
        f[i][j] = min(d[i][j],f[i+1][j]);
        g[i][j] = min(d[i][j],g[i][j-1]);
    }
    printf("%d\n",2*d[1][n]-S[n]);
    }
    return 0;
}
