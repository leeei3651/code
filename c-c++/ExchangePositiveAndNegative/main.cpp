#include <iostream>
#include<vector>

using namespace std;
int n;
vector<int>arr(n);

void solve(vector<int>& _arr)
{
    int left=0,right=arr.size()-1,mid;
    mid=(right-left)/2;
    while(left!=mid&&right!=mid+1)
    {
         while(arr[left]<0&&left!=mid)
         {
             left++;
         }
         while(arr[right]>0&&right!=mid+1)
         {
             right--;
         }
        int temp=arr[left];
        arr[left]=arr[right];
        arr[right]=temp;
    }
}
void display(vector<int>& _arr)
{
    for(vector<int>::iterator it=_arr.begin();it!=_arr.end();it++)
        cout<<*it<<" ";
}
int main()
{
    cout<<"���������ݸ�����"<<endl;
    cin>>n;
    cout<<"���������ݣ��������͸�������:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[n];
    }
    cout<<arr[1];
    display(arr);
    solve(arr);
    cout<<endl;
    display(arr);
    return 0;
}
