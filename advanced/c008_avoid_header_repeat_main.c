#include <stdio.h>

//��ͷ�ļ����ظ�����ʱ��Ԥ����չ����ֻ�����һ�� 
#include "c008_avoid_header_repeat_fun.h"
#include "c008_avoid_header_repeat_fun.h"

int main()
{
	int num = max(7,11);
	printf("num is %d.\n", num);
	
	return 0;
}
