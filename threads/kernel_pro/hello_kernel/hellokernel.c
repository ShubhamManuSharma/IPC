#include<linux/init.h>
#include<linux/module.h>

//MODULE_LICENCE("GPL");

static int hello_init(void)
{
	printk(KERN_INFO"Hello kernel\n");
	return 0;
}

static void hello_exit(void)
{
	printk(KERN_INFO"GoodBye kernel\n");
}

module_init(hello_init);
module_exit(hello_exit);
