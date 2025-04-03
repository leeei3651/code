#include <iostream>

using namespace std;

// ≤Â»Î≈≈–Ú
void InsertSort(int* a, int n)
{
	int i=0;
	for(i=0;i<n-1;i++)
    {
        int end = i;
        int x = a[end+1];
        while(end>=0)
        {
            if(a[end]>x)
            {
                a[end+1]=a[end];
                --end;
            }
            else
            {
                break;
            }
        }
        a[end+1]=x;
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
    InsertSort(a,n);
    cout<<endl;
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    return 0;
}
