
/* Genode includes */
#include <base/component.h>
#include <base/env.h>

/* emulation includes */
#include <lx_emul/init.h>
#include <lx_emul/task.h>
#include <lx_kit/env.h>
#include <lx_kit/init.h>

namespace Framebuffer {
	using namespace Genode;
	class Driver;
}

class Framebuffer::Driver
{
	private:
		Env &_env;

		Signal_handler<Driver> _scheduler_handler { _env.ep(), *this,
		                                            &Driver::handle_scheduler };

	public:

		Driver(Env &env)
		:
			_env { env }
		{
		}

		void handle_scheduler()
		{
			Lx_kit::env().scheduler.execute();
		}

		void start()
		{
			log("--- nouveau framebuffer driver started ---");
			log("STAGE: __init_calls");
			Lx_kit::initialize(_env, _scheduler_handler);
			_env.exec_static_constructors();
			log("STAGE: lx_emul_start_kernel");
			lx_emul_start_kernel(nullptr);
		}
};

static Framebuffer::Driver &driver(Genode::Env &env)
{
	static Framebuffer::Driver driver(env);
	return driver;
}

void Component::construct(Genode::Env &env)
{ driver(env).start(); }

