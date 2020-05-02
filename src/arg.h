#pragma once
//
#include "bas.h"
//
namespace cut
{
	class arg : public bas
	{
	public:
		arg(int argc, char** argv);
	protected:
		void init(int argc, char** argv);
	};
}