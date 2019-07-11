#include<stdio.h>

//static extern int eve;
static int eve;
int main(){
	char *str="inventum";
	char *p;
	p= str;
	printf("adder eve p: inventum \n");
	printf("adder eve p: %s\n",p);
	printf("adder eve *p+1 %c\n",*p+1);
	printf("adder eve *(p+1) %c\n",*(p+1));
	printf("adder eve *(p+2) %c\n",*(p+2));
	printf("adder eve *(p+3) %c\n",*(p+3));
	printf("adder eve *(p+4) %c\n",*(p+4));
	printf("adder eve *(++p) %c\n",*(++p));
	printf("adder eve *p %c\n",*p);
	printf("adder eve *(p++) %c\n",*(p++));
	printf("adder eve *p: %s\n",p);
return 0;
}
