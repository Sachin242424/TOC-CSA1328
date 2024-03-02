#include<stdio.h>
#include<string.h>
int main()
{
	char s[100];
	printf("enter the string :\n");
	scanf("%s",s);
	if(s[0]=='0'&& s[strlen(s)-1]=='0'|| s[0]=='1'&& s[strlen(s)-1]=='1')
	{
		int i;
		for ( i==0;i<strlen(s);i++){
			if (s[i]<'0'|| s[i]>'1')
			{
				printf("invalid \n");
				return 0;
			}
		}
		printf(" valid ");
		
	}
	else {
		printf(" in valid");
	}
	return 0;
}
