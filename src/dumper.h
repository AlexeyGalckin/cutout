#pragma once
//
#include "processor.h"
//
namespace dump
{
	class dumper : public processor
	{
	public:
		virtual void operator()(const options& opt) override;
		//
	protected:
	};
}