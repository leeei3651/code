#include <iostream>
using namespace std;

// ���嵥����ڵ�ṹ��
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};

// �鲢����������������A��B�ϲ�Ϊ�ݼ����������C
ListNode* merge(ListNode* A, ListNode* B) {
    ListNode* C = NULL;  // ��ʼ���������C��ͷָ��ΪNULL

    // ֻҪA��B������������һ�����нڵ㣬�ͼ���ѭ��
    while (A!= NULL && B!= NULL) {
        ListNode* temp;
        if (A->val < B->val) {
            // ���A��ǰ�ڵ�ֵС��B��ǰ�ڵ�ֵ����A��ǰ�ڵ�ȡ��
            temp = A;
            A = A->next;
        } else {
            // ���B��ǰ�ڵ�ֵС�ڵ���A��ǰ�ڵ�ֵ����B��ǰ�ڵ�ȡ��
            temp = B;
            B = B->next;
        }
        // ��ȡ���Ľڵ���뵽C�����ͷ����ʵ�ֵݼ�����
        temp->next = C;
        C = temp;
    }

    // ���A������ʣ��ڵ㣬����ȫ���ӵ�C����ͷ��
    while (A!= NULL) {
        ListNode* temp = A;
        A = A->next;
        temp->next = C;
        C = temp;
    }

    // ���B������ʣ��ڵ㣬����ȫ���ӵ�C����ͷ��
    while (B!= NULL) {
        ListNode* temp = B;
        B = B->next;
        temp->next = C;
        C = temp;
    }

    return C;
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

int main() {
    // ������������Aʾ����1 -> 3 -> 5
    ListNode* A = new ListNode(1);
    ListNode* node2 = new ListNode(3);
    ListNode* node3 = new ListNode(5);
    A->next = node2;
    node2->next = node3;

    // ������������Bʾ����2 -> 4 -> 6
    ListNode* B = new ListNode(2);
    ListNode* node5 = new ListNode(4);
    ListNode* node6 = new ListNode(6);
    B->next = node5;
    node5->next = node6;

    // �鲢A��B����õ�C����
    ListNode* C = merge(A, B);

    // ��ӡ�鲢�������C
    printList(C);

    return 0;
}
