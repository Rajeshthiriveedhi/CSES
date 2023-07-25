#include<bits/stdc++.h>

using namespace std;
#define all(x) x.begin(),x.end()
typedef long long ll; 
int M=1000000007;

void solve(){
   int n;
  cin>>n;
  vector<int> mp(n+1,0);
  int ans=0;
  for(int i=0;i<n;i++){
    int x;
    cin>>x;
   for(int j=x;j<=n;j+=x){
     mp[j]++;
     ans=max(ans,mp[j]); 
     // cout<<mp[x]<<" "<<x<<endl;
   }
  }
  cout<<ans<<endl;
}  
int main(){
  int t;
  cin>>t;
  while(t--)
   solve();   

}