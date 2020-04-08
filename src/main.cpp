#include "rba.h"

using namespace dump;

int main(int argc, char** argv)
{
	rba r;
	//
	r.parse("REDO RECORD - Thread:1 RBA: 0x0001ea.00012dda.0044 LEN: 0x081c VLD: 0x01 CON_UID: 134706866");
	return 0;
}
