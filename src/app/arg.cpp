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
		_r.parse("REDO RECORD - Thread:1 RBA: 0x03c2fb.000d9c72.005c LEN: 0x01c4 VLD: 0x01 CON_UID: 0");
		//
		_b = 512;
		//
		_d = true;
		//
		_f = "C:\\Work\\bugs\\IDR-2422\\RedoLog\\rxprod11_1_246523_789088832.arch";
	}
}