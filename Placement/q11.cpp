#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b)
{
    if(b==0)
    {
        return a;
    }
    return gcd(b,a%b);
}

int lcm(int a,int b)
{
    return ((a*b)/gcd(a,b)); //Maths (a*b) = lcm(a,b) * gcd(a,b)
}


int main()
{
    int p,n;
    cin>>p>>n;
    cout<<lcm(p,n);

}