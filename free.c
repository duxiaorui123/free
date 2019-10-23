# include <stdio.h>
int main()

{
	int a, b, t;
	printf("请输入两个数：");
	scanf_s("%d,%d", &a, &b);  //这两个数中间用逗号隔开
	if (a < b)
	{
		t = a;
		a = b;
		b = t;
	}

	printf("%d,%d\n", a, b);  //将这两个数按从大到小排列

	return 0;
}