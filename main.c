void Delete(int i,List *PtrL)
{
    int j;
    if(i<1||i>PtrL->Last+1)
    {
        printf("�����ڵ�%d��Ԫ��"��i);
        return;
    }
    for(j=i;j<=PtrL->Last;j++)
        Ptrl->data[j-1]=PtrL->Data[j];
    PtrL->Last--;
    return;
}

