#include <iostream>

using namespace std;

void ShellSort(int* a,int n)
{
    int i=0;
    int gap=n;
    while(gap>1)
    {
        gap/=2;
        for(i=0;i<n-gap;i++)
        {
            int end=i;
            int x=a[end+gap];
            while(end>=0)
            {
                if(a[end]>x)
                {
                    a[end+gap]=a[end];
                    end-=gap;
                }
                else
                {
                    break;
                }

            }
            a[end+gap]=x;
        }
    }
}
int main()
{
    int n;
    int* a=new int[n];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    ShellSort(a,n);
    cout<<endl;
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    return 0;
}
