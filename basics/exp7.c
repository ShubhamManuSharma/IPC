#include<stdio.h>

int main(){
	char m[]="hello";
	char *p="hello",**s, *ptr;
	s = &p;
	ptr = p;
	printf("adder eve *p++: %s\n",p);
	printf("adder eve s: %s\n",*s);
	++s;
	printf("adder eve *p++: %s\n",p);
	printf("adder eve s: %s\n",*s);
	++ptr;
	printf("adder eve *p++: %s\n",p);
	printf("adder eve ptr: %s\n",ptr);
return 0;
}
