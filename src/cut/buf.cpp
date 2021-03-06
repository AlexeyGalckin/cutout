#include "buf.h"
//
#include <algorithm>
//
namespace cut
{
	buf::buf(size_t s)
	{
		this->resize(s);
	}
	//
	void buf::resize(size_t s)
	{
		_d.reserve(s);
		_d.resize(s);
		//
		this->rewind();
	}
	//
	buf::data_type buf::data()
	{
		return reinterpret_cast<data_type>(_d.data());
	}
	//
	buf::const_data_type buf::data() const
	{
		return reinterpret_cast<const_data_type>(_d.data());
	}
	//
	bool buf::full() const
	{
		return this->space() == 0;
	}
	//
	void buf::rewind()
	{
		_i = {};
	}
	//
	void buf::seek(size_t s)
	{
		_i = s;
	}
	//
	void buf::advance(size_t s)
	{
		_i += s;
	}
	size_t buf::index() const
	{
		return _i;
	}
	//
	size_t buf::space() const
	{
		return _d.size() - _i;
	}
	//
	size_t buf::size() const
	{
		return _d.size();
	}
	//
	buf& buf::operator<<(buf& b)
	{
		const auto s = std::min(this->space(), b.space());
		//
		const auto st = b.storage().begin() + b.index();
		const auto en = st + s;
		const auto ds = _d.begin() + this->index();
		//
		std::copy(st, en, ds);
		//
		this->advance(s);
		b.advance(s);
		//
		return *this;
	}
	//
	buf::storage_type& buf::storage()
	{
		return _d;
	}

	std::istream& operator>>(std::istream& is, buf& b)
	{
		const auto s = b.space();
		//
		is.read(b.data(), s);
		//
		const auto n = is.gcount();
		//
		b.advance(n);
		//
		if (n != s)
			throw std::runtime_error("Currupted block (too small)!");
		//
		return is;
	}

	std::ostream& operator<<(std::ostream& os, const buf& b)
	{
		os.write(b.data(), b.index());
		//
		if(!os)
			throw std::runtime_error("Could not write data block!");
		//
		return os;
	}
}