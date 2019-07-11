#include<stdio.h>

int main()
{
	int arr[5]={1,2,3,4,5};
	printf("sizeof arr : %x\n",&arr);
	printf("sizeof arr[0] : %d \t%x\n",arr[0],&arr[0]);
	printf("sizeof arr[1] : %d \t%x\n",arr[1],&arr[1]);
	printf("sizeof arr[2] : %d \t%x\n",arr[2],&arr[2]);
	printf("sizeof arr[3] : %d \t%x\n",arr[3],&arr[3]);
	printf("\n\n");
	int *p;
	p=arr;
	(*p)++;		/* increament value */
	printf("prr (*p)++: %d : Add : %x\n",*p,p);
	p++; 		/* increament addres */
	printf("prr p++   : %d : add : %x\n",*p,p);
	*(p++);		/* increament address */
	printf("prr *(p++): %d : Add : %x\n",*p,p);
	*p++;		/* increament address */
	printf("prr *p++  : %d : Add : %x\n",*p,p);
return 0;
}
