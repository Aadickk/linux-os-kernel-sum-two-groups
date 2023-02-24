#include <linux/module.h>
#include <linux/init.h>

static int __init sum_init(void)
{
	int summary= (2129+2130)/10;
        printk("Our groups sum devided by 10 is %d\n",summary);
       	return 0;
}

static void __exit sum_exit(void)
{
        printk("Goodbye opersys");
}

module_init(sum_init);
module_exit(sum_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Adilet Temirgali, Aslan, Meruert, Adilkhan, Milana");
MODULE_DESCRIPTION("Kernel for operation systems");



