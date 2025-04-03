//定义一个复数类，函数重载右++符号（实部与虚部均自加1），友元函数重载<<符号。

#include<iostream>
using namespace std;
class complex{
	int real; int imag;
public:
       complex(){real=imag=0;}
       complex(int r,int i){real=r;imag=i;}
       complex operator++(int);
       friend ostream& operator<<(ostream&o,const complex& t);
};
complex complex::operator++(int)
{
    complex c;
    c.real++;
    c.imag++;
    return c;
}
ostream& operator<<(ostream&o,const complex &t)
{

    if(t.real==0&&t.imag!=0)

    {

        if(t.imag==1)

        {

            cout<<"i"<<endl;

        }

        else if(t.imag==-1)

        {

            cout<<"-i"<<endl;

        }

        else

        {

            cout<<t.imag<<"i"<<endl;

        }

    }

    else if(t.real!=0&&t.imag==0)

    {

        cout<<t.real<<endl;

    }

    else if(t.real==0&&t.imag==0)

    {

        cout<<"0"<<endl;

    }

    else if(t.real!=0&&t.imag!=0)

    {

        if(t.imag<0)

        {

            if(t.imag==-1)

            {

                cout<<t.real<<"-i"<<endl;

            }

            else

            {

                cout<<t.real<<t.imag<<"i"<<endl;

            }

        }

        else if(t.imag>0)

        {

            if(t.imag==1)

            {

                cout<<t.real<<"+"<<"i"<<endl;

            }

            else

            {

                cout<<t.real<<"+"<<t.imag<<"i"<<endl;

            }

        }

    }

    return cout;

}

int main()
{
    complex c1(3,4);
    c1++;
    cout<<c1;
    return 0;
}
