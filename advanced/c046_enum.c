#include <stdio.h>

//ö������Ҳ��һ�ֹ������͵����ݽṹ������ö����������������������ʾ���ͳ��� 
//ö�������ǽ�������ֵһһ�оٳ�����������ֵֻ�����оٳ���������ֵ 
//��Ҫע�⣺ 
//1ö��ֵ�ǳ��������ɸ�ֵ 
//2ö��Ԫ�ر�����ϵͳ������һ����ʾ��ŵ���ֵ��Ĭ���Ǵ�0��ʼ�������� 
//3���Ըı�ö��Ԫ�ص�Ĭ��ֵ�������Ԫ������1 
typedef enum week{
	mo=1, tu, we, th, fr, sa, su 
}WEEK;

int main()
{
	WEEK workday, weekday;
	workday = we;
	weekday = sa;
	printf("%d\n", workday); 
	printf("%d\n", weekday);
	
	return 0;
}
