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
 int n,x;
 cin>>n>>x;
 vector<pair<int,int>> a;
 for(int i=0;i<n;i++){
  int k;
  cin>>k;
  a.push_back({k,i+1});
}
 sort(all(a));
 int start=0,end=n-1;
 while(start<end){
  if(a[start].first+a[end].first==x){
    cout<<a[start].second<<" "<<a[end].second<<endl;
    return ;
  }
  else if(a[start].first+a[end].first>x) end--;
  else start++;
 }
 cout<<"IMPOSSIBLE"<<endl;
}
int main(){
   solve();  
}