#include<bits/stdc++.h>
using namespace std;
#define all(x) x.begin(),x.end()
typedef long long ll; 
int M=1000000007;
vector<ll> a(1000001,0);
bool compare(pair<int,int> a,pair<int,int> b){
  if(a.second==b.second)
    return a.first<b.first;
  return a.second<b.second;
}
void solve(){
 int n;
 cin>>n;
 vector<pair<int,int>> a(n);
 for(int i=0;i<n;i++)
  cin>>a[i].first>>a[i].second;
 sort(all(a),compare);
 int ans=1;
 int c=a[0].second;
 for(int i=1;i<n;i++){
  if(a[i].first>=c){
    ans++;
    c=a[i].second;
  }
 }
 cout<<ans<<endl;
}

int main(){
   solve();  
}