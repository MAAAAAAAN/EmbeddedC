#include <stdio.h>
int main()
{
	int i = 3;
	int num;
	num = (i++) + (i++) + (i++);//3+4+5����������ͬ���Ҳ��ͬ��Ҳ���ܻ����Ϊ3+3+3 
	printf("i=%d,num=%d\n", i,num);
	
	int j = 3;
	int num2;
	num2 = (++j) + (++j) + (++j);//5+5+6���Ƚ���ǰ�������ļӷ�����Ϊjֻ��һ�����Ծ�������ǰ����������5+5=10��Ȼ����10��ȥ��6
	printf("j=%d,num2=%d\n", j,num2);
	
	return 0;
}
