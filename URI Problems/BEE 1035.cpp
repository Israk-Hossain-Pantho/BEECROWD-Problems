#include<iostream>
using namespace std;

int main()
{
    int A,B,C,D,sum1,sum2;

    cin>>A>>B>>C>>D;
    sum1= A+B;
    sum2= C+D;


    if ( B>C && D>A && sum2>sum1 && C>=0 && D>=0 && A%2==0)
    {
        cout<<"Valores aceitos";
    }
    else
    {
        cout<<"Valores nao aceitos";
    }

    return 0;


}
