#pragma once
//
#include "bld.h"
//
namespace cut
{
	class app : protected bld
	{
	public:
		int run(int argc, char** argv);
	};
}