#include <stdio.h>
#include <string.h>
void phone_division(char num[])
{
	char pho_return[50];
	int length;	
	length=strlen(num);
	
	if(length == 10)
	{
		memmove(pho_return, num, 3);
		printf("%s-", pho_return);
		memmove(pho_return, num+3, 3);
		printf("%s-", pho_return);
		memmove(pho_return, num+6, 4);
		printf("%s", pho_return);
	}
	else if(length == 11)
	{
		memmove(pho_return, num, 3);
		printf("%s-", pho_return);
		memmove(pho_return, num+3, 4);
		printf("%s-", pho_return);
		memmove(pho_return, num+7, 4);
		printf("%s", pho_return);
	}
	else
	{
		printf("문자열을 잘못 입력하였습니다.");
	}
}
int main()
{
	char num[50];
	
	printf("전화번호를 입력하세요: ");
	scanf("%s", num);
	
	phone_division(num);
	
	return 0;
}
