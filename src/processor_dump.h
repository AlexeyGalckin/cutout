#pragma once
//
#include "processor.h"
//
namespace dump
{
	//
	class processor_dump : public processor
	{
	public:
		virtual void operator()(const std::string_view f, rbal r, size_t s) override;
		//
	};
}