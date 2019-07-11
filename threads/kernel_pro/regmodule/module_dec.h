MODULE_AUTHOR ("Shubham Sharma");
MODULE_DESCRIPTION ("Basic teast kernel module");

static int data = 4;
module_param(data, int, 0);

static char *str = "Good time with you";
module_param(str, charp, 0);

static int arr[2] ={50,60};
static int arr_argc = 0;
module_param_array(arr,int, &arr_argc, 0 );
