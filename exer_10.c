/* write a function lower, which converts upper case letters to lower case with
a conditional expression instead of if - else. */

#include<stdio.h>
void lower(char str[]);
main()
{
	char str[300];
	printf("Enter a string :");
	gets(str);
	lower(str);
}

void lower(char str[])
{
	int i;
	char s[300];
	for(i=0; str[i]!='\0'; ++i)
		s[i]=(str[i]>='A' && str[i] <= 'Z')? (str[i]- 'A' + 'a'): str[i];
	s[i]='\0';
	printf("Lower case form : %s\n",s);
}
