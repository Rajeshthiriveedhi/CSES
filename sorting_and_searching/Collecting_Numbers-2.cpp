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
  int n,m;
  cin>>n>>m;
  vector<int> a(n);
  vector<pair<int,int>> b;
  for(int i=0;i<n;i++){
  	cin>>a[i];
  	b.push_back({a[i],i});
  }
  sort(all(b));
  int ans=1;
  for(int i=1;i<n;i++){
  	if(b[i].second<b[i-1].second)
  		ans++;
  }
  while(m--){
  	int c,d;
  	cin>>c>>d;
    c=a[c-1];
    d=a[d-1];
    c--;
    d--;
    int x=0,y=0;
    set<pair<int,int>> s1,s2;
    if(c-1>=0){
    	if(b[c-1].second>b[c].second)
    		s1.insert({c-1,c});
    	if(b[c-1].second>b[d].second)
    	    s2.insert({c-1,d});
    }
    if(d-1>=0){
    	if(b[d-1].second>b[d].second)
    		s1.insert({d-1,d});
    	if(b[d-1].second>b[c].second)
    	    s2.insert({d-1,c});
    }
    if(c+1<n){
    	if(b[c].second>b[c+1].second)
    		s1.insert({c,c+1});
    	if(b[d].second>b[c+1].second)
    	    s2.insert({d,c+1});
    }
    if(d+1<n){
    	if(b[d].second>b[d+1].second)
    		s1.insert({d,d+1});
    	if(b[c].second>b[d+1].second)
    	    s2.insert({c,d+1});   
    	     }
    int ch=b[c].second;
    b[c].second=b[d].second;
    b[d].second=ch;
    ans=ans-s1.size()+s2.size();
    // cout<<s1.size()<<s2.size()<<endl;
    display(s1);
  }

}
int main(){
  
   solve();  

}