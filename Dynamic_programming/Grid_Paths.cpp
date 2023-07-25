#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int maxN = 100;
const int maxX = 1e6;
const ll MOD = 1e9+7;

int n;
ll dp[1000][1000]={0};
char c[1000][1000];
int main(){
    scanf("%d ", &n);
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>c[i][j];
        }
    }
    if(c[0][0]=='.')
        dp[0][0]=1;
    for(int i=1;i<n;i++)
       {
        if(c[i][0]=='.') dp[i][0]=dp[i-1][0];
        if(c[0][i]=='.') dp[0][i]=dp[0][i-1];
       }
   
    for(int i=1;i<n;i++){
        for(int j=1;j<n;j++){
            if(c[i][j]=='.')
                dp[i][j]=(dp[i-1][j]+dp[i][j-1])%MOD;
        }
    }
    printf("%lld\n", dp[n-1][n-1]);
}