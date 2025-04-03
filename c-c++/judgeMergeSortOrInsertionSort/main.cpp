#include <stdio.h>
#include <stdlib.h>
#include<iostream>
using namespace std;
typedef int ElementType;
int N, CopyA[105], B[105], IsInsertion = 0;
int IsIdentical(int arr[]) {    //�б�ı��������Ƿ���B������ͬ
	for(int i = 0; i < N; i++)
		if( arr[i] != B[i] )
			return 0;
	return 1;
}
void Insertion_Sort(int A[]){
	int Tmp, P, i, flag = 0;
	for( P = 1; P < N; P++){
		Tmp = A[P];
		for( i = P; i > 0 && A[i - 1] > Tmp; i--)	//i--��д��i++; ��Ϊ�ǴӺ���ǰ�Ƚϣ�����ԭ��
			A[i] = A[i - 1];
		A[i] = Tmp;
		//�����ͬ��˵���ǲ�����������һ���������˳�
		if( IsIdentical(A) ) {
			cout<<"Insertion Sort\n";
			IsInsertion = 1;	//������ǣ���תȥ�б��Ƿ��ǹ鲢
			flag = 1;
			continue;
		}
		if(flag) break;		//����һ�ε������˳�
	}
}
void Merge1( ElementType A[], ElementType TmpA[], int L, int R, int RightEnd ) {
	//�������A[L]~A[R-1]��A[R]~A[RightEnd]�鲢��һ����������
	int LeftEnd, NumElements, Tmp;
	int i;
	LeftEnd = R - 1;	//����յ�λ��
	Tmp = L;	//�������е���ʼλ��
	NumElements = RightEnd - L + 1;		//Ԫ���ܸ���
	while( L <= LeftEnd && R <= RightEnd ) {
		if( A[L] <= A[R] )
			TmpA[Tmp++] = A[L++];	//�����Ԫ�ظ��Ƶ�TmpA
		else
			TmpA[Tmp++] = A[R++];	//���ұ�Ԫ�ظ��Ƶ�TmpA
	}
	while( L <= LeftEnd )
		TmpA[Tmp++] = A[L++];	//ֱ�Ӹ������ʣ�µ�
	while( R <= RightEnd )
		TmpA[Tmp++] = A[R++];	//ֱ�Ӹ����ұ�ʣ�µ�
	for( i = 0; i < NumElements; i++, RightEnd-- )
		A[RightEnd] = TmpA[RightEnd];	//�������TmpA���ƻ�A
}
void Merge_pass( ElementType A[], ElementType TmpA[], int N, int length ) {
	//�����鲢������������
	int i, j;
	for( i = 0; i <= N - 2 * length; i += 2 * length )
		Merge1( A, TmpA, i, i + length, i + 2 * length - 1 );
	if( i + length < N )	//�鲢���2������
		Merge1( A, TmpA, i, i + length, N - 1 );
	else  //���ֻʣ1������
		for( j = i; j < N; j++ )
			TmpA[j] = A[j];
}
void Merge_Sort_Loop( ElementType A[], int N ) {
	int length, flag = 0;
	ElementType *TmpA;
	length = 1;		//��ʼ�������г���
	TmpA = (ElementType *)malloc(N * sizeof(ElementType));
	if ( TmpA != NULL ) {
		while( length < N ) {
			Merge_pass( A, TmpA, N, length );
			//�б��Ƿ���ͬ���������������
			if( IsIdentical(CopyA) ) {
				cout<<"Merge Sort\n";
				flag = 1;
				length *= 2;	//Ҫ������仰�����������ѭ��
				continue;
			}
			length *= 2;
			if(flag) break;
		}
		free( TmpA );
	}
	else printf("�ռ䲻��");
}
int main(){
	int A[105];
	cin>>N;
	//read
	for(int i = 0; i < N; i++) {
		cin>>A[i];
		CopyA[i] = A[i];
	}
	for(int i = 0; i < N; i++)
        cin>>B[i];
	//judge
	Insertion_Sort(A);
	if(IsInsertion) {
		cout<<A[0]<<" ";
		for(int i = 1; i < N; i++)
			cout<<A[i]<<" ";
	}
	else {
		Merge_Sort_Loop(CopyA, N);
		cout<<CopyA[0];
		for(int i = 1; i < N; i++)
			cout<<CopyA[i]<<" ";
	}
	system("pause");
	return 0;
}
