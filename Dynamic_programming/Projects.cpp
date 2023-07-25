#include<bits/stdc++.h>

using namespace std;
#define all(x) x.begin(),x.end()
typedef long long ll; 
int M=1000000007;

// bool find(){

// }
 ll a[100000][501];
struct project{
    ll a,b,p;
    bool operator<(const project &y) const { return b < y.b; }
};
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n;
  cin>>n;
  vector<project> t(n);
  for(int i=0;i<n;i++){
    cin>>t[i].a>>t[i].b>>t[i].p;
  }
  sort(all(t));
  map<ll,ll> mp;
  mp[0]=0;
  ll ans=0;
  for(int i=0;i<n;i++){
    auto reward=mp.lower_bound(t[i].a);
    reward--;
    ans=max<ll>(ans,t[i].p+reward->second);
    mp[t[i].b]=ans;
  }
  cout<<ans<<endl;
}