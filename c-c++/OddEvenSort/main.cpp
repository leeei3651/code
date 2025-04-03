#include <iostream>
#include <vector>
using namespace std;

// ��ż����������
void oddEvenSort(vector<int>& arr) {
    int n = arr.size();
    bool isSorted = false;  // ��������Ƿ��Ѿ�����
    while (!isSorted) {
        isSorted = true;
        // ����λ�ú�ż��λ��Ԫ�رȽϽ������ȴ�ż��λ�ÿ�ʼ��
        for (int i = 0; i < n - 1; i += 2) {
            if (arr[i] > arr[i + 1]) {
                swap(arr[i], arr[i + 1]);
                isSorted = false;
            }
        }
        // �ٴ�����λ�ÿ�ʼ�ȽϽ���
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
