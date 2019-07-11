#include "headers.h"
#include "module_dec.h"

//MODULE_PARAM_DESC(data"Integet type data\n");

static int reginit(void)
{
	int i;
	printk(KERN_INFO"hello kernel \n");
return 0;
}

static void regexit(void)
{
	printk(KERN_INFO"Goodbye kernel : %s\n",str);
}

module_init(reginit);
module_exit(regexit);
