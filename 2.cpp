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
        vector<int>v(n);
        for(int i=0;i<n;i++)cin>>v[i];
        int total_money;
        cin>>total_money;
        int k;
        cin>>k;
        int count=0;
        int i=0;
        while(total_money)
        {
            if(total_money%v[i]==0)
            {
                int curr=total_money/v[i];
                count+=(total_money/v[i]);
                total_money-=(curr*v[i]);
                i++;
            }
        }
        if(count<=k)
        cout<<"Right"<<endl;
        else
        cout<<"Wrong"<<endl;

      
    
    return 0;
}
