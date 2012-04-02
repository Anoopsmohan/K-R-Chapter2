/* Write a function squeeze(s1,s2) that deletes each character in s1 that
 matches any character in the string s2. */

#include<stdio.h>
#define MAX 100
void squeeze(char s1[],char s2[]);
main()
{
	char s1[MAX], s2[MAX];
	printf("Enter first string : ");
	scanf("%s",s1);
	printf("Enter second string : ");
	scanf("%s",s2);
	squeeze(s1,s2);
}

void squeeze(char s1[],char s2[])
{
	int i,j,k;
	char s3[MAX];
	for(i=j=0; s1[i]!='\0'; ++i){
		for(k=0;s2[k]!='\0';++k)
			if(s1[i]==s2[k])
				++i;
		s3[j++]=s1[i];
	}
	s3[j]='\0';
	printf("Result : %s\n",s3);
}
