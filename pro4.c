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
		printf("���ڿ��� �߸� �Է��Ͽ����ϴ�.");
	}
}
int main()
{
	char num[50];
	
	printf("��ȭ��ȣ�� �Է��ϼ���: ");
	scanf("%s", num);
	
	phone_division(num);
	
	return 0;
}
