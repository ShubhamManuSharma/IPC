#include<stdio.h>

int main()
{
	unsigned long num=17777775;
	unsigned char byte[4];
	printf("num : %x\n",num);

	byte[0] = (num >> 24) & 0xff;
	byte[1] = (num >> 16) & 0xff;
	byte[2] = (num >> 8) & 0xff;
	byte[3] = num & 0xff;
	
	printf("%x %x %x %x\n",byte[0],byte[1],byte[2],byte[3]);
}
