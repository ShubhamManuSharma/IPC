#include<stdio.h>

#define getsize(type)	((char *)(type+1)-(char *)type)

int main()
{
	int i;
	float f;
	int *p=&i;
	int arr[5];
	printf("sizeof i : %ld\n",getsize(&i));
	printf("sizeof f : %ld\n",getsize(&f));
	printf("sizeof p : %ld\n",getsize(&p));
	printf("sizeof arr : %ld\n",getsize(&arr));
	printf("sizeof arr[0] : %ld\n",getsize(&arr[0]));
return 0;
}
