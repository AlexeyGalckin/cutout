#pragma once
//
#include <vector>
//
#include <cstddef>
#include <ostream>
//
namespace cut
{
	class buf
	{
	public:
		using byte_type = std::byte;
		using data_type = char*;
		//
		buf() = default;
		buf(size_t s);
		//
		void resize(size_t s);
		//
		data_type data();
		//
		void rewind();
		void seek(size_t s);
		void advance(size_t s);
		//
		size_t index() const;
		size_t space() const;
		size_t  size() const;
		bool    full() const;
		//
		buf& operator<<(buf& b);
	private:
		using storage_type = std::vector< byte_type >;
		using index_type = storage_type::size_type;
		//
		storage_type& storage();
		//
		storage_type _d = {};
		index_type   _i = {};
	};
	//
	//std::ostream& operator<<(std::ostream& os, const buf& b);
	//std::ostream& operator<<(std::ostream& os, buf& b);
}