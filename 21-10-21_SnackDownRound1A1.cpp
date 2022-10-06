#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        int cnt=0;
        while(x<y){
            x+=2;
            cnt++;
        }
        while(x!=y){
            x-=1;
            cnt++;
        }
        cout<<cnt<<endl;
    }
return 0;
}