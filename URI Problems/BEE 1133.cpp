#include<iostream>
using namespace std;

int main()
{
    int a, b, i, temp;
    cin>>a>>b;
    if(a > b)
    {   temp = a;
        a = b;
        b = temp;
    }
    a++;
    for(i = a;i < b;i++)
    {
        if(i%5 == 2 || i%5 == 3)
        {
            cout<<i<<endl;
        }
    }
    return 0;
}


