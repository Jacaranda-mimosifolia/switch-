#include<stdio.h>
int main()
{
	int a;
	printf("ѡ��������ȷѡ�\n1.a=1001%10=1\n2.a=1>2=1\n3.a=1+1=2\n");
	scanf("%d",&a);
	switch(a)
	{
		case 1:printf("A.a=1001%10=1��ȷ\n");
		case 2:printf("B.a=1>2=1����\n");
		case 3:printf("C.a=1+1=2��ȷ\n");
	}
}
