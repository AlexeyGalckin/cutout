#include "rba.h"
//
#include <sstream>
#include <string_view>
#include <iomanip>
//
namespace dump
{
	static constexpr auto S_RBA = "RBA:";
	static constexpr auto S_LEN = "LEN:";
	//
	rbal::rbal(const std::string& s)
	{
		this->parse(s);
	}
	//
	void rbal::parse(const std::string& s)
	{
		std::istringstream ss(s);
		std::string t;
		//
		while (ss >> t)
		{
			if (t == S_RBA)
			{
				ss >> std::hex >> _sno >> t[0];
				ss >> std::hex >> _bno >> t[0];
				ss >> std::hex >> _off;
			}
			else if (t == S_LEN)
			{
				ss >> std::hex >> _len;
			}
		}
	}

	unsigned int rbal::sno() const
	{
		return _sno;
	}

	unsigned int rbal::bno() const
	{
		return _bno;
	}

	unsigned short rbal::off() const
	{
		return _off;
	}

	unsigned short rbal::len() const
	{
		return _len;
	}
}