#include <iostream>
using namespace std;

// 定义单链表节点结构体
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};

// 判断链表内局部是否存在环的函数
bool hasCycle(ListNode* head) {
    if (head == NULL) {  // 首先判断链表是否为空，如果为空则肯定不存在环，直接返回false
        return false;
    }

    ListNode* slow = head;  // 定义慢指针，初始指向链表头
    ListNode* fast = head;  // 定义快指针，初始也指向链表头

    while (fast!= NULL && fast->next!= NULL) {  // 快指针每次移动两步，所以要确保快指针及其下一个节点都不为空
        slow = slow->next;  // 慢指针每次移动一步
        fast = fast->next->next;  // 快指针每次移动两步

        if (slow == fast) {  // 如果快慢指针相遇，说明存在环
            return true;
        }
    }

    // 如果循环结束，快慢指针都没有相遇，说明链表不存在环，返回false
    return false;
}

// 以下是测试代码示例，构建一个有环和无环的链表进行测试
int main() {
    // 构建一个无环链表示例：1 -> 2 -> 3 -> 4
    ListNode* head1 = new ListNode(1);
    ListNode* node2 = new ListNode(2);
    ListNode* node3 = new ListNode(3);
    ListNode* node4 = new ListNode(4);
    head1->next = node2;
    node2->next = node3;
    node3->next = node4;

    // 构建一个有环链表示例：1 -> 2 -> 3 -> 4，让4的next指向2形成环
    ListNode* head2 = new ListNode(1);
    ListNode* n2 = new ListNode(2);
    ListNode* n3 = new ListNode(3);
    ListNode* n4 = new ListNode(4);
    head2->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n2;

    cout << "链表1是否存在环：" << (hasCycle(head1)? "是" : "否") << endl;
    cout << "链表2是否存在环：" << (hasCycle(head2)? "是" : "否") << endl;

    return 0;
}
