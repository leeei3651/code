#include <iostream>
#include <vector>
#include<cstdlib>
using namespace std;

void separateIntegers(vector<int>& _arr) {
    int left = 0;
    int right = _arr.size() - 1;
    while (left < right) {
        // ���������ҵ�һ��������
        while (left < right && _arr[left] < 0) {
            left++;
        }
        // ���������ҵ�һ��������
        while (left < right && _arr[right] > 0) {
            right--;
        }
        if (left < right) {
            swap(_arr[left], _arr[right]);
            left++;
            right--;
        }
    }
}

int main() {
    int n;
    cin>>n;
    vector<int> arr(n);
    for(unsigned int i=0;i<arr.size();i++)
    {
        cin>>arr[i];
    }
    separateIntegers(arr);

    for(vector<int>::iterator it=arr.begin();it!=arr.end();it++)
    {
        cout<<*it<<" ";
    }
    cout << endl;
    return 0;
}
