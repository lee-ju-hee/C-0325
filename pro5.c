#include <stdio.h>
#include <math.h>
int main()
{
	int money;
	printf("�ݾ��� �Է��ϼ���: ");
	scanf("%d", &money);
	
	printf("5������: %d��\n", money / 50000);
	printf("1������: %d��\n", money % 50000 / 10000);
	printf("5õ����: %d��\n", money % 10000 / 5000);
	printf("1õ����: %d��\n", money % 5000 / 1000);
	printf("500����: %d��\n", money % 1000 / 500);
	printf("100����: %d��\n", money % 500 / 100);
	printf("50����: %d��\n", money % 100 / 50);
	printf("10����: %d��\n", money % 50 / 10);
	
	return 0;
}
