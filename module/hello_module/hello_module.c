#include <linux/init.h>
#include <linux/kernel.h>
#include <linux/module.h>

static char* cid;
static int sid;

int __init hello_module_init(void)
{
    printk("Hello, module! %s , %d\n", cid, sid);
    return 0;
}

void __exit hello_module_exit(void)
{
    printk("Bye, module!\n");
}

module_param(cid, charp, 0);
module_param(sid, int, 0);

module_init(hello_module_init);
module_exit(hello_module_exit);
MODULE_LICENSE("GPL");
