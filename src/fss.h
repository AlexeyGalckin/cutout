#pragma once
//
#include "src.h"
//
#include <string_view>
//
namespace cut
{
	class fss : public src
	{
	public:
		fss(const std::string_view s, size_t b);
		//
		virtual void seek(size_t b) override;
		//
		virtual src& operator>>(buf& b) override;
		virtual operator bool() const override;
	};
}