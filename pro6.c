#include <stdio.h>
int main()
{
	int num, year, month, day;
	printf("��������� �Է��Ͻÿ�(ex: 870312): ");
	scanf("%d", &num);
	
	year = num / 10000;
	month = num % 10000 / 100;
	day = num % 100;
	
	if(year > 20)
	{
		printf("19%d�� %d�� %d��\n", year, month, day);
	}
	else if(year >= 0 && year <10)
	{
		printf("200%d�� %d�� %d��\n", year, month, day);
	}
	else if(year >=10 && year <=20)
	{
		printf("20%d�� %d�� %d��\n", year, month, day);
	}
	return 0;
} 
