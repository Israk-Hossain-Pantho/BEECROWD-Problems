#include<iostream>
using namespace std;

int main ()
{
    int x,y,rev,*arr[100],sum;

    cin>>x>>y;

    if(x>y)
    {
        rev = x;
        x = y;
        y = rev;
    }

    sum = y-x-1;

    for(int i=1; i<=sum;i++)
    {
        arr[i]= x+1;
        x++;
    }
    for(int i=1; i<=sum;i++)
    {
        cout<<arr[i]<<" ";
    }
}
