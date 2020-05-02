#pragma once
//
#include <string_view>
//
namespace cut
{
	class prm
	{
	public:
		virtual bool ddo() const = 0;
		virtual const std::string_view fnm() const = 0;
	};
}