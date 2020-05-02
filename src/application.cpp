#include "application.h"
//
#include "rba.h"
#include "processor_dump.h"
//
namespace dump
{
	int application::run(int argc, char** argv)
	{
		rba r;
		//
		r.parse("REDO RECORD - Thread:1 RBA: 0x0001ea.00012dda.0044 LEN: 0x081c VLD: 0x01 CON_UID: 134706866");
		//
		processor_dump p;
		//
		p("testlog", r, 512);
		//
		return 0;
	}
}