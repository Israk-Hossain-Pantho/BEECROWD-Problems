#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;

int main()
{
    double A,B,C,X1,X2,temp;

    cin>>A>>B>>C;

    temp = (B*B) - (4*A*C);

    X1 = (-B + sqrt(temp))/(2*A);
    X2 = (-B - sqrt(temp))/(2*A);

    cout<<fixed<<setprecision(5);

    if(temp<0 || A==0)
    {
        cout<<"Impossivel calcular"<<endl;

    }
    else
    {
        cout<<"R1 = "<<X1<<endl;
        cout<<"R2 = "<<X2<<endl;
    }

    return 0;

}
//10.3 203.0 5.0 '10.0 3.0 5.0



