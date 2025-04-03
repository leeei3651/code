#include <iostream>

using namespace std;

class Qi
{
private:
    string name;
    string sex;
public:
    Qi(string _name,string _sex):name(_name),sex(_sex){}
    Qi(Qi& q):name(q.name),sex(q.sex){}
    void display()
    {
        cout<<name<<" "<<sex<<endl;
    }
};
int main()
{
    Qi q1("QiGuoQiang","male");
    Qi q2(q1);
    q1.display();
    q2.display();
    return 0;
}
