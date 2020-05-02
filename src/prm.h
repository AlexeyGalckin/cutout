#pragma once
//
#include <string>
//
namespace cut
{
	class prm
	{
	public:
		virtual bool ddo() const = 0;
		virtual const std::string& fnm() const = 0;
	};
}