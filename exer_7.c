/* Write a function invert(x,p,n) that returns x with the n bits that begin at 
position p inverted (i.e, 1 changed in to 0 and vice versa), leaving the others unchanged. */

#include<stdio.h>
unsigned invert(unsigned x, int p, int n);
main()
{
	unsigned result, x;
	int p,n;
	printf("Enter x : ");
	scanf("%u",&x);
	printf("Bit position : ");
	scanf("%d",&p);
	printf("Number of Bits: ");
	scanf("%d",&n);
	result=invert(x,p,n);
	printf("\nResult : %u\n",result);
}

unsigned invert(unsigned x, int p, int n)
{
	return (x ^(~ (~0 << n) << (p+1-n)));
}
