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
  int n,k;
  cin>>n>>k;
  vector<ll> a(k+1,INT_MAX);
  vector<ll> b(n);
  for(int i=0;i<n;i++)
    cin>>b[i];
  a[0]=0;
  for(int i=1;i<=k;i++){
    for(int j=0;j<n;j++){
        if(b[j]<=i)
            a[i]=min<ll>(a[i],1+a[i-b[j]]);
    }
  }
  if(a[k]==INT_MAX)
    cout<<-1<<endl;
  else
  cout<<a[k]<<endl;
}
int main(){
   solve();  
}