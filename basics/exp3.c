#include<stdio.h>

//static extern int eve;
static int eve;
int main(){
	int a=5;
	printf("size of a %ld\n",sizeof(a++));
	printf("val a %d\n",a);
	printf("size of a %ld\n",sizeof(++a));
	printf("val a %d\n",a);
return 0;
}
