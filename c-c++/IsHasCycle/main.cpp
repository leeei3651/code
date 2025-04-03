#include <iostream>
using namespace std;

// ���嵥����ڵ�ṹ��
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};

// �ж������ھֲ��Ƿ���ڻ��ĺ���
bool hasCycle(ListNode* head) {
    if (head == NULL) {  // �����ж������Ƿ�Ϊ�գ����Ϊ����϶������ڻ���ֱ�ӷ���false
        return false;
    }

    ListNode* slow = head;  // ������ָ�룬��ʼָ������ͷ
    ListNode* fast = head;  // �����ָ�룬��ʼҲָ������ͷ

    while (fast!= NULL && fast->next!= NULL) {  // ��ָ��ÿ���ƶ�����������Ҫȷ����ָ�뼰����һ���ڵ㶼��Ϊ��
        slow = slow->next;  // ��ָ��ÿ���ƶ�һ��
        fast = fast->next->next;  // ��ָ��ÿ���ƶ�����

        if (slow == fast) {  // �������ָ��������˵�����ڻ�
            return true;
        }
    }

    // ���ѭ������������ָ�붼û��������˵���������ڻ�������false
    return false;
}

// �����ǲ��Դ���ʾ��������һ���л����޻���������в���
int main() {
    // ����һ���޻�����ʾ����1 -> 2 -> 3 -> 4
    ListNode* head1 = new ListNode(1);
    ListNode* node2 = new ListNode(2);
    ListNode* node3 = new ListNode(3);
    ListNode* node4 = new ListNode(4);
    head1->next = node2;
    node2->next = node3;
    node3->next = node4;

    // ����һ���л�����ʾ����1 -> 2 -> 3 -> 4����4��nextָ��2�γɻ�
    ListNode* head2 = new ListNode(1);
    ListNode* n2 = new ListNode(2);
    ListNode* n3 = new ListNode(3);
    ListNode* n4 = new ListNode(4);
    head2->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n2;

    cout << "����1�Ƿ���ڻ���" << (hasCycle(head1)? "��" : "��") << endl;
    cout << "����2�Ƿ���ڻ���" << (hasCycle(head2)? "��" : "��") << endl;

    return 0;
}
