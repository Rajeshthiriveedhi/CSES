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
   multiset<int> s;
  for(int i=0;i<n;i++)
  {
    int x;
    cin>>x;
 
    if(s.upper_bound(x)==s.end()) s.insert(x);
    else {

        s.erase(s.upper_bound(x));
        s.insert(x);
    }
  }
  cout<<s.size()<<endl;
}
int main(){
  
   solve();  

}