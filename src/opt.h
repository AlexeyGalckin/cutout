#pragma once
//
namespace cut
{
	class rba;
	//
	class opt
	{
	public:
		virtual size_t bs() const = 0;
		virtual const rba& rdba() const = 0;
		//
		virtual ~opt() = default;
	};
}