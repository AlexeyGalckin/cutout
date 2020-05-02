#pragma once
//
#include "prc.h"
//
#include <string_view>
//
#include <ostream>
//
namespace cut
{
	class rba;
	//
	class ddc : public prc
	{
	public:
		ddc(const std::string_view s, size_t b);
		//
		virtual void operator()(const opt& o) override;
	protected:
		static size_t ddlen(size_t off, size_t len);
		//
		static void osout(std::ostream& os, const std::string_view d, const rba& r, size_t bs);
		//
		std::string _s;
		size_t      _b;
	};
}