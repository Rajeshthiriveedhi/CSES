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
 vector<ll> a(n);
 for(int i=0;i<n;i++){
   cin>>a[i];
   if(i>0)
     a[i]+=a[i-1];
 }
 ll m=a[0];
 ll ans=a[0];
 for(int i=1;i<n;i++){
  ans=max<ll>(ans,max(a[i]-m,a[i]));
  m=min(m,a[i]);   
 }
 cout<<ans<<endl;
}
int main(){
   solve();  
}