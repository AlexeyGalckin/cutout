#pragma once
//
#include "opt.h"
#include "prm.h"
//
#include "rba.h"
//
namespace cut
{
	class bas : 
		public opt,
		public prm
	{
	public:
		virtual const rba& rdba() const override final;
		//
		virtual bool ddo() const override final;
		virtual size_t bs() const override final;
		//
		virtual const std::string_view fnm() const final;
	protected:
		size_t _b = {};
		rba    _r = {};
		//
		std::string _f = {};
		//
		bool   _d = {};
	};
}