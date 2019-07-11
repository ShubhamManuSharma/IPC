#include<stdio.h>

//static extern int eve;
static int eve;
int main(){
	int a[]={5,16,7,18,9};
	int *p;
	p= &a;
	printf("adder eve a[]: 5,16,7,18,9 \n");
	printf("adder eve a[]: %d\n",*p);
	printf("adder eve *p+1 %d\n",*p+1);
	printf("adder eve *(p+1) %d\n",*(p+1));
	printf("adder eve *(p+2) %d\n",*(p+2));
	printf("adder eve *(p+3) %d\n",*(p+3));
	printf("adder eve *(p+4) %d\n",*(p+4));
	printf("adder eve *(++p) %d\n",*(++p));
	printf("adder eve *p %d\n",*p);
	printf("adder eve *(p++) %d\n",*(p++));
	printf("adder eve *p: %d\n",*p);
return 0;
}
