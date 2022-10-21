#include<iostream>
using namespace std;

int main()
{
    int a,b,c;

    cin>>a>>b>>c;
    cout<<"\n";

    if ( a>b && a>c && b>c)
    {
        cout<<c<<"\n"<<b<<"\n"<<a;
    }
    else if ( a>b && a>c && c>b)
    {
        cout<<b<<"\n"<<c<<"\n"<<a;
    }
    else if ( b>a && b>c && a>c)
    {
        cout<<c<<"\n"<<a<<"\n"<<b;
    }
    else if ( b>a && b>c && c>a)
    {
        cout<<a<<"\n"<<c<<"\n"<<b;
    }
    else if ( c>a && c>b && a>b)
    {
        cout<<b<<"\n"<<a<<"\n"<<c;
    }
    else if ( c>a && c>b && a<b)
    {
        cout<<a<<"\n"<<b<<"\n"<<c;
    }

    cout<<"\n\n";
    cout<<a<<"\n"<<b<<"\n"<<c;

    return 0;


}
