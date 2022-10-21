#include<iostream>
using namespace std;

int main()
{
    int x,count;

    cin>>x;

    if(x>0 && x<46)
    {
        count=x;
    }
    int arr[count];

    for(int i=0; i<count; i++)
    {
        if(i==0 || i==1)
        {
            arr[i]=i;
            cout<<arr[i]<<" ";
        }
        else if (i==count-1)
        {
            arr[i] = arr[i-2] + arr[i-1];
            cout<<arr[i];
        }
        else if ( i< count-1)
        {
            arr[i] = arr[i-2] + arr[i-1];
            cout<<arr[i]<<" ";
        }

    }
}

