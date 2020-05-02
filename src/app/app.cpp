#include "app.h"
//
#include "arg.h"
#include "prc.h"
//
#include <iostream>
//
#include <fstream>
//
namespace cut
{
	int app::run(int argc, char** argv)
	{
		try
		{
			arg a(argc, argv);
			//
			auto p = this->make_prc(a);
			//
			(*p)(a);
		}
		catch (const cut::aex& e)
		{
			std::cerr << "USAGE: " << e.usage() << std::endl;
			return 1;
		}
		catch (const std::exception& e)
		{
			std::cerr << "ERROR: " << e.what() << std::endl;
			return -1;
		}
		//
		return 0;
	}
}