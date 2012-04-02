/* Write a program to determine the range of char, short, int and long
 variables, both signed and unsigned, by printing appropriate values by
 direct computation */

#include<stdio.h>
main()
{
	
	printf("signed char minimum : %d\n",-(char)((unsigned char) ~0 >>1));
        printf("signed char maximun : %d\n",(char)((unsigned char) ~0 >>1));
        printf("signed short minimum: %d\n",-(short)((unsigned short) ~0 >>1));
        printf("signed short maximum: %d\n",(short)((unsigned short) ~0 >>1));
        printf("signed int minimum  : %d\n",-(int)((unsigned int) ~0 >>1));
        printf("signed int maximum  : %d\n",(int)((unsigned int) ~0 >>1));
        printf("signed long minimum : %ld\n",-(long)((unsigned long) ~0 >>1));
        printf("signed long maximum : %ld\n",(long)((unsigned long) ~0 >>1));
        printf("\v");
        printf("Unsigned char maximum : %u\n",(unsigned char) ~0 );
        printf("Unsigned short maximum: %u\n",(unsigned short) ~0 );
        printf("Unsigned int maximum  : %u\n",(unsigned int) ~0 );
        printf("Unsigned long maximum : %lu\n",(unsigned long) ~0 );
}
