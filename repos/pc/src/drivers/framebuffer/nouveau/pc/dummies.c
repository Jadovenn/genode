
#include <lx_emul.h>

#include <acpi/video.h>


void acpi_video_unregister(void)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/acpi.h>

acpi_status acpi_remove_address_space_handler(acpi_handle device,
                                              acpi_adr_space_type space_id,
                                              acpi_adr_space_handler handler)
{
	lx_emul_trace_and_stop(__func__);
}


int acpi_video_register(void)
{
	lx_emul_trace(__func__);
	return 0;
}


acpi_status acpi_get_name(acpi_handle object, u32 name_type,
                          struct acpi_buffer *ret_path_ptr)
{
	lx_emul_trace_and_stop(__func__);
}

typedef u32 acpi_status;
struct acpi_resource;

extern acpi_status acpi_buffer_to_resource(u8 * aml_buffer,u16 aml_buffer_length,struct acpi_resource ** resource_ptr);
acpi_status acpi_buffer_to_resource(u8 * aml_buffer,u16 aml_buffer_length,struct acpi_resource ** resource_ptr)
{
	lx_emul_trace_and_stop(__func__);
}


struct acpi_device;

extern int acpi_bus_get_status(struct acpi_device * device);
int acpi_bus_get_status(struct acpi_device * device)
{
	lx_emul_trace_and_stop(__func__);
}


void acpi_device_notify(struct device * dev)
{
	lx_emul_trace(__func__);
}


#include <asm/smp.h>

DEFINE_PER_CPU_READ_MOSTLY(cpumask_var_t, cpu_sibling_map);


const struct attribute_group dev_attr_physical_location_group = {};


#include <linux/acpi.h>
#include <acpi/acpi.h>
#include <acpi/acpi_bus.h>
#include <acpi/acpixf.h>


acpi_status acpi_evaluate_object(acpi_handle handle,
             acpi_string pathname,
             struct acpi_object_list *external_params,
             struct acpi_buffer *return_buffer)
{
	lx_emul_trace_and_stop(__func__);
}


const char *acpi_format_exception(acpi_status status)
{
	(void)status;
	lx_emul_trace_and_stop(__func__);
	return NULL;
}

void copy_page(void *to, void *from)
{
	memcpy(to, from, PAGE_SIZE);
}

