/* Write a program to determine the range of char, short, int and long
variables, both signed and unsigned, by printing appropriate values from
 standard headers */

#include<stdio.h>
#include<limits.h>
main()
{
	printf("signed char minimum : %d\n",SCHAR_MIN);
	printf("signed char maximun : %d\n",SCHAR_MAX);
	printf("signed short minimum: %d\n",SHRT_MIN);
	printf("signed short maximum: %d\n",SHRT_MAX);
	printf("signed int minimum  : %d\n",INT_MIN);
	printf("signed int maximum  : %d\n",INT_MAX);
	printf("signed long minimum : %ld\n",LONG_MIN);
	printf("signed long maximum : %ld\n",LONG_MAX);
	printf("\v");
	printf("Unsigned char maximum : %u\n",UCHAR_MAX);
	printf("Unsigned short maximum: %u\n",USHRT_MAX);
	printf("Unsigned int maximum  : %u\n",UINT_MAX);
	printf("Unsigned long maximum : %lu\n",ULONG_MAX);
}

