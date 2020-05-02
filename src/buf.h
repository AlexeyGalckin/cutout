#pragma once
//
namespace cut
{
	class buf
	{
	public:
		buf() = default;
		buf(size_t s);
		//
		bool full() const;
		//
		void seek(size_t s);
		//
		buf& operator<<(buf& b);
	};
}