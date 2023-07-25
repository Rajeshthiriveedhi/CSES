#include<bits/stdc++.h>

using namespace std;
#define all(x) x.begin(),x.end()
typedef long long ll; 
int M=1000000007;
bool check(ll n){
  if(n&1)
    return true;
  return false;
}
void solve(){
   ll n;
   cin>>n;
   ll a[n];
   for(int i=0;i<n;i++)
    cin>>a[i];
   ll ans[n][n]={0};
   if(n&1){
     for(int i=0;i<n;i++)
        ans[i][i]=a[i];
   }
   else{
     for(int i=0;i<n;i++)
        ans[i][i]=0;
   }
  
   for(ll i=1;i<n;i++){
    for(ll j=0;j+i<n;j++){
        
        if(check(n)^check(i)){
            ans[j][j+i]=max(a[j]+ans[j+1][j+i],a[j+i]+ans[j][j+i-1]);
        }
        else{
          ans[j][j+i]=min(ans[j][j+i-1],ans[j+1][j+i]);
        }
    }
   }
     

   cout<<ans[0][n-1]<<endl;
}  
int main(){
  // int t;
  // cin>>t;
  // while(t--)
   solve();  
}