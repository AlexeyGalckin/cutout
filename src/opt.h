#pragma once
//
namespace cut
{
	class rba;
	//
	class opt
	{
	public:
		virtual const rba& rdba() const = 0;
		//
		virtual ~opt() = default;
	};
}