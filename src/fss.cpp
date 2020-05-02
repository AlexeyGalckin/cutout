#include "fss.h"
//
#include "buf.h"
//
#include <fstream>
#include <stdexcept>
//
namespace cut
{
	fss::fss(const std::string_view s, size_t b)
		: _b{ b }
	{
		_s.exceptions(std::ifstream::failbit | std::ifstream::badbit);
		_s.open(s.data(), std::ios::in | std::ios::binary);
	}
	//
	void fss::seek(size_t n)
	{
		_s.seekg(_b * n);
	}
	//
	src& fss::operator>>(buf& b)
	{
		b.resize(_b);
		//
		_s.read(b.data(), b.space());
		//
		const auto n = _s.gcount();
		//
		b.advance(n);
		//
		if (n != _b)
			throw std::runtime_error("Currupted block (too small)!");
		//
		return *this;
	}
	//
	fss::operator bool() const
	{
		return _s.good();
	}
}