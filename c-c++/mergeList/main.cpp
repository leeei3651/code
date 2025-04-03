#include <iostream>
using namespace std;

// 定义单链表节点结构体
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};

// 归并函数，将有序链表A和B合并为递减有序的链表C
ListNode* merge(ListNode* A, ListNode* B) {
    ListNode* C = NULL;  // 初始化结果链表C的头指针为NULL

    // 只要A和B链表中至少有一个还有节点，就继续循环
    while (A!= NULL && B!= NULL) {
        ListNode* temp;
        if (A->val < B->val) {
            // 如果A当前节点值小于B当前节点值，将A当前节点取出
            temp = A;
            A = A->next;
        } else {
            // 如果B当前节点值小于等于A当前节点值，将B当前节点取出
            temp = B;
            B = B->next;
        }
        // 将取出的节点插入到C链表的头部，实现递减排序
        temp->next = C;
        C = temp;
    }

    // 如果A链表还有剩余节点，将其全部接到C链表头部
    while (A!= NULL) {
        ListNode* temp = A;
        A = A->next;
        temp->next = C;
        C = temp;
    }

    // 如果B链表还有剩余节点，将其全部接到C链表头部
    while (B!= NULL) {
        ListNode* temp = B;
        B = B->next;
        temp->next = C;
        C = temp;
    }

    return C;
}

// 用于打印链表的函数，方便查看结果
void printList(ListNode* head) {
    ListNode* current = head;
    while (current!= NULL) {
        cout << current->val << " ";
        current = current->next;
    }
    cout << endl;
}

int main() {
    // 构建有序链表A示例：1 -> 3 -> 5
    ListNode* A = new ListNode(1);
    ListNode* node2 = new ListNode(3);
    ListNode* node3 = new ListNode(5);
    A->next = node2;
    node2->next = node3;

    // 构建有序链表B示例：2 -> 4 -> 6
    ListNode* B = new ListNode(2);
    ListNode* node5 = new ListNode(4);
    ListNode* node6 = new ListNode(6);
    B->next = node5;
    node5->next = node6;

    // 归并A和B链表得到C链表
    ListNode* C = merge(A, B);

    // 打印归并后的链表C
    printList(C);

    return 0;
}
