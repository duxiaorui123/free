# include <stdio.h>
int main()

{
	int a, b, t;
	printf("��������������");
	scanf_s("%d,%d", &a, &b);  //���������м��ö��Ÿ���
	if (a < b)
	{
		t = a;
		a = b;
		b = t;
	}

	printf("%d,%d\n", a, b);  //�������������Ӵ�С����

	return 0;
}