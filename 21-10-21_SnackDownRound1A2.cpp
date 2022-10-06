#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int m=n*k;
        int g=__gcd(n,2*n);
        int g1=__gcd(m,m-1);
        int l=(2*n*n)/g;
        int l1=(m*(m-1))/g1;
        cout<<l<<" "<<l1<<endl;
    }
return 0;
}