#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) x.begin(),x.end()
int M=1000000007;
vector<ll> a(1000001,0);
bool compare(pair<int,int> a,pair<int,int> b){
  if(a.first==b.first){
    return a.second<b.second;
  }
  return a.first<b.first;
}
void solve(){
 int n;
 cin>>n;
 vector<pair<int,int>> arr;
 for(int i=0;i<n;i++){
  int x;
  cin>>x;
  arr.push_back(make_pair(x,1));
  cin>>x;
  arr.push_back(make_pair(x,-1));
 }
 
 sort(all(arr));

 int ans=0;int c=0;
 for(int i=0;i<2*n;i++){
  c+=arr[i].second;
  ans=max(ans,c);
 }
 cout<<ans<<endl;
}

int main(){
  // int t;
  // cin>>t;
  // while(t--)
   solve();  

}