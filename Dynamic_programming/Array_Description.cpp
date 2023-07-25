#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int maxN = 100;
const int maxX = 1e6;
const ll MOD = 1e9+7;

int n;
ll dp[101][100001]={0};
int c[100001];
int pages[1001];
int main(){
    int k;
    scanf("%d %d", &n,&k);
    for(int i=0;i<n;i++)
        cin>>c[i];
    if(c[0]==0){
        for(int i=0;i<k;i++)
            dp[i][0]=1;
    }
    else
        dp[c[0]-1][0]=1;
    for(int i=1;i<n;i++){
       
            for(int j=0;j<k;j++)
            {  if(c[i]==0 || j==c[i]-1){
                dp[j][i]=dp[j][i-1];
                // cout<<<<" ";
                if(j>0)
                    dp[j][i]=(dp[j][i]+dp[j-1][i-1])%MOD;
                if(j<k-1)
                    dp[j][i]=(dp[j][i]+dp[j+1][i-1])%MOD;
              }
            }
    }
    ll ans=0;
     // cout<<dp[93][1];
      for(int i=0;i<k;i++){
        ans=(ans+dp[i][n-1])%MOD;
      }
    
    printf("%lld\n", ans);
}