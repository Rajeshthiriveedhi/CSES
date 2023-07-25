#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int maxN = 100;
const int maxX = 1e6;
const ll MOD = 1e9+7;

int n, X, c[maxN];
ll dp[maxX+1]={0};
set<int> comb(int x){
    set<int> s;
    while(x){
        int l=x%10;
        if(l)
        s.insert(l);
        x=x/10;
    } 
    return s;
}
int main(){
    scanf("%d ", &n);
    dp[0]=0;
    for(int i=1;i<=n;i++){
        set<int> s;
        s=comb(i);
        int x=INT_MAX;
        for(auto it=s.begin();it!=s.end();it++){
           x=min<ll>(x,1+dp[i-*it]);
        }
        // cout<<x<<endl;
        dp[i]=x;
    }
    printf("%lld\n", dp[n]);
}