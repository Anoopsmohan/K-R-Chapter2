/* Write the function htoi(s), which converts a string of hexadecimal digits
including an optional 0x or 0X) into its equivalent integer value. The allowale
digits are 0 through 9, a through f, and A through F. */
 
#include<stdio.h>
#define LIMIT 100
int htoi(char str[]);
main()
{
	char str[LIMIT];
	int i,c,result;
	printf("Enter hexadecimal number: \n");
	for(i=0; i<LIMIT && (c=getchar())!=EOF && c!='\n';++i)
		str[i]=c;
		
	if(c=='\n')
		str[i]='\0';
	result=htoi(str);
	if(result == 0)
		printf("It is not a Hexadecimal number\n");
	else
		printf("Integer value : %d\n",result);

}

int htoi(char s[])
{
	int i=0,hex,x=1,result=0;
	if(s[i]=='0')
		++i;
		if(s[i]=='x' || s[i]=='X')
			++i;
	while(x==1 && s[i]!='\0')
	{
		if(s[i]>='0' && s[i]<='9')
			hex=s[i]-'0';
		else if(s[i]>='a' && s[i]<='f')
			hex= s[i]-'a'+10;
		else if(s[i]>='A' && s[i]<='F')
			hex=s[i]-'A'+10;
		else
			x=0;
		if(x==1)		
			result=16*result+hex;
		++i;
	}
	if (x==1)
		return result;
	else
		return 0;
}
