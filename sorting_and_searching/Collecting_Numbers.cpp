#include<bits/stdc++.h>
using namespace std;
#define all(x) x.begin(),x.end()
typedef long long ll; 
int M=1000000007;
void solve(){
  int n;
  cin>>n;
  vector<pair<int,int>> a(n);
  for(int i=0;i<n;i++){
  	cin>>a[i].first;
  	a[i].second=i;
  }
  sort(all(a));
  int ans=1;
  for(int i=1;i<n;i++){
  	if(a[i].second<a[i-1].second)
      ans++;
  }
  cout<<ans<<endl;
}
int main(){

   solve();  

}