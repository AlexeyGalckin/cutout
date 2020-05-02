#pragma once
//
#include <memory>
//
namespace cut
{
	class prm;
	//
	class prc;
	class src;
	//
	class bld
	{
	public:
		virtual std::unique_ptr< prc > make_prc(const prm& p);
		virtual std::unique_ptr< src > make_src(const prm& p);
		//
		virtual ~bld() = default;
	};
}