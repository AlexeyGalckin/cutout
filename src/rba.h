#pragma once
//
#include <string>
//
namespace cut
{
	class rba
	{
	public:
		rba() = default;
		rba(const std::string& s);
		//
		void parse(const std::string& s);
		//
		unsigned int sno() const;
		unsigned int bno() const;
		//
		unsigned short off() const;
		unsigned short len() const;
		//
	private:
		unsigned int   _sno = {};
		unsigned int   _bno = {};
		//
		unsigned short _off = {};
		unsigned short _len = {};
	};
}