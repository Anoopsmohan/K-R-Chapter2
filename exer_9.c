/* In a two's complement number system, x &= (x-1) deletes the rightmost 1 -bit
in x. Explain why. */

#include<stdio.h>
int bitcount(unsigned n);
main()
{
	unsigned x;
	printf("Enter x : ");
	scanf("%u",&x);
	printf("Number of 1's : %d\n",bitcount(x));
}

int bitcount(unsigned x)
{
	int b;
	for(b=0;x!=0; x&=(x-1))
		++b;
	return b;
}
