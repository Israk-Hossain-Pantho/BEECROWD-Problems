#include <iostream>

using namespace std;

int main(){

    int a;

    while(true)
    {
        cin >> a;
        if(a == 0)
        {
            break;
        }
        for(int i = 1; i <= a; i++)
        {
            if(i!=a)
            {
                cout<<i<<" ";
            }
            else if (i==a)
            {
                cout<<i<<endl;
            }
        }
    }
    return 0;
}

