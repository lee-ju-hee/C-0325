#include <stdio.h>
#include <ctype.h>
#include <string.h>
void re_space(char cha_str[])
{
	int j;
	for(j =0; cha_str[j]!=NULL; j++)
    {
    	if(isspace(cha_str[j]))
    	{
    		strcpy(&cha_str[j], &cha_str[j+1]);
		}
	}
}
int main()
{
    char str[100];
    printf("문자열 입력:");
    scanf("%[^\n]s", str);

	re_space(str);
    int num=0, alp=0, spe_txt=0, i;
    for (i = 0; str[i]!= NULL; i++)
    {
    	if (str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z')
		{
        	alp++;
        }
        else if (isdigit(str[i]))
		{
        	num++;
		}
        else
		{
			spe_txt++;

        }
    }
	printf("숫자: %d개\n", num);
	printf("알파벳: %d개\n", alp);
	printf("특수기호: %d개\n", spe_txt);
	
	return 0;
}
