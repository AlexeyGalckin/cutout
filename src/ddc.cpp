#include "ddc.h"
//
#include "opt.h"
#include "rba.h"
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
		ddc::osout(std::cout, _s, o.rdba(), _b);
	}
	//
	void ddc::osout(std::ostream& os, const std::string_view d, const rba& r, size_t bs)
	{
		const auto bspace = bs - r.off();
		const auto espace = bspace > r.len() ? 0 : r.len() - bspace;
		const auto nblocks = (espace + bs - 1) / bs;
		//
		const auto skip  = r.bno() * bs + r.off();
		const auto count = nblocks * header_size + r.len();
		//
		//dd if=rxprod11_1_246523_789088832.arch of=0x03c2fb.000d9c72.005c.dump skip=456713308 count=468 bs=1
		//
		os << "dd ";
		os << "if=" << d << " ";
		os << "of=" << r.strrba() << ".dump ";
		os << "skip=" << skip << " ";
		os << "count=" << count << " ";
		os << "bs=1" << std::endl;
	}
}