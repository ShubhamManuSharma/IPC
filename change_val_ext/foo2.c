#include"h.h"
int foo(){
	printf("a = %d addr : %p\n",a, &a);
	a += a;
return 0;
}
