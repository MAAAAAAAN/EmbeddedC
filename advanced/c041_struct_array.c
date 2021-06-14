#include <stdio.h>
#include <string.h>

int main()
{
	typedef struct stu{
		int num;
		char name[20];
		char sex;
	}STU;
	
	STU sanda_stu[3] = {
		{234, "Gerry Zhao", 'm'},
		{243, "Manman Du", 'f'},
		{111, "Kim", 'f'}
	};
	sanda_stu[2].num = 222;
	strcpy(sanda_stu[2].name, "Kim2");
	
	int i;
	for(i=0;i<3;i++)
	{
		printf("%d -- %s -- %c\n", sanda_stu[i].num,sanda_stu[i].name,sanda_stu[i].sex);
	}
	
	return 0;
}
