#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include <string.h>

typedef struct SNode *Stack;
struct SNode {
	int *Data;
	int Top;
};

void Push(Stack PtrS, int item, int MaxSize)
{
	if (PtrS->Top == MaxSize - 1) {
		printf("堆栈满");
		return;
	}
	else {
		PtrS->Data[++(PtrS->Top)] = item;
		return;
	}
}

int Pop(Stack PtrS)
{
	if (PtrS->Top == -1) {
		printf("堆栈空");
		return -1; /* ERROR是ElementType的特殊值，标志错误 */
	}
	else
		return (PtrS->Data[(PtrS->Top)--]);
}

void solve(int preL, int inL, int postL, int n, int *pre, int *in, int *post)
{
	int root;
	int L,R;
	int i = 0;
	//n=0时需要返回，比如上面我们最后递归调用到5这个结点，它没有右子树，但是程序不知道，这个时候应该直接返回
	if (n == 0) return;
	//n=1，说明没有子树不需要递归了
	if (n == 1) { post[postL] = pre[preL]; return; }
	//先序遍历最左边的元素是根结点
	root = pre[preL];
	//将根结点放到后序遍历的最后面
	post[postL + n - 1] = root;
	//去中序遍历数组中找根结点在哪里
	for (i = 0; i < n; i++)
		if (in[inL + i] == root) break;
	L = i; R = n - L - 1;
	solve(preL + 1, inL, postL, L, pre, in, post);
	solve(preL + L + 1, inL + L + 1, postL + L, R, pre, in, post);
}

int main()
{
	int num;     //结点总数
	int value;   //push操作时读入的数
	scanf("%d", &num);
	getchar();
	//创建前序、中序、后序三个数组
	int *pre = (int*)malloc(sizeof(int)*num);
	int *in = (int*)malloc(sizeof(int)*num);
	int *post = (int*)malloc(sizeof(int)*num);

	//创建堆栈，Top初始值微-1，代表空栈
	Stack S = (Stack)malloc(sizeof(struct SNode));
	S->Top = -1;
	S->Data = (int *)malloc(sizeof(int)*num);

	char word[8];   //读入数据
	int pre_i = 0; //控制将数据存入前序数组的位置
	int in_i = 0;  //控制将数据存入中序数组的位置

	for (int i = 0; i < num * 2; i++)
	{
		scanf("%s", word);
		getchar();
		if (strcmp(word, "push") == 0)
		{
			scanf("%d", &value);
			getchar();
			Push(S, value, num);
			pre[pre_i] = value;
			pre_i++;
		}
		else
		{
			in[in_i] = Pop(S);
			in_i++;
		}
	}

	solve(0, 0, 0, num, pre, in, post);
	printf("\n");
	for (int l = 0; l < num; l++)
	{
		printf("%d ", post[l]);
	}
	return 0;
}
