/* Write a function rightrot(x,n) that returns the value of the integer x
 rotated to the right by n bit positions. */

#include<stdio.h>
unsigned rightrot(unsigned x, int n);
int wordlength(void);
main()
{
	unsigned x,result;
	int n;
	printf("Enter x : ");
	scanf("%u",&x);
	printf("Number of Bits: ");
	scanf("%d",&n);
	result=rightrot(x,n);
	printf("\nResult : %x\n",result);

}

unsigned rightrot(unsigned x, int n)
{
	unsigned r_bits;
	int wl= wordlength();
	if((n= n % wl)>0){
 		r_bits = ((~(~0 << n ) & x) << (wl-n));
		x= ((x >> n) | r_bits);
	}
	return x;
}

int wordlength()
{
	int i;
	unsigned v=(unsigned)~0;
	for(i=1; (v = v >> 1)>0; i++) 
		;
	return i;
}
