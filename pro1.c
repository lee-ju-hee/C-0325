#include <stdio.h>
#include <string.h>
int main()
{
	char word[] = "Lee Ju Hee";
	int i, length;
	length=strlen(word);
	
	printf("원본: %s\n", word);
	
	for(i=0; i<length; i++)
	{
		if((word[i]>='a' && word[i]<='z'))
		{
			word[i]=toupper(word[i]);
		}
		else
		{
			if((word[i]>='A' && word[i]<='Z'))
			{
				word[i]=tolower(word[i]);
			}
		}
	}
	printf("변환: %s", word);
	return 0;
}
