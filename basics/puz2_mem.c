/*byte representation of value */

#include<stdio.h>

typedef unsigned char *byte_parm;

int show_byte(byte_parm var, size_t len){
	int i;
	for(i=0;i<len;i++)
	{
		printf("%.2x",var[i]);
	}
	printf("\n");
return 0;
}

int show_int(int x){
	show_byte((byte_parm)&x,sizeof(x));
}

int show_float(float x){
	show_byte((byte_parm)&x,sizeof(x));
}

int show_ptr(int *x){
	show_byte((byte_parm)&x,sizeof(x));
}

int main()
{
	int i=1;
	float fn=3.67 ;
	int *p=&i;

	show_int(i);
	show_float(fn);
	show_int(i);
	show_ptr(p);

return 0;
}
