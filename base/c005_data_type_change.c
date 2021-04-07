#include <stdio.h>
int main()
{
	//无论是自动类型转换还是强制性类型转换，都是为了运算需要，而不会改变数据本身的类型和值 
	
	//自动类型转换
	//// 
	//1当表达式中出现了char、short、int中的一种或多种且没有其他类型的数时，参加运算的所有数都当作int类型参加运算，结果也是int类型 
	printf("%f\n", 5/2);
	printf("%d\n", 5/2);
	
	//2当表达式中出现了带小数点的实数，参加成员全部当作double类型参加运算，结果也是double类型 
	printf("%d\n", 5.0/2);
	printf("%f\n", 5.0/2);
	printf("%f\n", 5/2.0);
	
	//3当表达式中出现有符号和无符号数时，所有数都当作无符号数来处理（表达式中无实数） 
	int a = -8;
	unsigned int b = 7;
	if(a+b>0)
	{
		printf("a+b>0\n");
	}
	else
	{
		printf("a+b<0\n");
	}
	//a+b的结果为 1111 1111 1111 1111 1111 1111 1111 1111
	printf("%x\n", (a+b));//%x打印无符号十六进制整型
	printf("%d\n", (a+b));//%d打印有符号十进制整型 
	
	//4在赋值语句中，等号右边的数自动转换为等号左边的数的类型进行赋值 
	int c;
	float d = 1.5f;
	c = d;
	printf("c=%d,d=%f\n", c,d);//赋值时先将等号右边的数取出来转换为左边的类型然后赋值，并不会改变等号右边的数
	
	
	//强制类型转换
	////
	float e = 3.6;
	int f;
	f = e;
	printf("e=%f,f=%d\n", e,f);
	f = (int)e; 
	printf("e=%f,f=%d\n", e,f);
	
	return 0;
}
