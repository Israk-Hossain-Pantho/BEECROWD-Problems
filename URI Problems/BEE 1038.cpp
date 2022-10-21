#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int a,b;
    double sum=0;

    cin>>a>>b;

    cout<<fixed<<setprecision(2);

    if ( a==1)
    {
        sum = b*4.00;
        cout<<"Total: R$ "<<sum<<endl;
    }
    else if ( a==2)
    {
        sum = b*4.50;
        cout<<"Total: R$ "<<sum<<endl;
    }
    else if ( a==3)
    {
        sum = b*5.00;
        cout<<"Total: R$ "<<sum<<endl;
    }
    else if ( a==4)
    {
        sum = b*2.00;
        cout<<"Total: R$ "<<sum<<endl;
    }
    else if ( a==5)
    {
        sum = b*1.50;
        cout<<"Total: R$ "<<sum<<endl;
    }

    return 0;

}

/*3 2

Total: R$ 10.00

4 3

Total: R$ 6.00

2 3

Total: R$ 13.50*/
