#pragma once
//
#include "bas.h"
//
namespace cut
{
	class arg : public bas
	{
	public:
		arg() = default;
		arg(int argc, char** argv);
		//
		void init(int argc, char** argv);
	};
	//
	class aex
	{
	public:
		std::string usage() const;
	};
}