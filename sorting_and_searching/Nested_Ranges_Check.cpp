#include<bits/stdc++.h>
using namespace std;
#define all(x) x.begin(),x.end()
typedef long long ll; 
int M=1000000007;
 
struct range{
    int l,r,index;
    bool operator <(const range &other) const
    {
        if(l==other.l)
            return r>other.r;
        return l<other.l;
    }
};
void solve(){
  int n;
  cin>>n;
  vector<range> ranges(n);
  for(int i=0;i<n;i++){
    cin>>ranges[i].l>>ranges[i].r;
    ranges[i].index=i;
  }
  int maximium=0,minimum=INT_MAX;
  sort(ranges.begin(),ranges.end());
  int ans2[n]={0},ans1[n]={0};
  maximium=ranges[0].r;
  for(int i=1;i<n;i++){
    if(maximium>=ranges[i].r)
        ans2[ranges[i].index]=1;
    else
        maximium=ranges[i].r;
  }
  minimum=ranges[n-1].r;
  for(int i=n-2;i>=0;i--){
    if(minimum<=ranges[i].r)
        ans1[ranges[i].index]=1;
    else
        minimum=ranges[i].r;
  }  
  for(int i=0;i<n;i++)
    cout<<ans1[i]<<" ";
  cout<<endl;
   for(int i=0;i<n;i++)
    cout<<ans2[i]<<" ";
   cout<<endl;
}
int main(){
   solve();  
    
}
