#include<iostream>
#include<cmath>
using namespace std;

class point 
{
    public:
        int x,y;
        // friend float distance(point , point);
        void setdata()
        {
            int a;
            cin>>a;
            int b;
            cin>>b;

            x=a;
            y=b;
        }

        

};

float distance(point c, point d)
{
    float g;
    g = sqrt(pow(c.x-d.x,2)+ pow(c.y-d.y, 2));
    return g;
}

int main()
{
    point p1,p2,p3;

    int k=0;
  

    int R;
    cin>>R;

    p1.setdata();
    cout<<endl;
    p2.setdata();
    cout<<endl;
    p3.setdata();
    cout<<endl;

    float d1 = distance(p1,p2);
    float d2 = distance(p2,p3);
    float d3 = distance(p3,p1);

        cout<<d1<<endl;
        cout<<endl;
        cout<<d2<<endl;
        cout<<endl;
        cout<<d3<<endl;
        cout<<endl;

    	if(d1<=R)
		{
			k++;
		}
		if(d2<=R)
		{
			k++;
		}
		if(d3<=R)
		{
			k++;
		}
        cout<<k<<endl;
        cout<<endl;
      
        if(k>=2)
		{
			cout<<"yes"<<endl;
		}
		else
		{
			cout<<"no"<<endl;
		}
    


    
    return 0;
}

// #include<bits/stdc++.h>
// using namespace std;

// float distance(int x1,int y1,int x2,int y2)
// {
// 	return(sqrt(pow(x2-x1,2)+(pow(y2-y1,2) )));
// }

// int main()
// {
	
// 		long range, k=0;
// 		cin>>range;
		
// 		long x1,x2,x3,y1,y2,y3;
// 		cin>>x1>>y1>>x2>>y2>>x3>>y3;
//         float d1,d2,d3;
// 		d1=distance(x1,y1,x2,y2);
// 		d2=distance(x2,y2,x3,y3);
// 		d3=distance(x1,y1,x3,y3);
//         cout<<d1<<endl;
//         cout<<endl;
//         cout<<d2<<endl;
//         cout<<endl;
//         cout<<d3<<endl;
//         cout<<endl;
// 		if(d1<=range)
// 		{
// 			k++;
// 		}
// 		if(d2<=range)
// 		{
// 			k++;
// 		}
// 		if(d3<=range)
// 		{
// 			k++;
// 		}
// 		if(k>=2)
// 		{
// 			cout<<"yes"<<endl;
// 		}
// 		else
// 		{
// 			cout<<"no"<<endl;
// 		}
	
	
// 	return 0;
// }
