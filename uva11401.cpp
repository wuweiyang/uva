#include<iostream>
using namespace std;
const int maxn = 1000000;
long long f[maxn];

int main(){
f[3] = 0;
for(long long  x=4;x<=maxn;x++)
    f[x]=f[x-1]+ ((x-1)*(x-2)/2-(x-1)/2)/2;
int n;
while(cin>>n&&n>=3){
    cout<<f[n]<<endl;
}
return 0;
}
