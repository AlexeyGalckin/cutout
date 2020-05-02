#pragma once
//
#include "prc.h"
//
#include <memory>
#include <string_view>
//
namespace cut
{
	class src;
	class buf;
	//
	class out : public prc
	{
	public:
		out(std::unique_ptr<src>&& s);
		//
		virtual void operator()(const opt& o) override;
		//
	protected:
		void dump(buf& b, const std::string_view f);
		//
		std::unique_ptr<src> _s;
	};
}