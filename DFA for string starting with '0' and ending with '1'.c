#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    int k=0;
    printf("Enter a string:");
    scanf("%s",s);
    int n=strlen(s);
    for(int i=0;i<strlen(s);i++){
        if(s[0]=='0' && s[n-1]=='1'){
            if(s[i]==0 || s[i]==1){
                return 0;
            }
            k=1;
        }
        
    }
    if(k==1){
        printf("The string is accepted");
    }
    else {
        printf("The sring is not accepted");
        }
    return 0;
}
