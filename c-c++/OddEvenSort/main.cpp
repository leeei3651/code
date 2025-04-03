#include <iostream>
#include <vector>
using namespace std;

// 奇偶交换排序函数
void oddEvenSort(vector<int>& arr) {
    int n = arr.size();
    bool isSorted = false;  // 标记数组是否已经有序
    while (!isSorted) {
        isSorted = true;
        // 奇数位置和偶数位置元素比较交换（先从偶数位置开始）
        for (int i = 0; i < n - 1; i += 2) {
            if (arr[i] > arr[i + 1]) {
                swap(arr[i], arr[i + 1]);
                isSorted = false;
            }
        }
        // 再从奇数位置开始比较交换
        for (int i = 1; i < n - 1; i += 2) {
            if (arr[i] > arr[i + 1]) {
                swap(arr[i], arr[i + 1]);
                isSorted = false;
            }
        }
    }
}

int main() {
    int N;
    cin>>N;
    vector<int> arr(N);
    for(int i=0;i<arr.size();i++)
    {
        cin>>arr[i];
    }
    oddEvenSort(arr);
    vector<int>::iterator it =arr.begin();
    for (it;it!=arr.end();it++) {
        cout << *it << " ";
    }
    cout << endl;
    return 0;
}
