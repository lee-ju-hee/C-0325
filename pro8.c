#include <stdio.h>
#include <time.h>
#include <Windows.h>
void timer(int sec)
{
	Sleep(sec * 1000);
	printf("\a");
}

int main()
{
	int sel;
    int min, sec;
    printf("1:n�� �� �˶�\t2:n�� �� �˶�:");
    scanf("%d", &sel);
	switch (sel)
    {
    	case 1:
		printf("�� �� �� �˶��� �︮���� �Ͻðڽ��ϱ�?");
    	scanf("%d", &min);
    	min *= 60; 
    	timer(min);
    	break;

        case 2:
    	printf("�� �� �� �˶��� �︮���� �Ͻðڽ��ϱ�?");
    	scanf("%d", &sec);
    	timer(sec);
    	break;
    }
    return 0;
}
