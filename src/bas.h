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
		virtual size_t bs() const override final;
		virtual const rba& rdba() const override final;
		//
		virtual bool ddo() const override final;
		virtual const std::string& fnm() const final;
	protected:
		size_t _b = {};
		rba    _r = {};
		//
		std::string _f = {};
		//
		bool   _d = {};
	};
}