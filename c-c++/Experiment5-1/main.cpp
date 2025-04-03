/*1、已知有两个类分别是Base和Derived，且Derived类是Base类的子类（派生类），
class Base
{
private:
	int x, y;
protected:
	int z;
public:
	int k;
	Base(int a, int b, int c, int d) : x(a), y(b), z(c), k(d) {}
};
class Derived : public Base
{
private:
	int m;
protected:
	int n;
public:
	int q;
	Derived(int a, int b, int c, int d, int e, int f, int g)
	: Base(a, b, c, d), m(e), n(f), q(g) {}
};
要求：
(1) 请给父与子两个类分别定义合适的成员函数，使得Derived类的对象能够访问所有的成员变量。
(2) 将Derived的继承方式更改为private，若要实现(1)的功能，两个类的成员函数需要做什么改动？
(3) 若：
		Derived derived(4, 5, 3, 1, 3, 6, 8);
		Base * pBase = &derived;
通过pBase能否访问derived的数据成员？*/
#include <iostream>

using namespace std;

class Base
{
public:
    int k;
    Base(int a,int b,int c,int d):x(a),y(b),z(c),k(d){}
    int visitX(){return x;}
    int visitY(){return y;}
    int visitZ(){return z;}
    int visitK(){return k;}
protected:
    int z;
private:
    int x,y;
};
class Derived:private Base
{
public:
    int q;
    Derived(int a,int b,int c,int d,int e,int f,int g):Base(a,b,c,d),m(e),n(f),q(g){}
    int visitX2(){return visitX();}
    int visitY2(){return visitY();}
    int visitZ2(){return visitZ();}
    int visitK2(){return visitK();}
    int visitM(){return m;}
    int visitN(){return n;}
    int visitQ(){return q;}
protected:
    int n;
    int k;
private:
    int m;
};
int main()
{
    Derived *d=new Derived(1,2,3,4,5,6,7);
    cout<<"Derived=(x=1,y=2,z=3,k=4,m=5,n=6,q=7)"<<"\n"<<d->visitX2()<<"\n"
    <<d->visitY2()<<"\n"
    <<d->visitZ2()<<"\n"
    <<d->visitK2()<<"\n"
    <<d->visitM()<<"\n"
    <<d->visitN()<<"\n"
    <<d->visitQ()<<endl;
    return 0;
}
