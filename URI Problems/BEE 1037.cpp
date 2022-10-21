#include<iostream>
using namespace std;

int main()
{
    float a;

    cin>>a;

    if ( a>=0.0000 && a<=25.0000)
    {
        cout<<"Intervalo [0,25]"<<endl;
    }
    if ( a>25.0000 && a<=50.0000)
    {
        cout<<"Intervalo (25,50]"<<endl;
    }
    if ( a>50.0000 && a<=75.0000)
    {
        cout<<"Intervalo (50,75]"<<endl;
    }
    if ( a>75.0000 && a<=100.0000)
    {
        cout<<"Intervalo (75,100]"<<endl;
    }
    else
    {
        cout<<"Fora de intervalo"<<endl;
    }

    return 0;

}

/*25.01

Intervalo (25,50]

25.00

Intervalo [0,25]

100.00

Intervalo (75,100]

-25.02

Fora de intervalo */
