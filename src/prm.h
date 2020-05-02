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
		virtual size_t bs() const = 0;
		//
		virtual const std::string_view fnm() const = 0;
	};
}