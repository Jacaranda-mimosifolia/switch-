#include<stdio.h>
int main()
{
	int a;
	printf("选出以下正确选项：\n1.a=1001%10=1\n2.a=1>2=1\n3.a=1+1=2\n");
	scanf("%d",&a);
	switch(a)
	{
		case 1:printf("A.a=1001%10=1正确\n");
		case 2:printf("B.a=1>2=1错误\n");
		case 3:printf("C.a=1+1=2正确\n");
	}
}
