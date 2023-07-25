#include<bits/stdc++.h>

using namespace std;
#define all(x) x.begin(),x.end()
typedef long long ll; 
int M=1000000007;

// bool find(){

// }
 ll a[100000][501];

int main(){
   ios_base::sync_with_stdio(false);
    cin.tie(NULL);
  ll n;
  cin>>n;
 
  if((n*(n+1)%4!=0)){
    cout<<0<<endl;
    return 0;
  }

  for(int i=0;i<=n*(n+1)/4;i++){
     a[i][0]=0;   
  }
  for(int j=0;j<=n;j++)
     a[0][j]=1;
  for(int i=1;i<=n*(n+1)/4;i++){
    for(int  j=1;j<=n;j++){
        if(i>=j)
            a[i][j]=a[i-j][j-1];
        a[i][j]=(a[i][j]+a[i][j-1])%M;
    }
  }
  cout<<((a[n*(n+1)/4][n])*500000004)%M<<endl;
}