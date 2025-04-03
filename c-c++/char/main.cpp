#include <iostream>

using namespace std;

int main()
{
    char a[6]="hello";
    char b[6]={'h','e','l','l','o','\0'};
    string c=b;
    for(int i=0;i<5;i++)
    {
        cout<<a[i];
    }
    cout<<"\n";
    for(int i=0;i<5;i++)
    {
        cout<<b[i];
    }
    cout<<"\n"<<c;
    return 0;
}



