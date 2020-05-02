#include "out.h"
//
#include "src.h"
#include "opt.h"
#include "rba.h"
#include "buf.h"
//
#include <stdexcept>
//
namespace cut
{
	static constexpr size_t header_size = 32;
	//
	out::out(std::unique_ptr<src>&& s)
		: _s { std::move(s) }
	{
	}
	//
	void out::operator()(const opt& o)
	{
		const auto r = o.rdba();
		//
		_s->seek(r.bno());
		//
		buf rec(r.len());
		buf blk;
		//
		auto ofs = r.off();
		//
		while (!rec.full())
		{
			if ((*_s) >> blk)
			{
				blk.seek(ofs);
				//
				rec << blk;
				//
				ofs = header_size;
			}
		}
		//
		if (!rec.full())
			throw std::runtime_error("Failed to fulfill record buffer!");
		//
		this->dump(rec);
	}
	//
	void out::dump(const buf& b)
	{
	}
}