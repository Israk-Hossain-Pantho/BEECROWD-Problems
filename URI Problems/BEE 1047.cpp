#include<iostream>
using namespace std;

int main()
{
    int a,b,c,d,sum1=0,sum2=0;

    cin>>a>>b>>c>>d;


    if ( a>c && b>d)
    {
        sum1 = (24-a) + c -1;
        sum2 = (60-b) + d;
        if( sum2==60)
        {
            cout<<"O JOGO DUROU "<<sum1+1<<" HORA(S) E "<<0<<" MINUTO(S)"<<endl;
        }
        else
        {
            cout<<"O JOGO DUROU "<<sum1<<" HORA(S) E "<<sum2<<" MINUTO(S)"<<endl;
        }
    }
    else if ( a>c && b<d)
    {
        sum1 = (24-a) + c ;
        sum2 = d-b;
        if( sum2==60)
        {
            cout<<"O JOGO DUROU "<<sum1+1<<" HORA(S) E "<<0<<" MINUTO(S)"<<endl;
        }
        else
        {
            cout<<"O JOGO DUROU "<<sum1<<" HORA(S) E "<<sum2<<" MINUTO(S)"<<endl;
        }
    }
    else if ( a<c && b<d)
    {
        sum1 = c-a;
        sum2 = d-b;
        if( sum2==60)
        {
            cout<<"O JOGO DUROU "<<sum1+1<<" HORA(S) E "<<0<<" MINUTO(S)"<<endl;
        }
        else
        {
            cout<<"O JOGO DUROU "<<sum1<<" HORA(S) E "<<sum2<<" MINUTO(S)"<<endl;
        }
    }
    else if ( a<c && b>d)
    {
        sum1 = c-a-1;
        sum2 = (60-b) + d;
        if( sum2==60)
        {
            cout<<"O JOGO DUROU "<<sum1+1<<" HORA(S) E "<<0<<" MINUTO(S)"<<endl;
        }
        else
        {
            cout<<"O JOGO DUROU "<<sum1<<" HORA(S) E "<<sum2<<" MINUTO(S)"<<endl;
        }
    }
    else if ( a==c && b>d)
    {
        sum1 = 23;
        sum2 = (60-b) + d;
        if( sum2==60)
        {
            cout<<"O JOGO DUROU "<<sum1+1<<" HORA(S) E "<<0<<" MINUTO(S)"<<endl;
        }
        else
        {
            cout<<"O JOGO DUROU "<<sum1<<" HORA(S) E "<<sum2<<" MINUTO(S)"<<endl;
        }
    }
    else if ( a==c && b<d)
    {
        sum1 = 0;
        sum2 = d-b;
        if( sum2==60)
        {
            cout<<"O JOGO DUROU "<<sum1+1<<" HORA(S) E "<<0<<" MINUTO(S)"<<endl;
        }
        else
        {
            cout<<"O JOGO DUROU "<<sum1<<" HORA(S) E "<<sum2<<" MINUTO(S)"<<endl;
        }
    }
    else if ( a>c && b==d)
    {
        sum1 = (24-a) + c;
        sum2 = b;
        if( sum2==60)
        {
            cout<<"O JOGO DUROU "<<sum1+1<<" HORA(S) E "<<0<<" MINUTO(S)"<<endl;
        }
        else
        {
            cout<<"O JOGO DUROU "<<sum1<<" HORA(S) E "<<sum2<<" MINUTO(S)"<<endl;
        }
    }
    else if ( a<c && b==d)
    {
        sum1 = c-a;
        sum2 = b;
        if( sum2==60)
        {
            cout<<"O JOGO DUROU "<<sum1+1<<" HORA(S) E "<<0<<" MINUTO(S)"<<endl;
        }
        else
        {
            cout<<"O JOGO DUROU "<<sum1<<" HORA(S) E "<<sum2<<" MINUTO(S)"<<endl;
        }
    }
    else if ( a==c && b==d)
    {
            cout<<"O JOGO DUROU "<<24<<" HORA(S) E "<<0<<" MINUTO(S)"<<endl;
    }

    return 0;

}

