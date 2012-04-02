/* Write a function setbits(x,p,n,y) that returns x with the n bits that begin
at position p set to the rightmost n bits of y, leaving the other bits unchanged.*/

#include<stdio.h>
unsigned setbits(unsigned x, int p, int n, unsigned y);
main()
{
	unsigned result, x,y;
	int p,n;
	printf("Enter x : ");
	scanf("%u",&x);
	printf("Enter y : ");
	scanf("%u",&y);
	printf("Bit position : ");
	scanf("%d",&p);
	printf("Number of Bits: ");
	scanf("%d",&n);
	result=setbits(x,p,n,y);
	printf("\nResult : %u\n",result);
}

unsigned setbits(unsigned x, int p, int n, unsigned y)
{
	return (x & ~(~(~0 << n) << (p+1-n)) | (y & ~(~0 <<n)) << (p+1-n));
}
