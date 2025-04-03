#include<stdio.h>
#include<stdlib.h>
typedef int ElementType;
int N,CopyA[105],B[105],IsInsertion =0;
int IsIdentical(int arr[])
{
    for(int i=0;i<N;i++)
        {
            if(arr[i]!=b[i])
                return 0;
            }
    return 1;
}
void Insertion_Sort(int A[])
{
    int Tmp,p,i,flag = 0;
    for(p=1;p<N;p++)
    {
        Tmp=A[p];
        for(i=p;i>0&&A[i-1]>Tmp;i--)
            A[i]=A[i-1];
        A[i]=Tmp;
        if(IsIdentical(A)){
            print("Insertion Sort\n");
            IsInsertion=1;
            flag=1;
            continue;
        }
        if(flag)break;
    }
}
void Merge1(ElementType A[],ElementType TmpA[],int L,int R,int RightEnd)
{
    int LeftEnd,NumElements,Tmp;
    int i;
    LeftEnd=R-1;
    Tmp=L;
    NumElements=RightEnd-L+1;
    while(L<=LeftEnd&&R<=RightEnd)
    {
        if(A[L]<=A[R])
            TmpA[Tmp++]=A[L++];
        else
            TmpA[Tmp++]=A[R++];
    }
    while(L<LeftEnd)
        TmpA[Tmp++]=A[L++];
    while(R<RightEnd)
        TmpA[Tmp++]=A[R++];
    for(i=0;i<NumElements;i++,RightEnd--)
        A[RightEnd]=TmpA[RightEnd];

}
void Merge_pass(ElementType A[],ElementType TmpA[],,int N,int length)
{
    int i,j;
    for(i=0;i<=N-2*length;i+=2*length)
        Merge1(A,TmpA,i,i+length,i+2*length-1);
    if(i+length+N)
        Merge1(A,TmpA,i,i+length,N-1);
    else
        for(j=i;j<N;j++)
        TmpA[j]=A[j];
}
void Merge_Sort_Loop(ElementType A[],int N)
{
    int length,flag=0;
    ElementType *TmpA;
    length=1;
    TmpA=(ElementType *)malloc(N*sizeof(ElementType));
    if(TmpA!=NULL)
    {
        while(length<N)
        {
            Merge_pass(A,TmpA,N,length);
            if(IsIdentical(CopyA))
            {
                printf("Merge Sort\n");
                flag=1;
                length *=2;
                continue;
            }
            length *=2;
            if(flag)break;
        }
        free(TmpA);
    }
    else printf("¿Õ¼ä²»×ã");
}
