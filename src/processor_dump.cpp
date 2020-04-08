#include "processor_dump.h"
//
#include "rba.h"
#include "buffer.h"
//
#include <fstream>
#include <iterator>
#include <cstddef>
//
namespace dump
{
	void processor_dump::operator()(const std::string_view f, const rbal& r, size_t s)
	{
		std::ifstream is;
		//
		is.open(f.data(), std::ios::in | std::ios::binary);
		//
		is.seekg(r.bno() * s + r.off());
		//
		while (s > 0)
		{

		}
	}
}