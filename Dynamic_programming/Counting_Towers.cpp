#include<bits/stdc++.h>

using namespace std;

typedef long long ll; 
int M=1000000007;
 ll dp[8][1000001];
void solve(){
  

  for(int i=0;i<8;i++)
    dp[i][0]=1;
  for(int i=1;i<1000000;i++){
    
    for(int j=0;j<8;j++){
    if(j==1 || j==6 || j==7){
        dp[j][i]=(dp[2][i-1]+dp[6][i-1]+dp[7][i-1])%M;
    }
    else{
        dp[j][i]=(dp[0][i-1]+dp[1][i-1]+dp[3][i-1]+dp[4][i-1]+dp[5][i-1])%M;
    }
  }
 }
 


}  

int main(){
  int t;
  cin>>t;
  solve();
  while(t--)
  {
    int n;
    cin>>n;
    if(n==1)
        cout<<2<<endl;
    else{
   ll ans=0;
   // cout<<dp[0][600000]<<endl;
 for(int i=0;i<8;i++)
    ans=(ans+dp[i][n-2])%M;
cout<<ans<<endl;
  }
}

}