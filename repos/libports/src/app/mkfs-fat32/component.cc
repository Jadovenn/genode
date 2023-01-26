#include <base/heap.h>
#include <base/component.h>
#include <fatfs/block.h>

namespace Mkfs_fat32 {

	/* FatFS includes */
	#include <fatfs/ff.h>
	#include <fatfs/ffconf.h>

	using namespace Genode;

	class Main;
}


class Mkfs_fat32::Main
{
	private:

		Env&  _env;

	public:

		Main(Env& env) : _env{env}
		{
			Genode::Heap heap(env.ram(), env.rm());
			Fatfs::block_init(env, heap);
			BYTE work[FF_MAX_SS];
			/* Format the default drive with default parameters */
			int r = f_mkfs("", FM_FAT32, 0, work, sizeof work);

			env.parent().exit(r);
		}

		virtual ~Main() = default;
};

void Component::construct(Genode::Env &env) {
	static Mkfs_fat32::Main main(env);
}
