/*#include<bits/stdc++.h>
using namespace std;

int main(){
    pair<int,string> p;
    // p=make_pair(2,"Tushar");
    p={3,"Tushar"};
    cout<<p.first<<" "<<p.second<<endl;
    pair<int,string> p1=p;
    p1=make_pair(4,"Gohil");
    cout<<p1.first<<" "<<p1.second<<endl;
    int a[]={1,2,3};
    int b[]={2,3,4};
    pair<int,int> p_array[3];
    p_array[0]={1,2}; 
    p_array[1]={2,3}; 
    p_array[2]={3,4}; 
    swap(p_array[0],p_array[2]);
    
    for(int i=0;i<3;i++){
        cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
    }
   
return 0;
}
*/
/*
#include<bits/stdc++.h>
using namespace std;
void printVector(vector<int> v){
    cout<<v.size()<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    
}
int main(){
    // vector<int> v;
    // int n;
    // cin>>n;
    // for (int i = 0; i < n; i++)
    // {
    //     int x;
    //     cin>>x;

    //     v.push_back(x);
    //     printVector(v);
    // }
    // printVector(v);
    

   vector<int> v(5,4);
    printVector(v);
    v.push_back(7);
    v.push_back(9);
    printVector(v);
    cout<<endl;

    v.pop_back();
    printVector(v);
    cout<<endl;

    // vector<int> v2=v;     //O(n)-->Time Complexity for copying vector v in v2
    // v2.push_back(7);
    // printVector(v2);
    // printVector(v);
    // cout<<endl;

    vector<int> &v2=v;     
    v2.push_back(7);
    printVector(v2);
    printVector(v);


// vector<string> v;
// int n;
// cin>>n;
// for (int i = 0; i < n; i++)
// {
//     string s;
//     cin>>s;
//     v.push_back(s);
// }
// printVector(v);

return 0;
}
*/

// --------------------------------------------------------------------

/*
#include<bits/stdc++.h>
using namespace std;
void printVector(vector<pair<int,int>> v){
    cout<<"Size"<<v.size()<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
    
}
int main(){
    vector<pair<int ,int>> v;
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int x,y;
        cin>>x>>y;
        v.push_back({x,y});
    }
    printVector(v);
return 0;
}
*/
/*
#include<bits/stdc++.h>
using namespace std;
void printVector(vector<int> v){
    cout<<"Size "<<v.size()<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    
}
int main(){
    int N;
    cin>>N;
    vector<int> v[N];
    for (int i = 0; i < N; i++)
    {
        int n;
        cin>>n;
        for (int j = 0; j < n; j++)
        {
            int x;
            cin>>x;
            v[i].push_back(x);
        }
        
    }
     for (int i = 0; i < N; i++)
    {
        printVector(v[i]);
    }
    
return 0;
}
*/

#include<bits/stdc++.h>
using namespace std;
void printVector(vector<int> v){
    cout<<"Size "<<v.size()<<endl;
    for (int i = 0; i < v.size(); i++)
    {
      cout<<v[i]<<" ";
    }
    cout<<endl;
    
}
int main(){
    int N;
    cin>>N;
    vector<vector<int>> v;
    for (int i = 0; i < N; i++)
    {
        int n;
        cin>>n;
        vector<int> temp;
        for(int j=0;j<n;j++){
            int x;
            cin>>x;
            temp.push_back(x);
        }
        v.push_back(temp);
       
    }
        v[1].push_back(10);
    for (int i = 0; i < v.size(); i++)
    {
        printVector(v[i]);
    }
    

return 0;
}