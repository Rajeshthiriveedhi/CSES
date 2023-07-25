#include<bits/stdc++.h>
using namespace std;
#define all(x) x.begin(),x.end()
typedef long long ll; 
int M=1000000007;
void solve(){
  int n;
  cin>>n;
  vector<ll> a(n);
  for(int i=0;i<n;i++){
  	cin>>a[i];
  }
  sort(all(a));
  ll ans=1;
  for(int i=0;i<n;i++){
  	if(a[i]>ans){
  		cout<<ans<<endl;
  		return;
  	}
  	else
  	{
  		ans+=a[i];
  	}
  }
  cout<<ans<<endl;
}
int main(){

   solve();  

}