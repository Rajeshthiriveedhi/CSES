#include<bits/stdc++.h>

using namespace std;

typedef long long ll; 
int M=1000000007;
 ll dp[5001][5001]={0};
void solve(){
    string s,t;
    cin>>s>>t;
    int n=s.length(),m=t.length();
    for(int i=0;i<=m;i++)
        dp[0][i]=i;
    for(int i=0;i<=n;i++)
        dp[i][0]=i;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(s[i-1]==t[j-1] ){
                dp[i][j]=dp[i-1][j-1];
            }
            else
                dp[i][j]=1+min<ll>(dp[i-1][j-1],min(dp[i][j-1],dp[i-1][j]));
        }
    }
   
   cout<<dp[n][m]<<endl;
}  

int main(){
  // int t;
  // cin>>t;
  // while(t--)
   solve();

}