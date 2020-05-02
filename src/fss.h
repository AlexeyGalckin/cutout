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
		fss(const std::string_view s);
	};
}