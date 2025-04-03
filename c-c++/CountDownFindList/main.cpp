#include <iostream>
using namespace std;

// ���嵥����ڵ�ṹ��
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};

// ͷ�巨��ʼ����ͷ�ڵ㵥����ĺ���
ListNode* createLinkedListByHeadInsert() {
    ListNode* head = NULL;  // ��ʼ������ͷָ��ΪNULL����ʾ������
    int num;
    cout << "����������ڵ��ֵ������һ���������ַ��������룩��";
    while (cin >> num) {  // ѭ����ȡ���룬ֻҪ����ȷ��ȡ�����־ͼ���
        ListNode* newNode = new ListNode(num);  // �����µĽڵ㣬ֵΪ���������
        newNode->next = head;  // ���½ڵ��nextָ��ָ��ǰ����ͷ
        head = newNode;  // ��������ͷΪ�²���Ľڵ�
    }
    cin.clear();  // ����������Ĵ���״̬���Ա�������ܵ���������
    cin.ignore(10000, '\n');  // �������뻺������ʣ����ַ�����ֹӰ���������
    return head;  // ���س�ʼ���õ���ͷ�ڵ㵥�����ͷָ��
}

// ���ڴ�ӡ����ĺ���������鿴���
void printList(ListNode* head) {
    ListNode* current = head;
    while (current!= NULL) {
        cout << current->val << " ";
        current = current->next;
    }
    cout << endl;
}

void findKthFromEnd(ListNode* head, int k) {
    if (head == NULL) {  // �����ж������Ƿ�Ϊ�գ����Ϊ����ֱ�ӷ��أ��޷�����
        cout << "����Ϊ�գ��޷����ҵ�����" << k << "���ڵ㡣" << endl;
        return;
    }

    ListNode* fast = head;  // �����ָ�룬��ʼָ��ͷ�ڵ�
    ListNode* slow = head;  // ������ָ�룬��ʼҲָ��ͷ�ڵ�

    // �ÿ�ָ�����ƶ�k��
    for (int i = 0; i < k; ++i) {
        if (fast == NULL) {  // ������ƶ�k�������п�ָ�뵽������ĩβ����NULL����˵��k���������ȣ��޷��ҵ�������k���ڵ�
            cout << "kֵ���������ȣ��޷��ҵ�������" << k << "���ڵ㡣" << endl;
            return;
        }
        fast = fast->next;
    }

    // ͬʱ�ƶ���ָ�����ָ�룬ֱ����ָ�뵽������ĩβ����NULL��
    while (fast!= NULL) {
        fast = fast->next;
        slow = slow->next;
    }

    // ��ʱ��ָ��ָ��ľ��ǵ�����k���ڵ㣬�����ֵ
    cout << "�����е�����" << k << "���ڵ��ֵΪ: " << slow->val << endl;
}
int main() {
    ListNode* myList = createLinkedListByHeadInsert();
    cout << "��ʼ���������Ϊ��";
    printList(myList);
    findKthFromEnd(myList,2);
    return 0;
}
