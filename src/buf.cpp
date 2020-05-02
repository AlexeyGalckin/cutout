#include "buf.h"
//
namespace cut
{
	buf::buf(size_t s)
	{
	}
	bool buf::full() const
	{
		return false;
	}
	void buf::seek(size_t s)
	{
	}
	buf& buf::operator<<(buf& b)
	{
		return *this;
	}
}