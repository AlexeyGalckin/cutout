#include "arg.h"
//
namespace cut
{
	arg::arg(int argc, char** argv)
	{
		init(argc, argv);
	}
	//
	void arg::init(int argc, char** argv)
	{
		_r.parse("REDO RECORD - Thread:1 RBA: 0x0001ea.00012dda.0044 LEN: 0x081c VLD: 0x01 CON_UID: 134706866");
		//
		_b = 512;
		//
		_d = false;
		//
		_f = "testlog.arc";
	}
}