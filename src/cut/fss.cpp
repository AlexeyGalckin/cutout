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
		_s >> b;
		//
		return *this;
	}
	//
	fss::operator bool() const
	{
		return _s.good();
	}
}