#include<bits/stdc++.h>

using namespace std;
#define all(x) x.begin(),x.end()
typedef long long ll; 
int M=1000000007;

// bool find(){

// }
 ll a[100000][501];

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  ll n;
  cin>>n;
  vector<ll> a;
  for(ll i=0;i<n;i++){
    ll x;
    cin>>x;
    ll indx=lower_bound(a.begin(),a.end(),x)-a.begin();
    if(indx==a.size()){
        a.push_back(x);
    }
    else{
        a[indx]=x;
    }
  }
  cout<<a.size()<<endl;
}