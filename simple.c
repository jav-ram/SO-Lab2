#include <linux/init.h>
#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/list.h>

int simple_init(void){
	printk(KERN_INFO "Loading Module\nHELLO THERE");
	

	return 0;
}

void simple_exit(void){
	printk(KERN_INFO "Removing Module\nGENERAL KENOBI");
}

module_init(simple_init);
module_exit(simple_exit);
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Description");
MODULE_AUTHOR("Javier Ramos");

