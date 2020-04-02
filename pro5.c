#include <stdio.h>
#include <math.h>
int main()
{
	int money;
	printf("금액을 입력하세요: ");
	scanf("%d", &money);
	
	printf("5만원권: %d개\n", money / 50000);
	printf("1만원권: %d개\n", money % 50000 / 10000);
	printf("5천원권: %d개\n", money % 10000 / 5000);
	printf("1천원권: %d개\n", money % 5000 / 1000);
	printf("500원권: %d개\n", money % 1000 / 500);
	printf("100원권: %d개\n", money % 500 / 100);
	printf("50원권: %d개\n", money % 100 / 50);
	printf("10원권: %d개\n", money % 50 / 10);
	
	return 0;
}
