#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x1, y1,x2, y2,x3,y3,div=0;
    cin>>x1>>y1>>x2>>y2;
    x3= (x1*y2)+(x2*y1);
    y3 = x2*y2;
    if(x3>y3)
    {
        div=y3;
    }
    else
    {
        div = x3;
    }
    for(int i=div;i>0;i--)
    {
        if(x3%i==0 && y3%i==0)
        {       
            x3 = x3/i;
            y3 = y3/i;
        }
    }
    cout<<x3<<"\n"<<"--\n"<<y3;

}