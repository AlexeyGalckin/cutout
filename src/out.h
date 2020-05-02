#pragma once
//
#include "prc.h"
//
#include <memory>
//
namespace cut
{
	class src;
	//
	class out : public prc
	{
	public:
		out(std::unique_ptr<src>&& s);
		//
		virtual void operator()(const opt& o) override;
		//
	protected:
		std::unique_ptr<src> _s;
	};
}