#include<bits/stdc++.h>
using namespace std;
#define all(x) x.begin(),x.end()
typedef long long ll; 
int M=1000000007;
void solve(){
  int n,x;
  cin>>n>>x;
   set<int> d={n};
    unordered_map<int,int> mp;
    mp[n]=1;
    set<int> up={0,n};
    set<int> lo={-n,0};
  while(x--){
     int y; cin>>y;
        int a = *up.upper_bound(y);
        int b = -*lo.upper_bound(-y);
        up.insert(y); lo.insert(-y);
        mp[a-b]--;
        if (mp[a-b]==0){
            d.erase(a-b);
        }
        d.insert(a-y),d.insert(y-b);
        mp[a-y]++, mp[y-b]++;
       cout<<(*d.rbegin())<<" ";
  }
}
int main(){
  
   solve();  

}