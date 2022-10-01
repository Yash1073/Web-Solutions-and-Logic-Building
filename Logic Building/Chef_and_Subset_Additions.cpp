#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int main(){
ios::sync_with_stdio(0); 
cin.tie(0);
ll t;
cin>>t;
while(t--){
    ll n,x,y;
    cin>>n>>x>>y;
    ll a[n],b[n];
    for(ll i = 0 ; i < n ; i++){
        cin>>a[i];
    }
    for(ll i = 0 ; i < n ; i++){
        cin>>b[i];
    }
    bool check = 0;
    for(ll i = 0 ; i < n ; i++){
        if( ((b[i] - a[i]) == x) || ((b[i] - a[i]) == y) )
        continue;
        else{
        check = 1;
        break;
        }
    }
    (check == 0) ? cout<<"YES" : cout<<"NO" ;
    cout<<endl;
}
    return 0;
}