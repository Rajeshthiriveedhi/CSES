#include<bits/stdc++.h>

using namespace std;

typedef long long ll; 
int M=1000000007;
 ll dp[5001][5001]={0};
void solve(){
   int n;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++) cin>>a[i];
   set<int> ans;
   for(int i=0;i<n;i++){
      set<int> in;
      for(auto x:ans){
        in.insert(x+a[i]);
      }
      for(auto x:in) ans.insert(x);
      ans.insert(a[i]);
   }
   cout<<ans.size()<<endl;
   for(auto x:ans) cout<<x<<" "; 
}  

int main(){
  // int t;
  // cin>>t;
  // while(t--)
   solve();

}