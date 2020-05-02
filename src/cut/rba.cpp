#include "rba.h"
//
#include <sstream>
#include <string_view>
#include <iomanip>
//
namespace cut
{
	static constexpr auto S_RBA = "RBA:";
	static constexpr auto S_LEN = "LEN:";
	//
	rba::rba(const std::string& s)
	{
		this->parse(s);
	}
	//
	void rba::parse(const std::string& s)
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

	unsigned int rba::sno() const
	{
		return _sno;
	}

	unsigned int rba::bno() const
	{
		return _bno;
	}

	unsigned short rba::off() const
	{
		return _off;
	}

	unsigned short rba::len() const
	{
		return _len;
	}
	//
	std::string rba::strrba() const
	{
		std::ostringstream ss;
		//
		ss << std::hex << std::setfill('0');
		ss << "0x";
		ss << std::setw(6) << _sno << ".";
		ss << std::setw(8) << _bno << ".";
		ss << std::setw(4) << _off;
		//
		return ss.str();
	}
}