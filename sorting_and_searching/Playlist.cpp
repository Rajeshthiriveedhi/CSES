#include<bits/stdc++.h>
using namespace std;
#define all(x) x.begin(),x.end()
typedef long long ll; 
int M=1000000007;
void display(set<pair<int,int>>& s)
{
    bool found = false;
  
    // range-based for loop
    for (auto &x : s) {
        found = true;
        cout << "(" << x.first << ", "
             << x.second << ")"
             << " ";
    }
  
    if (not found) {
        cout << "No valid pair\n";
    }
    cout<<endl;
}
void solve(){
  int n;
  cin>>n;
  vector<int> a;
  for(int i=0;i<n;i++)
  {
    int x;
    cin>>x;
    a.push_back(x);
  }
  set<int> s;
  int  start=0,end=0;
  int ans=0;
  while(start<=end and end<n){
     
    
       while(s.count(a[end])){
        s.erase(a[start++]);
       }
    
        s.insert(a[end]);
        ans=max(ans,end-start+1);
       end++;
  }
  cout<<ans<<endl;
}
int main(){
  
   solve();  

}