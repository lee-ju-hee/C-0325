#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void time_division(char num[])
{
	int hour, min, sec;
	char time_return[50];
	
	do
	{	
		printf("올바르지 않은 문자열입니다.\n");
		printf("시간을 입력해주세요.(ex 13:7:25 or 130725): ");
		scanf("%s", &num);
		
		if(strchr(num, ':'))
		{
			if(num[4] == ':')
			{
				memmove(time_return, num, 2);
				memmove(time_return+2, "0", 1);
				memmove(time_return+3, num+3, 1);
				memmove(time_return+4, num+5, 3);
			}
			else
			{
        		memmove(time_return, num, 2);
        		memmove(time_return+2, num+3, 2); 
        		memmove(time_return+4, num+6, 3);
    		}
		}
		else
		{
    		memmove(time_return, num, 2); 
    		memmove(time_return+2, num+2, 2);
    		memmove(time_return+4, num+4, 3);
		}
		hour = atoi(time_return) / 10000;
		min = atoi(time_return) % 10000 / 100;
		sec = atoi(time_return) % 100;
	}
	while((hour > 23 || min > 59 || sec > 59));

	if(hour > 12)
	{
		printf("오후 %d시 %d분 %d초 입니다.", hour-12, min, sec);
	}
	else
	{
		printf("오전  %d시 %d분 %d초 입니다.", hour, min, sec);
	}
	
}

int main()
{
	char num[50];
	
	printf("시간을 입력해주세요.(ex 13:7:25 or 130725): ");
	scanf("%s", num);
	
	time_division(num);  
	return 0;   
}


