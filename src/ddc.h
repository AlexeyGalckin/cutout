#pragma once
//
#include "prc.h"
//
#include <string_view>
//
namespace cut
{
	class ddc : public prc
	{
	public:
		ddc(const std::string_view s);
		//
		virtual void operator()(const opt& o) override {}
	protected:
		std::string _s;
	};
}