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
    ll a,b,c;
    cin>>a;
    cin>>b;
    cin>>c;
    if(((a+b) == c) || ((b+c) == a) || ((a+c) == b))
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
}
    return 0;
}