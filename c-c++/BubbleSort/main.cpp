#include <iostream>

using namespace std;

void BubbleSort(int* a,int n)
{
    int i=0;
    for(i=0;i<n-1;i++)
    {
        int j=0,flag=0;
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                swap(a[j],a[j+1]);
                flag=1;
            }
        }
        if(flag==0)
        {
            break;
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
    BubbleSort(a,n);
    cout<<endl;
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    return 0;
}
