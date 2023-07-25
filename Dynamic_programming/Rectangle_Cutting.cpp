#include<bits/stdc++.h>

using namespace std;

typedef long long ll; 
int M=1000000007;
 ll dp[5001][5001]={0};
void solve(){
    int n,m;
    cin>>n>>m;
    int a=min(n,m);
    int b=max(n,m);
    for(int i=1;i<=a;i++){
        for(int j=i;j<=b;j++){
            if(i==j) dp[i][j]=0;
            else{
                int ans=2000;
                for(int l=1;l<=i/2;l++)
                    ans=min<ll>(ans,1+dp[l][j]+dp[i-l][j]);
                for(int l=1;l<=j/2;l++)
                    ans=min<ll>(ans,1+dp[min(i,l)][max(i,l)]+dp[min(i,j-l)][max(i,j-l)]);
                dp[i][j]=ans;
            }
        }
    }

    cout<<dp[a][b]<<endl;
}  

int main(){
  // int t;
  // cin>>t;
  // while(t--)
   solve();

}