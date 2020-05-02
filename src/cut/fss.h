#pragma once
//
#include "src.h"
//
#include <string_view>
#include <fstream>
//
namespace cut
{
	class fss : public src
	{
	public:
		fss(const std::string_view s, size_t b);
		//
		virtual void seek(size_t n) override;
		//
		virtual src& operator>>(buf& b) override;
		virtual operator bool() const override;
	protected:
		std::ifstream _s;
		size_t _b;
	};
}