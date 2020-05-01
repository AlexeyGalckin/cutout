#pragma once
//
#include <string_view>
//
#include "rba.h"
//
namespace dump
{
	class processor
	{
	public:
		virtual void operator()(const std::string_view f, rbal r, size_t bs) = 0;
		virtual ~processor() = default;
	};
}