/* Write a loop equivalent to for loop, for(i=0; i<lim-1 && 
(c=getchar())!='\n' && c!=EOF; ++i) without using && or || */

#include<stdio.h>
#define LIMIT 300
enum loop{false,true}

main()
{
	enum loop loop_ok=true; 
	int c,i=0;
	char s[LIMIT];
	while(loop_ok==true)
	{
		if(i>=LIMIT)
			loop_ok=false;
		else if((c=getchar())=='\n')
			loop_ok=false;
		else if(c==EOF)
			loop_ok=false;
		else
			s[i]=c;
			++i;
	}
	printf("Entered string is : %s\n",s);
}
