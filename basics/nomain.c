/* gcc nomain.c -nostartfiles */
/* nomainfiles tell compiler to avoid standrd linking */
#include<stdio.h>
#include<stdlib.h>

int nomain();

void _start(){
	nomain();
	exit(0);
}

int nomain(){
	printf("%s\n",__func__);
return 0;
}
