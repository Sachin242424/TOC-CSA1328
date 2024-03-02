#include<stdio.h>
#include<string.h>
int main()
{
	
	char s[100];
	printf("enter the string : ");
	scanf("%s",s);
	if(s[0]=='0' && s[strlen(s)-1]=='1')
	
	{
	 
	  for (int i=0;i<strlen(s);i++){
	  	if(s[i]<'0'||s[i]>'1')
	  	{
	  		
	  		printf("invalid! \n");
	  		return 0;
		  }
	  	
	  	
	  	
	  }
	  
	  printf("valid the strings starts with 0  and end with 1");
}
else{
	printf("invalid! the strings does'nt starts with 0 and ends with 1");
	
}
	  	
		
	return 0;
	
}
