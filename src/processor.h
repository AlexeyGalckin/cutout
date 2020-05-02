#pragma once
//
namespace dump
{
	class options;
	//
	class processor
	{
	public:
		virtual void operator()(const options& opt) = 0;
		virtual ~processor() = default;
	};
}