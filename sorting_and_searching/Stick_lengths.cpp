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
 }
 sort(all(a));
 vector<ll> b(n,0);
 b[0]=a[0];
 for(int i=1;i<n;i++)
  b[i]=b[i-1]+a[i];
 ll ans=b[n-1];
 for(int i=0;i<n;i++){
  ll prev=0;
  ll after=0;
  int j=i;
  if(i>0){
    prev=b[i-1];
  }
  while(i<n-1 and a[i]==a[i+1])
    i++;
  after=b[n-1]-b[i];
  ll sum=(after-prev)-a[i]*(n-1-i-j);
  ans=min<ll>(ans,sum);
 } 
 // optimal height is always the median element in the sorted array, by this als owe can find out the minimum length
 cout<<ans<<endl;
}
int main(){
   solve();  
}
