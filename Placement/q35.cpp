#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    getline(cin,a);
    for(int i=0;i<a.length();i++)
    {
        if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')
        {
            for(int j=i;j<a.length();j++)
            {
                a[j]=a[j+1];
            }
        }
    }
    cout<<a;
}