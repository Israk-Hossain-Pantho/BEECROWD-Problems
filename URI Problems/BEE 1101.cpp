#include<iostream>

using namespace std;

void func(int a,int b)
{
    int min,max,sum=0;
    if(a<b)
        {
            min = a;
            max = b;
            for(int i=min; i<=max; i++)
            {
                cout<<i<<" ";
                sum += i;
            }
            cout<<"Sum="<<sum<<endl;
        }
        else if(a>b)
        {
            min = b;
            max = a;
            for(int i=min; i<=max; i++)
            {
                cout<<i<<" ";
                sum += i;
            }
            cout<<"Sum="<<sum<<endl;
        }
}

int main()
{

    int x, y;

    while(true)
    {
        cin >> x;
        cin >> y;
        if(x<=0) break;
        if(y<=0) break;
        if(x>0 && y>0)
        {
            func(x,y);
        }

    }

        return 0;
}
