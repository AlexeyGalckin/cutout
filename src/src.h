#pragma once
//
namespace cut
{
	class buf;
	//
	class src
	{
	public:
		//
		virtual void seek(size_t b) = 0;
		//
		virtual operator bool() const = 0;
		virtual src& operator>>(buf& b) = 0;
		//
		virtual ~src() = default;
	};
}