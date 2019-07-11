#include "headers.h"
#include "module_dec.h"
#include "declaration.h"

int GetDevNo (void)
{
	if(alloc_chrdev_region(&mydev, 0, NOD,DEVNAME) < 0 ){
		printk(KERN_ALERT"Alloc chrdev region fails\n");
	}
return 0;
}

static int moduleinit(void)
{
	mydev = MKDEV(45,0);
	if(register_chrdev_region(mydev,NOD,DEVNAME)== 0) {
		//GetDevNo();
		printk(KERN_INFO"hello kernel : major : %d, minor : %d \n",MAJOR(mydev),MINOR(mydev));
	}else
		printk(KERN_INFO"Device registeration fails\n");
return 0;
}

static void moduleexit(void)
{
	printk(KERN_INFO"Goodbye kernel : \n");
	unregister_chrdev_region(MKDEV(MAJOR(mydev),MINOR(mydev)), NOD);
}

module_init(moduleinit);
module_exit(moduleexit);
