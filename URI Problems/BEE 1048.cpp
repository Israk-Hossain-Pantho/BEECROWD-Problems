#include<iostream>
#include<iomanip>
using namespace std;

int main ()
{
    float x,precentage=0,sum=0;
    cout<<fixed<<setprecision(2);

    cin>>x;





    if( x>0 && x<=  400.00)
    {
        precentage = (x*15)/100;
        sum = x+precentage;
        cout<<"Novo salario: "<<sum<<endl;
        cout<<"Reajuste ganho: "<<precentage<<endl;
        cout<<"Reajuste ganho: 15 %"<<endl;
    }
    else if( x>400.00 && x<=  800.00)
    {
        precentage = (x*12)/100;
        sum = x+precentage;
        cout<<"Novo salario: "<<sum<<endl;
        cout<<"Reajuste ganho: "<<precentage<<endl;
        cout<<"Reajuste ganho: 12 %"<<endl;
    }
    else if( x>800.00 && x<=  1200.00)
    {
        precentage = (x*10)/100;
        sum = x+precentage;
        cout<<"Novo salario: "<<sum<<endl;
        cout<<"Reajuste ganho: "<<precentage<<endl;
        cout<<"Reajuste ganho: 10 %"<<endl;
    }
    else if( x>1200.00 && x<=  2000.00)
    {
        precentage = (x*7)/100;
        sum = x+precentage;
        cout<<"Novo salario: "<<sum<<endl;
        cout<<"Reajuste ganho: "<<precentage<<endl;
        cout<<"Reajuste ganho: 7 %"<<endl;
    }
    else if( x>2000.00 )
    {
        precentage = (x*4)/100;
        sum = x+precentage;
        cout<<"Novo salario: "<<sum<<endl;
        cout<<"Reajuste ganho: "<<precentage<<endl;
        cout<<"Reajuste ganho: 4 %"<<endl;
    }

}

/*0 - 400.00
400.01 - 800.00
800.01 - 1200.00
1200.01 - 2000.00
Above 2000.00

15%
12%
10%
7%
4%
c880.01
Reajuste ganho: 80.00
Em percentual: 10 %*/
