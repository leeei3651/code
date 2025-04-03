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
		printf("��ջ��");
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
		printf("��ջ��");
		return -1; /* ERROR��ElementType������ֵ����־���� */
	}
	else
		return (PtrS->Data[(PtrS->Top)--]);
}

void solve(int preL, int inL, int postL, int n, int *pre, int *in, int *post)
{
	int root;
	int L,R;
	int i = 0;
	//n=0ʱ��Ҫ���أ����������������ݹ���õ�5�����㣬��û�������������ǳ���֪�������ʱ��Ӧ��ֱ�ӷ���
	if (n == 0) return;
	//n=1��˵��û����������Ҫ�ݹ���
	if (n == 1) { post[postL] = pre[preL]; return; }
	//�����������ߵ�Ԫ���Ǹ����
	root = pre[preL];
	//�������ŵ���������������
	post[postL + n - 1] = root;
	//ȥ��������������Ҹ����������
	for (i = 0; i < n; i++)
		if (in[inL + i] == root) break;
	L = i; R = n - L - 1;
	solve(preL + 1, inL, postL, L, pre, in, post);
	solve(preL + L + 1, inL + L + 1, postL + L, R, pre, in, post);
}

int main()
{
	int num;     //�������
	int value;   //push����ʱ�������
	scanf("%d", &num);
	getchar();
	//����ǰ�����򡢺�����������
	int *pre = (int*)malloc(sizeof(int)*num);
	int *in = (int*)malloc(sizeof(int)*num);
	int *post = (int*)malloc(sizeof(int)*num);

	//������ջ��Top��ʼֵ΢-1�������ջ
	Stack S = (Stack)malloc(sizeof(struct SNode));
	S->Top = -1;
	S->Data = (int *)malloc(sizeof(int)*num);

	char word[8];   //��������
	int pre_i = 0; //���ƽ����ݴ���ǰ�������λ��
	int in_i = 0;  //���ƽ����ݴ������������λ��

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
