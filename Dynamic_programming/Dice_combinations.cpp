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
  vector<ll> a(n+1,0);
  a[0]=1;
  for(int i=1;i<=n;i++){
    for(int j=1;j<=6;j++){
        if(j<=i)
            a[i]=(a[i]+a[i-j])%M;
    }
  }
  cout<<a[n]<<endl;
}
int main(){
   solve();  
}