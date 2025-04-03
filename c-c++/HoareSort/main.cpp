#include <iostream>

using namespace std;

int PartSort1(int* a,int left,int right)
{
    int key=right;
    while(left<right)
    {
        while(left<right&&a[left]<=a[key])
        {
            left++;
        }
        while(left<right&&a[right]>=a[key])
        {
            right--;
        }
        swap(a[left],a[right]);
    }
    swap(a[left],a[key]);
    return left;
}
void QuickSort(int* a,int left,int right)
{
    if(left>=right)
    {
        return;
    }
    int keyi=PartSort1(a,left,right);
    QuickSort(a,left,keyi-1);
    QuickSort(a,keyi+1,right);

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
    QuickSort(a,0,n-1);
    cout<<endl;
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    return 0;
}
