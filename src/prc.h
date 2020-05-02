#pragma once
//
namespace cut
{
	class opt;
	//
	class prc
	{
	public:
		static constexpr size_t header_size = 16;
		//
		virtual void operator()(const opt& o) = 0;
		virtual ~prc() = default;
	};
}