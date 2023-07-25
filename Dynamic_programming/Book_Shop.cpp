#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int maxN = 100;
const int maxX = 1e6;
const ll MOD = 1e9+7;

int n;
ll dp[100001]={0};
int cost[1001];
int pages[1001];
int main(){
    int k;
    scanf("%d %d", &n,&k);
    for(int i=0;i<n;i++)
        cin>>cost[i];
    for(int i=0;i<n;i++)
        cin>>pages[i];

    for(int i=0;i<n;i++){
        for(int j=k;j>0;j--){
          if(cost[i]<=j)
            dp[j]=max(dp[j],pages[i]+dp[j-cost[i]]);
        }
    }
   
    
    printf("%lld\n", dp[k]);
}