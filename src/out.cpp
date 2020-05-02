#include "out.h"
//
#include "src.h"
#include "opt.h"
#include "rba.h"
#include "buf.h"
//
#include <sstream>
#include <fstream>
//
#include <stdexcept>
//
namespace cut
{
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
		size_t ofs = r.off();
		//
		while (!rec.full())
		{
			if ((*_s) >> blk)
			{
				blk.seek(ofs);
				//
				rec << blk;
				//
				ofs = prc::header_size;
			}
		}
		//
		if (!rec.full())
			throw std::runtime_error("Failed to fulfill record buffer!");
		//
		auto sr = r.strrba() + ".dump";
		//
		this->dump(rec, sr);
	}
	//
	void out::dump(const buf& b, const std::string_view f)
	{
		std::ofstream os;
		//
		os.exceptions(std::ifstream::failbit | std::ifstream::badbit);
		//
		os.open(f.data(), std::ios::out | std::ios::binary);
		//
		//os << b;
	}
}