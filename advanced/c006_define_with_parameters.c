#include <stdio.h>

//�������ĺ궨�壬Ϊ�˱�����Ϊ��������ȼ��������壬��ý����������� 
//���κ��뺯��������1���κ�����Ԥ����׶ε��滻�����ǵ��ã��������ں�����˵��ʡ��ʱ�䵫�����˿ռ� 2����β������� 
#define S(a,b) (a)*(b)

int main()
{
	int num = S(1+2,2);
	printf("num is %d.\n", num);
	
	//��ʹ��#undef��ֹ�궨�� 
	#undef S
	
	#define S(a,b) (a)+(b)
	int sum = S(1,2);
	printf("sum is %d.\n", sum);
	
	return 0;
}
