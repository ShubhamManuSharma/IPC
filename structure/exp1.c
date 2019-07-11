#include<stdio.h>

typedef struct anm{
	int x;
	char y;
}anm;

typedef struct anm1{
	char y;
	int x;
}anm1;

typedef struct anm2{
	short z;
	char y;
}anm2;

typedef struct anm3{
	short z;
	char y;
	int x;
}anm3;

typedef struct anm4{
	short z;
	int x;
	char y;
}anm4;

int main(){
	printf("anm :  %ld\n",sizeof(anm));
	printf("anm1 :  %ld\n",sizeof(anm1));
	printf("anm2 :  %ld\n",sizeof(anm2));
	printf("anm3 :  %ld\n",sizeof(anm3));
	printf("anm4 :  %ld\n",sizeof(anm4));
return 0;
}
