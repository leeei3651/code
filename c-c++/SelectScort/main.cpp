#include <iostream>

using namespace std;
void SelectSort(int* a,int n)
{
    int begin = 0;
    int end = n-1;
    while(begin<end)
    {
        int maxi=begin;
        int mini=begin;
        for(int i=begin;i<=end;i++)
        {
            if(a[i]<a[mini])
                mini=i;
            if(a[i]>a[maxi])
                maxi=i;
        }
        swap(a[begin],a[mini]);
        if(maxi==begin)
            maxi=mini;
        swap(a[end],a[maxi]);
        begin++;
        end--;
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
    SelectSort(a,n);
    cout<<endl;
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    return 0;
}
