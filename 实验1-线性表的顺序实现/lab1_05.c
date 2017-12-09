/*
请编写一个算法函数partion(sequence_list *L)，尽可能快地将顺序表L中的所有奇数调整到表的左边，
所有偶数调整到表的右边，并分析算法的时间复杂度。
*/
/**********************************/
/*文件名称：lab1_05.c                 */
/**********************************/
#include "sequlist.h"
/*请将本函数补充完整，并进行测试*/
void partion(sequence_list *L)
{
    int i=0,j=L->size-1;
    datatype temp;
    while(i<=j)
    {
        while(L->a[i]%2!=0)
            i++;
        while(L->a[j]%2==0)
            j--;
        if(i<=j)
        {
            temp=L->a[i];
            L->a[i]=L->a[j];
            L->a[j]=temp;
        }
    }
}
int main()
{
  sequence_list L;
  inputfromfile(&L,"3.txt");
  print(&L);  						/*输出表L*/
  partion(&L);
  print(&L);  						/*输出新表*/
  return 0;
}
