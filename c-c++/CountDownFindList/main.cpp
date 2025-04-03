#include <iostream>
using namespace std;

// 定义单链表节点结构体
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};

// 头插法初始化无头节点单链表的函数
ListNode* createLinkedListByHeadInsert() {
    ListNode* head = NULL;  // 初始化链表头指针为NULL，表示空链表
    int num;
    cout << "请输入链表节点的值（输入一个非数字字符结束输入）：";
    while (cin >> num) {  // 循环读取输入，只要能正确读取到数字就继续
        ListNode* newNode = new ListNode(num);  // 创建新的节点，值为输入的数字
        newNode->next = head;  // 将新节点的next指针指向当前链表头
        head = newNode;  // 更新链表头为新插入的节点
    }
    cin.clear();  // 清除输入流的错误状态，以便后续可能的正常输入
    cin.ignore(10000, '\n');  // 忽略输入缓冲区中剩余的字符，防止影响后续输入
    return head;  // 返回初始化好的无头节点单链表的头指针
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

void findKthFromEnd(ListNode* head, int k) {
    if (head == NULL) {  // 首先判断链表是否为空，如果为空则直接返回，无法查找
        cout << "链表为空，无法查找倒数第" << k << "个节点。" << endl;
        return;
    }

    ListNode* fast = head;  // 定义快指针，初始指向头节点
    ListNode* slow = head;  // 定义慢指针，初始也指向头节点

    // 让快指针先移动k步
    for (int i = 0; i < k; ++i) {
        if (fast == NULL) {  // 如果在移动k步过程中快指针到达链表末尾（即NULL），说明k大于链表长度，无法找到倒数第k个节点
            cout << "k值超出链表长度，无法找到倒数第" << k << "个节点。" << endl;
            return;
        }
        fast = fast->next;
    }

    // 同时移动快指针和慢指针，直到快指针到达链表末尾（即NULL）
    while (fast!= NULL) {
        fast = fast->next;
        slow = slow->next;
    }

    // 此时慢指针指向的就是倒数第k个节点，输出其值
    cout << "链表中倒数第" << k << "个节点的值为: " << slow->val << endl;
}
int main() {
    ListNode* myList = createLinkedListByHeadInsert();
    cout << "初始化后的链表为：";
    printList(myList);
    findKthFromEnd(myList,2);
    return 0;
}
