#include "bld.h"
//
#include "prm.h"
//
#include "ddc.h"
#include "out.h"
#include "fss.h"
//
namespace cut
{
	std::unique_ptr<prc> bld::make_prc(const prm& p)
	{
		if (p.ddo())
			return std::make_unique<ddc>(p.fnm(), p.bs());
		else
			return std::make_unique<out>(this->make_src(p));
	}
	//
	std::unique_ptr<src> bld::make_src(const prm& p)
	{
		return std::make_unique<fss>(p.fnm(), p.bs());
	}
}