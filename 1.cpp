#include<bits/stdc++.h>
#define watch(x) cout<<#x<<" : "<<x<<endl
#define all(x) x.begin(), x.end()
#define rep(i, a, n) for(int i = a; i < n; i++)
#define rep0(i, n) for(int i = 0; i < n; i++)
#define rep1(i, n) for(int i = 1; i <= n; i++)
#define pb push_back
#define out(x) cout<<x<<endl
#define outs(x) cout<<x<<" "
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
using namespace std;

int main(){
        int n;
        cin>>n;
      int sum=0;
      vector<int>res;
      if(n==2)
        cout<<-1<<" "<<1;
    else{
      for(int i=0;i<n-1;i++)
      {
          res.push_back(i);
          sum+=i;
      }
      res.push_back(-sum);
      for(auto x:res)
      cout<<x<<" ";}
    
    return 0;
}
