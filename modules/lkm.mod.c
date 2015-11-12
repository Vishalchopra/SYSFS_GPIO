#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xae4b0ceb, "module_layout" },
	{ 0xf0567051, "kobject_put" },
	{ 0xe6da44a, "set_normalized_timespec" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x7ffc8718, "gpio_set_debounce" },
	{ 0x46608fa0, "getnstimeofday" },
	{ 0x47229b5c, "gpio_request" },
	{ 0x432fd7f6, "__gpio_set_value" },
	{ 0x1976aa06, "param_ops_bool" },
	{ 0x91715312, "sprintf" },
	{ 0x49fd477d, "kobject_create_and_add" },
	{ 0x65d6d0f0, "gpio_direction_input" },
	{ 0x27e1a049, "printk" },
	{ 0x20c55ae0, "sscanf" },
	{ 0x2e05e4e0, "sysfs_create_group" },
	{ 0xa8f59416, "gpio_direction_output" },
	{ 0x82f776b7, "gpio_export" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x11f447ce, "__gpio_to_irq" },
	{ 0xfe990052, "gpio_free" },
	{ 0x9d36c454, "kernel_kobj" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xe61a6d2f, "gpio_unexport" },
	{ 0x6d044c26, "param_ops_uint" },
	{ 0xf20dabd8, "free_irq" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "D418840C0BF95CB864B82C9");
