#include "bas.h"
//
namespace cut
{
	size_t bas::bs() const
	{
		return _b;
	}
	//
	const rba& bas::rdba() const
	{
		return _r;
	}
	//
	bool bas::ddo() const
	{
		return _d;
	}
	//
	const std::string& bas::fnm() const
	{
		return _f;
	}
}