#include <stdio.h>

//�궨�壬������ʽΪȫ����д���������Ԥ����׶ν����滻�����÷�Χ���Զ���ĵط������ļ�ĩβ 
#define PI 3.1415926

int main()
{
	printf("����ֵ��%lf\n", PI);
	
	//�����Ҫ��;��ֹ�궨�壬��ʹ��#undef 
	#undef PI 
	
	#define PI 3.14
	printf("����ֵ��%lf\n", PI); 
	
	return 0;
}
