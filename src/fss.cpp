#include "fss.h"
//
#include <fstream>
#include <iterator>
#include <cstddef>
//
namespace cut
{
	fss::fss(const std::string_view s, size_t b)
	{
		//std::ifstream is;
////
//is.open(f.data(), std::ios::in | std::ios::binary);
////
//is.seekg(r.bno() * s + r.off());
////
//while (s > 0)
//{

//}
	}
	void fss::seek(size_t b)
	{
	}
	src& fss::operator>>(buf& b)
	{
		return *this;
	}
	fss::operator bool() const
	{
		return false;
	}
}