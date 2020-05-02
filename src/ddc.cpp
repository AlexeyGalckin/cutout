#include "ddc.h"
//
#include "opt.h"
//
#include <iostream>
//
namespace cut
{
	ddc::ddc(const std::string_view s, size_t b)
		: _s{ s }, _b { b }
	{
	}
	//
	void ddc::operator()(const opt& o)
	{
		ddc::osout(std::cout, _s, o.rdba());
	}
	//
	void ddc::osout(std::ostream& os, const std::string_view d, const rba& r)
	{
		os << "dd ";
	}
}