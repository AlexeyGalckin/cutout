#pragma once
//
namespace cut
{
	class opt;
	//
	class prc
	{
	public:
		virtual void operator()(const opt& o) = 0;
		virtual ~prc() = default;
	};
}