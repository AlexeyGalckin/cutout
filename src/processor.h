#pragma once
//
#include <string_view>
//
namespace dump
{
	class rbal;
	//
	class processor
	{
	public:
		virtual void operator()(const std::string_view f, const rbal& r, size_t bs) = 0;
		virtual ~processor() = default;
	};
}