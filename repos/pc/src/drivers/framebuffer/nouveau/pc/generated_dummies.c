/*
 * \brief  Dummy definitions of Linux Kernel functions
 * \author Automatically generated file - do no edit
 * \date   2023-10-06
 */

#include <lx_emul.h>


#include <drm/drm_print.h>

void ___drm_dbg(struct _ddebug * desc,enum drm_debug_category category,const char * format,...)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/ratelimit_types.h>

int ___ratelimit(struct ratelimit_state * rs,const char * func)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/skbuff.h>

struct sk_buff * __alloc_skb(unsigned int size,gfp_t gfp_mask,int flags,int node)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/cpumask.h>

struct cpumask __cpu_active_mask;


#include <linux/cpuhotplug.h>

int __cpuhp_setup_state(enum cpuhp_state state,const char * name,bool invoke,int (* startup)(unsigned int cpu),int (* teardown)(unsigned int cpu),bool multi_instance)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_atomic_state_helper.h>

void __drm_atomic_helper_connector_destroy_state(struct drm_connector_state * state)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_atomic_state_helper.h>

void __drm_atomic_helper_connector_duplicate_state(struct drm_connector * connector,struct drm_connector_state * state)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_atomic_state_helper.h>

void __drm_atomic_helper_connector_reset(struct drm_connector * connector,struct drm_connector_state * conn_state)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_atomic_state_helper.h>

void __drm_atomic_helper_crtc_destroy_state(struct drm_crtc_state * state)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_atomic_state_helper.h>

void __drm_atomic_helper_crtc_duplicate_state(struct drm_crtc * crtc,struct drm_crtc_state * state)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_atomic_state_helper.h>

void __drm_atomic_helper_crtc_reset(struct drm_crtc * crtc,struct drm_crtc_state * crtc_state)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_atomic_state_helper.h>

void __drm_atomic_helper_plane_destroy_state(struct drm_plane_state * state)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_atomic_state_helper.h>

void __drm_atomic_helper_plane_duplicate_state(struct drm_plane * plane,struct drm_plane_state * state)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_atomic_state_helper.h>

void __drm_atomic_helper_plane_reset(struct drm_plane * plane,struct drm_plane_state * plane_state)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_atomic.h>

void __drm_atomic_state_free(struct kref * ref)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_print.h>

unsigned long __drm_debug;


#include <drm/drm_print.h>

void __drm_dev_dbg(struct _ddebug * desc,const struct device * dev,enum drm_debug_category category,const char * format,...)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_print.h>

void __drm_printfn_debug(struct drm_printer * p,struct va_format * vaf)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_plane.h>

void * __drm_universal_plane_alloc(struct drm_device * dev,size_t size,size_t offset,uint32_t possible_crtcs,const struct drm_plane_funcs * funcs,const uint32_t * formats,unsigned int format_count,const uint64_t * format_modifiers,enum drm_plane_type type,const char * name,...)
{
	lx_emul_trace_and_stop(__func__);
}


//#include <asm-generic/sections.h>

//char __start_rodata[], __end_rodata[] = {};


#include <linux/mm.h>

void __folio_put(struct folio * folio)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/sched.h>

char * __get_task_comm(char * buf,size_t buf_size,struct task_struct * tsk)
{
	lx_emul_trace_and_stop(__func__);
}


#include <asm-generic/delay.h>

void __ndelay(unsigned long nsecs)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/netlink.h>

struct sock * __netlink_kernel_create(struct net * net,int unit,struct module * module,struct netlink_kernel_cfg * cfg)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/printk.h>

void __printk_safe_enter(void)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/printk.h>

void __printk_safe_exit(void)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/sched/task.h>

void __put_task_struct(struct task_struct * tsk)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/sysctl.h>

void __init __register_sysctl_init(const char * path,struct ctl_table * table,const char * table_name)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/srcu.h>

int __srcu_read_lock(struct srcu_struct * ssp)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/srcu.h>

void __srcu_read_unlock(struct srcu_struct * ssp,int idx)
{
	lx_emul_trace_and_stop(__func__);
}


//#include <asm-generic/sections.h>

//char __start_rodata[], __end_rodata[] = {};


#include <linux/vmalloc.h>

void * __vmalloc_node_range(unsigned long size,unsigned long align,unsigned long start,unsigned long end,gfp_t gfp_mask,pgprot_t prot,unsigned long vm_flags,int node,const void * caller)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/uaccess.h>

unsigned long _copy_from_user(void * to,const void __user * from,unsigned long n)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/uaccess.h>

unsigned long _copy_to_user(void __user * to,const void * from,unsigned long n)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/printk.h>

int _printk_deferred(const char * fmt,...)
{
	lx_emul_trace_and_stop(__func__);
}


extern void ack_bad_irq(unsigned int irq);
void ack_bad_irq(unsigned int irq)
{
	lx_emul_trace_and_stop(__func__);
}

#include <linux/acpi.h>
#include <acpi/acpi_bus.h>

int acpi_bus_attach_private_data(acpi_handle handle,void * data)
{
	lx_emul_trace_and_stop(__func__);
}


#include <acpi/acpi_bus.h>

void acpi_bus_detach_private_data(acpi_handle handle)
{
	lx_emul_trace_and_stop(__func__);
}


#include <acpi/acpi_bus.h>

int acpi_bus_get_private_data(acpi_handle handle,void ** data)
{
	lx_emul_trace_and_stop(__func__);
}


#include <acpi/acpi_bus.h>

void acpi_dev_clear_dependencies(struct acpi_device * supplier)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/acpi.h>

void acpi_dev_free_resource_list(struct list_head * list)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/acpi.h>

int acpi_dev_get_resources(struct acpi_device * adev,struct list_head * list,int (* preproc)(struct acpi_resource *,void *),void * preproc_data)
{
	lx_emul_trace_and_stop(__func__);
}


#include <acpi/acpi_bus.h>

bool acpi_dev_ready_for_enumeration(const struct acpi_device * device)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/acpi.h>

bool acpi_dev_resource_interrupt(struct acpi_resource * ares,int index,struct resource * res)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/acpi.h>

void acpi_device_notify(struct device * dev)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/acpi.h>

void acpi_device_notify_remove(struct device * dev)
{
	lx_emul_trace_and_stop(__func__);
}


#include <acpi/acpi_bus.h>

struct acpi_device * acpi_fetch_acpi_dev(acpi_handle handle)
{
	lx_emul_trace_and_stop(__func__);
}


//extern ACPI_MODULE_NAME (utexcep)const char * acpi_format_exception(acpi_status status);
//ACPI_MODULE_NAME (utexcep)const char * acpi_format_exception(acpi_status status)
//{
//	lx_emul_trace_and_stop(__func__);
//}


extern acpi_status acpi_get_handle(acpi_handle parent,acpi_string pathname,acpi_handle * ret_handle);
acpi_status acpi_get_handle(acpi_handle parent,acpi_string pathname,acpi_handle * ret_handle)
{
	lx_emul_trace_and_stop(__func__);
}


extern acpi_status acpi_install_address_space_handler(acpi_handle device,acpi_adr_space_type space_id,acpi_adr_space_handler handler,acpi_adr_space_setup setup,void * context);
acpi_status acpi_install_address_space_handler(acpi_handle device,acpi_adr_space_type space_id,acpi_adr_space_handler handler,acpi_adr_space_setup setup,void * context)
{
	lx_emul_trace_and_stop(__func__);
}


#include <acpi/button.h>

int acpi_lid_open(void)
{
	lx_emul_trace_and_stop(__func__);
}


#include <acpi/acpi_bus.h>

int acpi_match_device_ids(struct acpi_device * device,const struct acpi_device_id * ids)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/acpi.h>

int acpi_reconfig_notifier_register(struct notifier_block * nb)
{
	lx_emul_trace_and_stop(__func__);
}


#include <acpi/acpi_bus.h>

void acpi_set_modalias(struct acpi_device * adev,const char * default_id,char * modalias,size_t len)
{
	lx_emul_trace_and_stop(__func__);
}


#include <acpi/video.h>

bool acpi_video_backlight_use_native(void)
{
	lx_emul_trace_and_stop(__func__);
}


#include <acpi/video.h>

int acpi_video_get_edid(struct acpi_device * device,int type,int device_id,void ** edid)
{
	lx_emul_trace_and_stop(__func__);
}


#include <acpi/video.h>

void acpi_video_register_backlight(void)
{
	lx_emul_trace_and_stop(__func__);
}


extern acpi_status acpi_walk_namespace(acpi_object_type type,acpi_handle start_object,u32 max_depth,acpi_walk_callback descending_callback,acpi_walk_callback ascending_callback,void * context,void ** return_value);
acpi_status acpi_walk_namespace(acpi_object_type type,acpi_handle start_object,u32 max_depth,acpi_walk_callback descending_callback,acpi_walk_callback ascending_callback,void * context,void ** return_value)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/random.h>

void add_interrupt_randomness(int irq)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/clocksource.h>

void clocksource_arch_init(struct clocksource * cs)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/console.h>

void console_lock(void)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/console.h>

void console_unlock(void)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/arch_topology.h>

const struct cpumask * cpu_clustergroup_mask(int cpu)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/cpu.h>

void cpu_hotplug_disable(void)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/cpu.h>

void cpu_hotplug_enable(void)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/pm_qos.h>

void cpu_latency_qos_add_request(struct pm_qos_request * req,s32 value)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/context_tracking_irq.h>

noinstr void ct_irq_enter(void)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/context_tracking_irq.h>

noinstr void ct_irq_exit(void)
{
	lx_emul_trace_and_stop(__func__);
}


extern bool dev_add_physical_location(struct device * dev);
bool dev_add_physical_location(struct device * dev)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/property.h>

int device_add_software_node(struct device * dev,const struct software_node * node)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/property.h>

void device_remove_software_node(struct device * dev)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/netlink.h>

void do_trace_netlink_extack(const char * msg)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_edid.h>

int drm_add_edid_modes(struct drm_connector * connector,struct edid * edid)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_aperture.h>

int drm_aperture_remove_conflicting_pci_framebuffers(struct pci_dev * pdev,const struct drm_driver * req_driver)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_atomic.h>

int drm_atomic_add_affected_planes(struct drm_atomic_state * state,struct drm_crtc * crtc)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_atomic.h>

struct drm_crtc_state * drm_atomic_get_crtc_state(struct drm_atomic_state * state,struct drm_crtc * crtc)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/display/drm_dp_mst_helper.h>

struct drm_dp_mst_atomic_payload * drm_atomic_get_mst_payload_state(struct drm_dp_mst_topology_state * state,struct drm_dp_mst_port * port)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/display/drm_dp_mst_helper.h>

struct drm_dp_mst_topology_state * drm_atomic_get_mst_topology_state(struct drm_atomic_state * state,struct drm_dp_mst_topology_mgr * mgr)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_atomic_helper.h>

void drm_atomic_helper_calc_timestamping_constants(struct drm_atomic_state * state)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_atomic_helper.h>

int drm_atomic_helper_check(struct drm_device * dev,struct drm_atomic_state * state)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_atomic_helper.h>

int drm_atomic_helper_check_plane_state(struct drm_plane_state * plane_state,const struct drm_crtc_state * crtc_state,int min_scale,int max_scale,bool can_position,bool can_update_disabled)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_atomic_helper.h>

void drm_atomic_helper_cleanup_planes(struct drm_device * dev,struct drm_atomic_state * old_state)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_atomic_helper.h>

void drm_atomic_helper_commit_cleanup_done(struct drm_atomic_state * old_state)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_atomic_helper.h>

void drm_atomic_helper_commit_hw_done(struct drm_atomic_state * old_state)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_atomic_helper.h>

int drm_atomic_helper_disable_plane(struct drm_plane * plane,struct drm_modeset_acquire_ctx * ctx)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_atomic_helper.h>

int drm_atomic_helper_page_flip(struct drm_crtc * crtc,struct drm_framebuffer * fb,struct drm_pending_vblank_event * event,uint32_t flags,struct drm_modeset_acquire_ctx * ctx)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_atomic_helper.h>

int drm_atomic_helper_prepare_planes(struct drm_device * dev,struct drm_atomic_state * state)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_atomic_helper.h>

int drm_atomic_helper_resume(struct drm_device * dev,struct drm_atomic_state * state)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_atomic_helper.h>

int drm_atomic_helper_set_config(struct drm_mode_set * set,struct drm_modeset_acquire_ctx * ctx)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_atomic_helper.h>

int drm_atomic_helper_setup_commit(struct drm_atomic_state * state,bool nonblock)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_atomic_helper.h>

void drm_atomic_helper_shutdown(struct drm_device * dev)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_atomic_helper.h>

struct drm_atomic_state * drm_atomic_helper_suspend(struct drm_device * dev)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_atomic_helper.h>

int drm_atomic_helper_swap_state(struct drm_atomic_state * state,bool stall)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_atomic_helper.h>

void drm_atomic_helper_update_legacy_modeset_state(struct drm_device * dev,struct drm_atomic_state * old_state)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_atomic_helper.h>

int drm_atomic_helper_update_plane(struct drm_plane * plane,struct drm_crtc * crtc,struct drm_framebuffer * fb,int crtc_x,int crtc_y,unsigned int crtc_w,unsigned int crtc_h,uint32_t src_x,uint32_t src_y,uint32_t src_w,uint32_t src_h,struct drm_modeset_acquire_ctx * ctx)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_atomic_helper.h>

void drm_atomic_helper_wait_for_dependencies(struct drm_atomic_state * old_state)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_atomic_helper.h>

int drm_atomic_helper_wait_for_fences(struct drm_device * dev,struct drm_atomic_state * state,bool pre_swap)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_atomic.h>

void drm_atomic_state_default_clear(struct drm_atomic_state * state)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_atomic.h>

void drm_atomic_state_default_release(struct drm_atomic_state * state)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_atomic.h>

int drm_atomic_state_init(struct drm_device * dev,struct drm_atomic_state * state)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_connector.h>

int drm_connector_attach_encoder(struct drm_connector * connector,struct drm_encoder * encoder)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_connector.h>

void drm_connector_cleanup(struct drm_connector * connector)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_connector.h>

int drm_connector_init(struct drm_device * dev,struct drm_connector * connector,const struct drm_connector_funcs * funcs,int connector_type)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_connector.h>

void drm_connector_list_iter_begin(struct drm_device * dev,struct drm_connector_list_iter * iter)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_connector.h>

void drm_connector_list_iter_end(struct drm_connector_list_iter * iter)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_connector.h>

struct drm_connector * drm_connector_list_iter_next(struct drm_connector_list_iter * iter)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_connector.h>

int drm_connector_register(struct drm_connector * connector)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_connector.h>

int drm_connector_set_path_property(struct drm_connector * connector,const char * path)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_connector.h>

void drm_connector_unregister(struct drm_connector * connector)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_connector.h>

int drm_connector_update_edid_property(struct drm_connector * connector,const struct edid * edid)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_vblank.h>

u64 drm_crtc_accurate_vblank_count(struct drm_crtc * crtc)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_vblank.h>

void drm_crtc_arm_vblank_event(struct drm_crtc * crtc,struct drm_pending_vblank_event * e)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_crtc.h>

void drm_crtc_cleanup(struct drm_crtc * crtc)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_color_mgmt.h>

void drm_crtc_enable_color_mgmt(struct drm_crtc * crtc,uint degamma_lut_size,bool has_ctm,uint gamma_lut_size)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_vblank.h>

bool drm_crtc_handle_vblank(struct drm_crtc * crtc)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_crtc_helper.h>

int drm_crtc_helper_set_config(struct drm_mode_set * set,struct drm_modeset_acquire_ctx * ctx)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_crtc_helper.h>

bool drm_crtc_helper_set_mode(struct drm_crtc * crtc,struct drm_display_mode * mode,int x,int y,struct drm_framebuffer * old_fb)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_crtc.h>

int drm_crtc_init_with_planes(struct drm_device * dev,struct drm_crtc * crtc,struct drm_plane * primary,struct drm_plane * cursor,const struct drm_crtc_funcs * funcs,const char * name,...)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_vblank.h>

void drm_crtc_send_vblank_event(struct drm_crtc * crtc,struct drm_pending_vblank_event * e)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_vblank.h>

int drm_crtc_vblank_get(struct drm_crtc * crtc)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_vblank.h>

bool drm_crtc_vblank_helper_get_vblank_timestamp(struct drm_crtc * crtc,int * max_error,ktime_t * vblank_time,bool in_vblank_irq)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_vblank.h>

void drm_crtc_vblank_off(struct drm_crtc * crtc)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_vblank.h>

void drm_crtc_vblank_on(struct drm_crtc * crtc)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_vblank.h>

void drm_crtc_vblank_put(struct drm_crtc * crtc)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_modes.h>

struct drm_display_mode * drm_cvt_mode(struct drm_device * dev,int hdisplay,int vdisplay,int vrefresh,bool reduced,bool interlaced,bool margins)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_edid.h>

bool drm_detect_hdmi_monitor(const struct edid * edid)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_edid.h>

bool drm_detect_monitor_audio(const struct edid * edid)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_drv.h>

struct drm_device * drm_dev_alloc(const struct drm_driver * driver,struct device * parent)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_drv.h>

bool drm_dev_enter(struct drm_device * dev,int * idx)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_drv.h>

void drm_dev_exit(int idx)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_drv.h>

void drm_dev_put(struct drm_device * dev)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_drv.h>

int drm_dev_register(struct drm_device * dev,unsigned long flags)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_drv.h>

void drm_dev_unplug(struct drm_device * dev)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/display/drm_dp_mst_helper.h>

int drm_dp_add_payload_part1(struct drm_dp_mst_topology_mgr * mgr,struct drm_dp_mst_topology_state * mst_state,struct drm_dp_mst_atomic_payload * payload)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/display/drm_dp_mst_helper.h>

int drm_dp_add_payload_part2(struct drm_dp_mst_topology_mgr * mgr,struct drm_atomic_state * state,struct drm_dp_mst_atomic_payload * payload)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/display/drm_dp_mst_helper.h>

int drm_dp_atomic_find_time_slots(struct drm_atomic_state * state,struct drm_dp_mst_topology_mgr * mgr,struct drm_dp_mst_port * port,int pbn)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/display/drm_dp_mst_helper.h>

int drm_dp_atomic_release_time_slots(struct drm_atomic_state * state,struct drm_dp_mst_topology_mgr * mgr,struct drm_dp_mst_port * port)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/display/drm_dp_helper.h>

void drm_dp_aux_init(struct drm_dp_aux * aux)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/display/drm_dp_helper.h>

int drm_dp_aux_register(struct drm_dp_aux * aux)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/display/drm_dp_helper.h>

void drm_dp_aux_unregister(struct drm_dp_aux * aux)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/display/drm_dp_mst_helper.h>

int drm_dp_calc_pbn_mode(int clock,int bpp,bool dsc)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/display/drm_dp_mst_helper.h>

int drm_dp_check_act_status(struct drm_dp_mst_topology_mgr * mgr)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/display/drm_dp_helper.h>

int drm_dp_downstream_max_dotclock(const u8 dpcd[DP_RECEIVER_CAP_SIZE],const u8 port_cap[4])
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/display/drm_dp_helper.h>

ssize_t drm_dp_dpcd_read(struct drm_dp_aux * aux,unsigned int offset,void * buffer,size_t size)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/display/drm_dp_helper.h>

ssize_t drm_dp_dpcd_write(struct drm_dp_aux * aux,unsigned int offset,void * buffer,size_t size)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/display/drm_dp_mst_helper.h>

int drm_dp_get_vc_payload_bw(const struct drm_dp_mst_topology_mgr * mgr,int link_rate,int link_lane_count)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/display/drm_dp_mst_helper.h>

int drm_dp_mst_atomic_check(struct drm_atomic_state * state)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/display/drm_dp_mst_helper.h>

int drm_dp_mst_atomic_setup_commit(struct drm_atomic_state * state)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/display/drm_dp_mst_helper.h>

void drm_dp_mst_atomic_wait_for_dependencies(struct drm_atomic_state * state)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/display/drm_dp_mst_helper.h>

int drm_dp_mst_detect_port(struct drm_connector * connector,struct drm_modeset_acquire_ctx * ctx,struct drm_dp_mst_topology_mgr * mgr,struct drm_dp_mst_port * port)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/display/drm_dp_mst_helper.h>

struct edid * drm_dp_mst_get_edid(struct drm_connector * connector,struct drm_dp_mst_topology_mgr * mgr,struct drm_dp_mst_port * port)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/display/drm_dp_mst_helper.h>

void drm_dp_mst_get_port_malloc(struct drm_dp_mst_port * port)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/display/drm_dp_mst_helper.h>

int drm_dp_mst_hpd_irq(struct drm_dp_mst_topology_mgr * mgr,u8 * esi,bool * handled)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/display/drm_dp_mst_helper.h>

void drm_dp_mst_put_port_malloc(struct drm_dp_mst_port * port)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/display/drm_dp_mst_helper.h>

int drm_dp_mst_root_conn_atomic_check(struct drm_connector_state * new_conn_state,struct drm_dp_mst_topology_mgr * mgr)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/display/drm_dp_mst_helper.h>

void drm_dp_mst_topology_mgr_destroy(struct drm_dp_mst_topology_mgr * mgr)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/display/drm_dp_mst_helper.h>

int drm_dp_mst_topology_mgr_init(struct drm_dp_mst_topology_mgr * mgr,struct drm_device * dev,struct drm_dp_aux * aux,int max_dpcd_transaction_bytes,int max_payloads,int conn_base_id)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/display/drm_dp_mst_helper.h>

int drm_dp_mst_topology_mgr_resume(struct drm_dp_mst_topology_mgr * mgr,bool sync)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/display/drm_dp_mst_helper.h>

int drm_dp_mst_topology_mgr_set_mst(struct drm_dp_mst_topology_mgr * mgr,bool mst_state)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/display/drm_dp_mst_helper.h>

void drm_dp_mst_topology_mgr_suspend(struct drm_dp_mst_topology_mgr * mgr)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/display/drm_dp_mst_helper.h>

const struct drm_private_state_funcs drm_dp_mst_topology_state_funcs;


#include <drm/display/drm_dp_helper.h>

int drm_dp_read_desc(struct drm_dp_aux * aux,struct drm_dp_desc * desc,bool is_branch)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/display/drm_dp_helper.h>

int drm_dp_read_downstream_info(struct drm_dp_aux * aux,const u8 dpcd[DP_RECEIVER_CAP_SIZE],u8 downstream_ports[DP_MAX_DOWNSTREAM_PORTS])
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/display/drm_dp_helper.h>

int drm_dp_read_dpcd_caps(struct drm_dp_aux * aux,u8 dpcd[DP_RECEIVER_CAP_SIZE])
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/display/drm_dp_mst_helper.h>

bool drm_dp_read_mst_cap(struct drm_dp_aux * aux,const u8 dpcd[DP_RECEIVER_CAP_SIZE])
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/display/drm_dp_helper.h>

int drm_dp_read_sink_count(struct drm_dp_aux * aux)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/display/drm_dp_helper.h>

bool drm_dp_read_sink_count_cap(struct drm_connector * connector,const u8 dpcd[DP_RECEIVER_CAP_SIZE],const struct drm_dp_desc * desc)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/display/drm_dp_mst_helper.h>

void drm_dp_remove_payload(struct drm_dp_mst_topology_mgr * mgr,struct drm_dp_mst_topology_state * mst_state,struct drm_dp_mst_atomic_payload * payload)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/display/drm_dp_helper.h>

int drm_edp_backlight_disable(struct drm_dp_aux * aux,const struct drm_edp_backlight_info * bl)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/display/drm_dp_helper.h>

int drm_edp_backlight_enable(struct drm_dp_aux * aux,const struct drm_edp_backlight_info * bl,const u16 level)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/display/drm_dp_helper.h>

int drm_edp_backlight_init(struct drm_dp_aux * aux,struct drm_edp_backlight_info * bl,u16 driver_pwm_freq_hz,const u8 edp_dpcd[EDP_DISPLAY_CTL_CAP_SIZE],u16 * current_level,u8 * current_mode)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/display/drm_dp_helper.h>

int drm_edp_backlight_set_level(struct drm_dp_aux * aux,const struct drm_edp_backlight_info * bl,u16 level)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_encoder.h>

void drm_encoder_cleanup(struct drm_encoder * encoder)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_encoder.h>

int drm_encoder_init(struct drm_device * dev,struct drm_encoder * encoder,const struct drm_encoder_funcs * funcs,int encoder_type,const char * name,...)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_fb_helper.h>

struct fb_info * drm_fb_helper_alloc_fbi(struct drm_fb_helper * fb_helper)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_fb_helper.h>

int drm_fb_helper_blank(int blank,struct fb_info * info)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_fb_helper.h>

void drm_fb_helper_cfb_copyarea(struct fb_info * info,const struct fb_copyarea * area)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_fb_helper.h>

void drm_fb_helper_cfb_fillrect(struct fb_info * info,const struct fb_fillrect * rect)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_fb_helper.h>

void drm_fb_helper_cfb_imageblit(struct fb_info * info,const struct fb_image * image)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_fb_helper.h>

int drm_fb_helper_check_var(struct fb_var_screeninfo * var,struct fb_info * info)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_fb_helper.h>

int drm_fb_helper_debug_enter(struct fb_info * info)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_fb_helper.h>

int drm_fb_helper_debug_leave(struct fb_info * info)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_fb_helper.h>

void drm_fb_helper_fill_info(struct fb_info * info,struct drm_fb_helper * fb_helper,struct drm_fb_helper_surface_size * sizes)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_fb_helper.h>

void drm_fb_helper_fini(struct drm_fb_helper * fb_helper)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_fb_helper.h>

int drm_fb_helper_hotplug_event(struct drm_fb_helper * fb_helper)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_fb_helper.h>

int drm_fb_helper_init(struct drm_device * dev,struct drm_fb_helper * fb_helper)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_fb_helper.h>

int drm_fb_helper_initial_config(struct drm_fb_helper * fb_helper,int bpp_sel)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_fb_helper.h>

int drm_fb_helper_ioctl(struct fb_info * info,unsigned int cmd,unsigned long arg)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_fb_helper.h>

int drm_fb_helper_pan_display(struct fb_var_screeninfo * var,struct fb_info * info)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_fb_helper.h>

void drm_fb_helper_prepare(struct drm_device * dev,struct drm_fb_helper * helper,const struct drm_fb_helper_funcs * funcs)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_fb_helper.h>

int drm_fb_helper_set_par(struct fb_info * info)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_fb_helper.h>

void drm_fb_helper_set_suspend(struct drm_fb_helper * fb_helper,bool suspend)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_fb_helper.h>

int drm_fb_helper_setcmap(struct fb_cmap * cmap,struct fb_info * info)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_fb_helper.h>

void drm_fb_helper_unregister_fbi(struct drm_fb_helper * fb_helper)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_drv.h>

bool drm_firmware_drivers_only(void)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_fourcc.h>

const struct drm_format_info * drm_format_info(u32 format)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_framebuffer.h>

int drm_framebuffer_init(struct drm_device * dev,struct drm_framebuffer * fb,const struct drm_framebuffer_funcs * funcs)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_gem_framebuffer_helper.h>

int drm_gem_fb_create_handle(struct drm_framebuffer * fb,struct drm_file * file,unsigned int * handle)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_gem_framebuffer_helper.h>

void drm_gem_fb_destroy(struct drm_framebuffer * fb)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_gem.h>

int drm_gem_handle_create(struct drm_file * file_priv,struct drm_gem_object * obj,u32 * handlep)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_gem.h>

int drm_gem_handle_delete(struct drm_file * filp,u32 handle)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_gem.h>

int drm_gem_mmap(struct file * filp,struct vm_area_struct * vma)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_gem.h>

void drm_gem_object_free(struct kref * kref)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_gem.h>

int drm_gem_object_init(struct drm_device * dev,struct drm_gem_object * obj,size_t size)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_gem.h>

struct drm_gem_object * drm_gem_object_lookup(struct drm_file * filp,u32 handle)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_gem.h>

void drm_gem_object_release(struct drm_gem_object * obj)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_gem_atomic_helper.h>

int drm_gem_plane_helper_prepare_fb(struct drm_plane * plane,struct drm_plane_state * state)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_prime.h>

int drm_gem_prime_fd_to_handle(struct drm_device * dev,struct drm_file * file_priv,int prime_fd,uint32_t * handle)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_prime.h>

int drm_gem_prime_handle_to_fd(struct drm_device * dev,struct drm_file * file_priv,uint32_t handle,uint32_t flags,int * prime_fd)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_prime.h>

int drm_gem_prime_mmap(struct drm_gem_object * obj,struct vm_area_struct * vma)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_gem_ttm_helper.h>

int drm_gem_ttm_dumb_map_offset(struct drm_file * file,struct drm_device * dev,uint32_t handle,uint64_t * offset)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_gem_ttm_helper.h>

int drm_gem_ttm_mmap(struct drm_gem_object * gem,struct vm_area_struct * vma)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_gem_ttm_helper.h>

int drm_gem_ttm_vmap(struct drm_gem_object * gem,struct iosys_map * map)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_gem_ttm_helper.h>

void drm_gem_ttm_vunmap(struct drm_gem_object * gem,struct iosys_map * map)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_connector.h>

const char * drm_get_connector_status_name(enum drm_connector_status status)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_edid.h>

struct edid * drm_get_edid(struct drm_connector * connector,struct i2c_adapter * adapter)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_fourcc.h>

const struct drm_format_info * drm_get_format_info(struct drm_device * dev,const struct drm_mode_fb_cmd2 * mode_cmd)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_edid.h>

int drm_hdmi_avi_infoframe_from_display_mode(struct hdmi_avi_infoframe * frame,const struct drm_connector * connector,const struct drm_display_mode * mode)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_edid.h>

void drm_hdmi_avi_infoframe_quant_range(struct hdmi_avi_infoframe * frame,const struct drm_connector * connector,const struct drm_display_mode * mode,enum hdmi_quantization_range rgb_quant_range)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_edid.h>

int drm_hdmi_vendor_infoframe_from_display_mode(struct hdmi_vendor_infoframe * frame,const struct drm_connector * connector,const struct drm_display_mode * mode)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_crtc_helper.h>

int drm_helper_connector_dpms(struct drm_connector * connector,int mode)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_crtc_helper.h>

void drm_helper_disable_unused_functions(struct drm_device * dev)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_crtc_helper.h>

int drm_helper_force_disable_all(struct drm_device * dev)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_modeset_helper.h>

void drm_helper_mode_fill_fb_struct(struct drm_device * dev,struct drm_framebuffer * fb,const struct drm_mode_fb_cmd2 * mode_cmd)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_probe_helper.h>

int drm_helper_probe_detect(struct drm_connector * connector,struct drm_modeset_acquire_ctx * ctx,bool force)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_probe_helper.h>

int drm_helper_probe_single_connector_modes(struct drm_connector * connector,uint32_t maxX,uint32_t maxY)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_crtc_helper.h>

void drm_helper_resume_force_mode(struct drm_device * dev)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_encoder_slave.h>

enum drm_connector_status drm_i2c_encoder_detect(struct drm_encoder * encoder,struct drm_connector * connector)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_encoder_slave.h>

int drm_i2c_encoder_init(struct drm_device * dev,struct drm_encoder_slave * encoder,struct i2c_adapter * adap,const struct i2c_board_info * info)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_encoder_slave.h>

bool drm_i2c_encoder_mode_fixup(struct drm_encoder * encoder,const struct drm_display_mode * mode,struct drm_display_mode * adjusted_mode)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_encoder_slave.h>

void drm_i2c_encoder_restore(struct drm_encoder * encoder)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_encoder_slave.h>

void drm_i2c_encoder_save(struct drm_encoder * encoder)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_ioctl.h>

int drm_invalid_op(struct drm_device * dev,void * data,struct drm_file * file_priv)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_ioctl.h>

long drm_ioctl(struct file * filp,unsigned int cmd,unsigned long arg)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_probe_helper.h>

void drm_kms_helper_hotplug_event(struct drm_device * dev)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_probe_helper.h>

bool drm_kms_helper_is_poll_worker(void)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_probe_helper.h>

void drm_kms_helper_poll_disable(struct drm_device * dev)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_probe_helper.h>

void drm_kms_helper_poll_enable(struct drm_device * dev)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_probe_helper.h>

void drm_kms_helper_poll_fini(struct drm_device * dev)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_probe_helper.h>

void drm_kms_helper_poll_init(struct drm_device * dev)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_mode_config.h>

void drm_mode_config_cleanup(struct drm_device * dev)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_mode_config.h>

void drm_mode_config_reset(struct drm_device * dev)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_modes.h>

void drm_mode_copy(struct drm_display_mode * dst,const struct drm_display_mode * src)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_connector.h>

int drm_mode_create_dvi_i_properties(struct drm_device * dev)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_connector.h>

int drm_mode_create_scaling_mode_property(struct drm_device * dev)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_connector.h>

int drm_mode_create_tv_properties(struct drm_device * dev,unsigned int num_modes,const char * const modes[])
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_color_mgmt.h>

int drm_mode_crtc_set_gamma_size(struct drm_crtc * crtc,int gamma_size)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_modes.h>

void drm_mode_debug_printmodeline(const struct drm_display_mode * mode)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_modes.h>

void drm_mode_destroy(struct drm_device * dev,struct drm_display_mode * mode)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_modes.h>

struct drm_display_mode * drm_mode_duplicate(struct drm_device * dev,const struct drm_display_mode * mode)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_modes.h>

bool drm_mode_equal(const struct drm_display_mode * mode1,const struct drm_display_mode * mode2)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_modes.h>

void drm_mode_get_hv_timing(const struct drm_display_mode * mode,int * hdisplay,int * vdisplay)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_fourcc.h>

uint32_t drm_mode_legacy_fb_format(uint32_t bpp,uint32_t depth)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_mode_object.h>

void drm_mode_object_put(struct drm_mode_object * obj)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_modes.h>

void drm_mode_probed_add(struct drm_connector * connector,struct drm_display_mode * mode)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_modes.h>

void drm_mode_set_crtcinfo(struct drm_display_mode * p,int adjust_flags)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_modes.h>

void drm_mode_set_name(struct drm_display_mode * mode)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_modes.h>

int drm_mode_vrefresh(const struct drm_display_mode * mode)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_modeset_lock.h>

void drm_modeset_acquire_fini(struct drm_modeset_acquire_ctx * ctx)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_modeset_lock.h>

void drm_modeset_acquire_init(struct drm_modeset_acquire_ctx * ctx,uint32_t flags)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_modeset_lock.h>

int drm_modeset_backoff(struct drm_modeset_acquire_ctx * ctx)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_modeset_lock.h>

void drm_modeset_drop_locks(struct drm_modeset_acquire_ctx * ctx)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_modeset_lock.h>

int drm_modeset_lock(struct drm_modeset_lock * lock,struct drm_modeset_acquire_ctx * ctx)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_modeset_lock.h>

void drm_modeset_lock_all(struct drm_device * dev)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_modeset_lock.h>

void drm_modeset_unlock_all(struct drm_device * dev)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_mode_object.h>

void drm_object_attach_property(struct drm_mode_object * obj,struct drm_property * property,uint64_t init_val)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_mode_object.h>

int drm_object_property_set_value(struct drm_mode_object * obj,struct drm_property * property,uint64_t val)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_file.h>

int drm_open(struct inode * inode,struct file * filp)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_plane.h>

void drm_plane_cleanup(struct drm_plane * plane)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_blend.h>

int drm_plane_create_alpha_property(struct drm_plane * plane)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_blend.h>

int drm_plane_create_blend_mode_property(struct drm_plane * plane,unsigned int supported_modes)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_color_mgmt.h>

int drm_plane_create_color_properties(struct drm_plane * plane,u32 supported_encodings,u32 supported_ranges,enum drm_color_encoding default_encoding,enum drm_color_range default_range)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_blend.h>

int drm_plane_create_zpos_immutable_property(struct drm_plane * plane,unsigned int zpos)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_blend.h>

int drm_plane_create_zpos_property(struct drm_plane * plane,unsigned int zpos,unsigned int min,unsigned int max)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_plane.h>

void drm_plane_force_disable(struct drm_plane * plane)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_plane_helper.h>

void drm_plane_helper_destroy(struct drm_plane * plane)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_plane_helper.h>

int drm_plane_helper_disable_primary(struct drm_plane * plane,struct drm_modeset_acquire_ctx * ctx)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_plane_helper.h>

int drm_plane_helper_update_primary(struct drm_plane * plane,struct drm_crtc * crtc,struct drm_framebuffer * fb,int crtc_x,int crtc_y,unsigned int crtc_w,unsigned int crtc_h,uint32_t src_x,uint32_t src_y,uint32_t src_w,uint32_t src_h,struct drm_modeset_acquire_ctx * ctx)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_file.h>

__poll_t drm_poll(struct file * filp,struct poll_table_struct * wait)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_prime.h>

void drm_prime_gem_destroy(struct drm_gem_object * obj,struct sg_table * sg)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_prime.h>

struct sg_table * drm_prime_pages_to_sg(struct drm_device * dev,struct page ** pages,unsigned int nr_pages)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_prime.h>

int drm_prime_sg_to_dma_addr_array(struct sg_table * sgt,dma_addr_t * addrs,int max_entries)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_print.h>

void drm_printf(struct drm_printer * p,const char * f,...)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_property.h>

int drm_property_add_enum(struct drm_property * property,uint64_t value,const char * name)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_property.h>

struct drm_property * drm_property_create(struct drm_device * dev,u32 flags,const char * name,int num_values)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_property.h>

struct drm_property * drm_property_create_range(struct drm_device * dev,u32 flags,const char * name,uint64_t min,uint64_t max)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_file.h>

ssize_t drm_read(struct file * filp,char __user * buffer,size_t count,loff_t * offset)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_file.h>

int drm_release(struct inode * inode,struct file * filp)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/display/drm_scdc_helper.h>

ssize_t drm_scdc_read(struct i2c_adapter * adapter,u8 offset,void * buffer,size_t size)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/display/drm_scdc_helper.h>

ssize_t drm_scdc_write(struct i2c_adapter * adapter,u8 offset,const void * buffer,size_t size)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_plane.h>

int drm_universal_plane_init(struct drm_device * dev,struct drm_plane * plane,uint32_t possible_crtcs,const struct drm_plane_funcs * funcs,const uint32_t * formats,unsigned int format_count,const uint64_t * format_modifiers,enum drm_plane_type type,const char * name,...)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_vblank.h>

int drm_vblank_init(struct drm_device * dev,unsigned int num_crtcs)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_vma_manager.h>

int drm_vma_offset_add(struct drm_vma_offset_manager * mgr,struct drm_vma_offset_node * node,unsigned long pages)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_vma_manager.h>

void drm_vma_offset_remove(struct drm_vma_offset_manager * mgr,struct drm_vma_offset_node * node)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/drm_mode_config.h>

int drmm_mode_config_init(struct drm_device * dev)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/irq.h>

struct irq_chip dummy_irq_chip;


#include <linux/printk.h>

asmlinkage __visible void dump_stack(void)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/capability.h>

bool file_ns_capable(const struct file * file,struct user_namespace * ns,int cap)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/rcuwait.h>

void finish_rcuwait(struct rcuwait * w)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/firmware.h>

int firmware_request_nowarn(const struct firmware ** firmware,const char * name,struct device * device)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/file.h>

void fput(struct file * file)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/i2c.h>

s32 i2c_smbus_read_block_data(const struct i2c_client * client,u8 command,u8 * values)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/i2c.h>

s32 i2c_smbus_read_byte(const struct i2c_client * client)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/i2c.h>

s32 i2c_smbus_read_byte_data(const struct i2c_client * client,u8 command)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/i2c.h>

s32 i2c_smbus_read_word_data(const struct i2c_client * client,u8 command)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/i2c.h>

s32 i2c_smbus_write_block_data(const struct i2c_client * client,u8 command,u8 length,const u8 * values)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/i2c.h>

s32 i2c_smbus_write_byte(const struct i2c_client * client,u8 value)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/i2c.h>

s32 i2c_smbus_write_byte_data(const struct i2c_client * client,u8 command,u8 value)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/i2c.h>

s32 i2c_smbus_write_word_data(const struct i2c_client * client,u8 command,u16 value)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/i2c.h>

s32 i2c_smbus_xfer(struct i2c_adapter * adapter,u16 addr,unsigned short flags,char read_write,u8 command,int protocol,union i2c_smbus_data * data)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/sched/signal.h>

void ignore_signals(struct task_struct * t)
{
	lx_emul_trace_and_stop(__func__);
}


#include <net/netfilter/nf_conntrack.h>

struct net init_net;


#include <linux/pseudo_fs.h>

struct pseudo_fs_context * init_pseudo(struct fs_context * fc,unsigned long magic)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/utsname.h>

struct user_namespace init_user_ns;


#include <linux/init.h>

bool initcall_debug;


#include <linux/sched.h>

void __sched io_schedule(void)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/sched.h>

void io_schedule_finish(int token)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/sched.h>

int io_schedule_prepare(void)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/sched.h>

long __sched io_schedule_timeout(long timeout)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/swiotlb.h>

struct io_tlb_mem io_tlb_default_mem;


#include <linux/iommu.h>

void iommu_device_unuse_default_domain(struct device * dev)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/iommu.h>

int iommu_device_use_default_domain(struct device * dev)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/iommu.h>

int iommu_map(struct iommu_domain * domain,unsigned long iova,phys_addr_t paddr,size_t size,int prot)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/iommu.h>

size_t iommu_unmap(struct iommu_domain * domain,unsigned long iova,size_t size)
{
	lx_emul_trace_and_stop(__func__);
}


extern void __iomem * ioremap_wc(resource_size_t phys_addr,unsigned long size);
void __iomem * ioremap_wc(resource_size_t phys_addr,unsigned long size)
{
	lx_emul_trace_and_stop(__func__);
}


extern bool irq_wait_for_poll(struct irq_desc * desc);
bool irq_wait_for_poll(struct irq_desc * desc)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/irq_work.h>

bool irq_work_queue(struct irq_work * work)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/irq_work.h>

void irq_work_tick(void)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/property.h>

bool is_software_node(const struct fwnode_handle * fwnode)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/swiotlb.h>

bool is_swiotlb_active(struct device * dev)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/kobject.h>

struct kobject *kernel_kobj;


#include <linux/kernfs.h>

void kernfs_get(struct kernfs_node * kn)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/kernfs.h>

void kernfs_put(struct kernfs_node * kn)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/skbuff.h>

void __fix_address kfree_skb_reason(struct sk_buff * skb,enum skb_drop_reason reason)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/fs.h>

void kill_anon_super(struct super_block * sb)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/slab.h>

void * kmem_cache_alloc_lru(struct kmem_cache * cachep,struct list_lru * lru,gfp_t flags)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/rcutree.h>

void kvfree_call_rcu(struct rcu_head * head,rcu_callback_t func)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/swap.h>

void mark_page_accessed(struct page * page)
{
	lx_emul_trace_and_stop(__func__);
}


#include <net/net_namespace.h>

void __init net_ns_init(void)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/netlink.h>

int netlink_broadcast(struct sock * ssk,struct sk_buff * skb,u32 portid,u32 group,gfp_t allocation)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/netlink.h>

int netlink_has_listeners(struct sock * sk,unsigned int group)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/netlink.h>

void netlink_kernel_release(struct sock * sk)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/netlink.h>

bool netlink_ns_capable(const struct sk_buff * skb,struct user_namespace * user_ns,int cap)
{
	lx_emul_trace_and_stop(__func__);
}


#include <net/netlink.h>

int netlink_rcv_skb(struct sk_buff * skb,int (* cb)(struct sk_buff *,struct nlmsghdr *,struct netlink_ext_ack *))
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/irq.h>

struct irq_chip no_irq_chip;


#include <linux/fs.h>

loff_t noop_llseek(struct file * file,loff_t offset,int whence)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/irq.h>

void note_interrupt(struct irq_desc * desc,irqreturn_t action_ret)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/reboot.h>

void orderly_poweroff(bool force)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/pci.h>

void pci_disable_device(struct pci_dev * dev)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/pci.h>

void pci_disable_msi(struct pci_dev * dev)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/pci.h>

void pci_disable_rom(struct pci_dev * pdev)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/pci.h>

int pci_enable_msi(struct pci_dev * dev)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/pci.h>

int pci_enable_rom(struct pci_dev * pdev)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/pci.h>

void pci_ignore_hotplug(struct pci_dev * dev)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/pci.h>

void __iomem * pci_map_rom(struct pci_dev * pdev,size_t * size)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/pci.h>

int pci_read_config_dword(const struct pci_dev * dev,int where,u32 * val)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/pci.h>

void pci_restore_state(struct pci_dev * dev)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/pci.h>

int pci_save_state(struct pci_dev * dev)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/pci.h>

int pci_set_power_state(struct pci_dev * dev,pci_power_t state)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/pci.h>

void pci_unmap_rom(struct pci_dev * pdev,void __iomem * rom)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/pci.h>

int pci_write_config_byte(const struct pci_dev * dev,int where,u8 val)
{
	lx_emul_trace_and_stop(__func__);
}


extern pgprot_t pgprot_writecombine(pgprot_t prot);
pgprot_t pgprot_writecombine(pgprot_t prot)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/power_supply.h>

int power_supply_is_system_supplied(void)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/proc_fs.h>

struct proc_dir_entry * proc_create_seq_private(const char * name,umode_t mode,struct proc_dir_entry * parent,const struct seq_operations * ops,unsigned int state_size,void * data)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/sysctl.h>

int proc_dointvec_minmax(struct ctl_table * table,int write,void * buffer,size_t * lenp,loff_t * ppos)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/sysctl.h>

int proc_douintvec(struct ctl_table * table,int write,void * buffer,size_t * lenp,loff_t * ppos)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/rcupdate.h>

void rcu_sched_clock_irq(int user)
{
	lx_emul_trace_and_stop(__func__);
}


#include <acpi/acpi_bus.h>

int register_acpi_notifier(struct notifier_block * nb)
{
	lx_emul_trace_and_stop(__func__);
}


extern void register_handler_proc(unsigned int irq,struct irqaction * action);
void register_handler_proc(unsigned int irq,struct irqaction * action)
{
	lx_emul_trace_and_stop(__func__);
}


extern void register_irq_proc(unsigned int irq,struct irq_desc * desc);
void register_irq_proc(unsigned int irq,struct irq_desc * desc)
{
	lx_emul_trace_and_stop(__func__);
}


#include <net/net_namespace.h>

int register_pernet_subsys(struct pernet_operations * ops)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/shrinker.h>

int register_shrinker(struct shrinker * shrinker,const char * fmt,...)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/syscore_ops.h>

void register_syscore_ops(struct syscore_ops * ops)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/sysctl.h>

struct ctl_table_header * register_sysctl(const char * path,struct ctl_table * table)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/firmware.h>

void release_firmware(const struct firmware * fw)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/firmware.h>

int request_firmware(const struct firmware ** firmware_p,const char * name,struct device * device)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/sched/rt.h>

void rt_mutex_setprio(struct task_struct * p,struct task_struct * pi_task)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/seq_file.h>

void seq_printf(struct seq_file * m,const char * f,...)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/seq_file.h>

void seq_vprintf(struct seq_file * m,const char * f,va_list args)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/mm.h>

bool set_page_dirty(struct page * page)
{
	lx_emul_trace_and_stop(__func__);
}


extern int set_pages_array_uc(struct page ** pages,int numpages);
int set_pages_array_uc(struct page ** pages,int numpages)
{
	lx_emul_trace_and_stop(__func__);
}


extern int set_pages_array_wc(struct page ** pages,int numpages);
int set_pages_array_wc(struct page ** pages,int numpages)
{
	lx_emul_trace_and_stop(__func__);
}


extern int set_pages_wb(struct page * page,int numpages);
int set_pages_wb(struct page * page,int numpages)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/shmem_fs.h>

struct file * shmem_file_setup(const char * name,loff_t size,unsigned long flags)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/shmem_fs.h>

struct page * shmem_read_mapping_page_gfp(struct address_space * mapping,pgoff_t index,gfp_t gfp)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/mm.h>

void si_meminfo(struct sysinfo * val)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/skbuff.h>

struct sk_buff * skb_copy_expand(const struct sk_buff * skb,int newheadroom,int newtailroom,gfp_t gfp_mask)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/skbuff.h>

void __init skb_init(void)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/skbuff.h>

void * skb_pull(struct sk_buff * skb,unsigned int len)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/skbuff.h>

void * skb_put(struct sk_buff * skb,unsigned int len)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/smp.h>

void smp_call_function_many(const struct cpumask * mask,smp_call_func_t func,void * info,bool wait)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/smp.h>

int smp_call_function_single(int cpu,smp_call_func_t func,void * info,int wait)
{
	lx_emul_trace_and_stop(__func__);
}


extern void software_node_notify(struct device * dev);
void software_node_notify(struct device * dev)
{
	lx_emul_trace_and_stop(__func__);
}


extern void software_node_notify_remove(struct device * dev);
void software_node_notify_remove(struct device * dev)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/jump_label.h>

bool static_key_initialized;


#include <linux/rcupdate.h>

void synchronize_rcu(void)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/shrinker.h>

void synchronize_shrinkers(void)
{
	lx_emul_trace_and_stop(__func__);
}


//#include <linux/srcutiny.h>

//void synchronize_srcu(struct srcu_struct * ssp)
//{
//	lx_emul_trace_and_stop(__func__);
//}


#include <linux/sysctl.h>

const int sysctl_vals[] = {};


#include <linux/sysfs.h>

int sysfs_add_file_to_group(struct kobject * kobj,const struct attribute * attr,const char * group)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/task_work.h>

int task_work_add(struct task_struct * task,struct callback_head * work,enum task_work_notify_mode notify)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/task_work.h>

struct callback_head * task_work_cancel(struct task_struct * task,task_work_func_t func)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/ttm/ttm_bo_api.h>

int ttm_bo_kmap(struct ttm_buffer_object * bo,unsigned long start_page,unsigned long num_pages,struct ttm_bo_kmap_obj * map)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/ttm/ttm_bo_api.h>

void ttm_bo_kunmap(struct ttm_bo_kmap_obj * map)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/ttm/ttm_bo_driver.h>

int ttm_bo_move_accel_cleanup(struct ttm_buffer_object * bo,struct dma_fence * fence,bool evict,bool pipeline,struct ttm_resource * new_mem)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/ttm/ttm_bo_driver.h>

int ttm_bo_move_memcpy(struct ttm_buffer_object * bo,struct ttm_operation_ctx * ctx,struct ttm_resource * dst_mem)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/ttm/ttm_bo_driver.h>

int ttm_bo_pipeline_gutting(struct ttm_buffer_object * bo)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/ttm/ttm_bo_api.h>

int ttm_bo_vm_access(struct vm_area_struct * vma,unsigned long addr,void * buf,int len,int write)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/ttm/ttm_bo_api.h>

void ttm_bo_vm_close(struct vm_area_struct * vma)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/ttm/ttm_bo_api.h>

vm_fault_t ttm_bo_vm_fault_reserved(struct vm_fault * vmf,pgprot_t prot,pgoff_t num_prefault)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/ttm/ttm_bo_api.h>

void ttm_bo_vm_open(struct vm_area_struct * vma)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/ttm/ttm_bo_api.h>

vm_fault_t ttm_bo_vm_reserve(struct ttm_buffer_object * bo,struct vm_fault * vmf)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/ttm/ttm_bo_driver.h>

void ttm_mem_io_free(struct ttm_device * bdev,struct ttm_resource * mem)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/ttm/ttm_range_manager.h>

int ttm_range_man_fini_nocheck(struct ttm_device * bdev,unsigned type)
{
	lx_emul_trace_and_stop(__func__);
}


#include <drm/ttm/ttm_range_manager.h>

int ttm_range_man_init_nocheck(struct ttm_device * bdev,unsigned type,bool use_tt,unsigned long p_size)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/mm.h>

void unmap_mapping_range(struct address_space * mapping,loff_t const holebegin,loff_t const holelen,int even_cows)
{
	lx_emul_trace_and_stop(__func__);
}


#include <acpi/acpi_bus.h>

int unregister_acpi_notifier(struct notifier_block * nb)
{
	lx_emul_trace_and_stop(__func__);
}


extern void unregister_handler_proc(unsigned int irq,struct irqaction * action);
void unregister_handler_proc(unsigned int irq,struct irqaction * action)
{
	lx_emul_trace_and_stop(__func__);
}


extern void unregister_irq_proc(unsigned int irq,struct irq_desc * desc);
void unregister_irq_proc(unsigned int irq,struct irq_desc * desc)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/shrinker.h>

void unregister_shrinker(struct shrinker * shrinker)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/timekeeper_internal.h>

void update_vsyscall(struct timekeeper * tk)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/mm.h>

pgprot_t vm_get_page_prot(unsigned long vm_flags)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/mm.h>

struct page * vmalloc_to_page(const void * vmalloc_addr)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/vmalloc.h>

void * vmap(struct page ** pages,unsigned int count,unsigned long flags,pgprot_t prot)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/vmalloc.h>

void vunmap(const void * addr)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/sched/wake_q.h>

void wake_q_add_safe(struct wake_q_head * head,struct task_struct * task)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/acpi.h>

acpi_status wmi_evaluate_method(const char * guid_string,u8 instance,u32 method_id,const struct acpi_buffer * in,struct acpi_buffer * out)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/acpi.h>

bool wmi_has_guid(const char * guid_string)
{
	lx_emul_trace_and_stop(__func__);
}


#include <linux/sched.h>

void __sched yield(void)
{
	lx_emul_trace_and_stop(__func__);
}

