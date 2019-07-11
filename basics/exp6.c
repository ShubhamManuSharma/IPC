#include<stdio.h>

int main(){
	char n[]={'a','d','b','e','c'};
	char m[]="hello";
	char *p;
	p= n;
	printf("adder eve a[]:  a, d b e c\n");
	printf("adder eve a[]: %c\n",*p);
	printf("adder eve *p+1 %c\n",*p+1);
	p= n;
	printf("adder eve *(p+1) %c\n",*(p+1));
	p= n;
	printf("adder eve *(p+2) %c\n",*(p+2));
	p= n;
	printf("adder eve *(p+3) %c\n",*(p+3));
	p= n;
	printf("adder eve *(p+4) %c\n",*(p+4));
	p= n;
	printf("adder eve *(++p) %c\n",*(++p));
	p= n;
	printf("adder eve *p %c\n",*p);
	p= n;
	printf("adder eve *(p++) %c\n",*(p++));
	p= n;
	printf("adder eve ++*p: %c\n",++*p);
	p= n;
	printf("adder eve *p++: %c\n",*p++);
return 0;
}
