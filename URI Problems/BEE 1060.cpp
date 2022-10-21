#include<iostream>

using namespace std;

int main()
{
    float arr[100], count=0;

    for (int i=0; i<100; i++)
    {
        cin>>arr[i];
        if ( arr[i]<=0)
        {
            break;
        }
    }
    for (int i=0; i<6; i++)
    {
        if(i>=0)
        {
            count++;
        }
    }
    cout<<count<<" valores positivos";


}

