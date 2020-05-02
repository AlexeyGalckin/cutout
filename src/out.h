#pragma once
//
#include "prc.h"
//
namespace cut
{
	class out : public prc
	{
	public:
		virtual void operator()(const opt& o) override;
		//
	protected:
	};
}