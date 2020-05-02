#include "arg.h"
//
#include <cxxopts.hpp>
//
namespace cut
{
	arg::arg(int argc, char** argv)
	{
		init(argc, argv);
	}
	//
	void arg::init(int argc, char** argv)
	{
		cxxopts::Options op(argv[0], "Oracle record cutter utility");
		//
		op.add_options()
			("d,dd", "Output dd utility command line only", cxxopts::value<bool>()->implicit_value("false"))
			("b,block", "Redo Log Block Size", cxxopts::value<int>()->default_value("512"))
			("h,header", "A header text copied from a trace file", cxxopts::value<std::string>());
		//
		auto rc = op.parse(argc, argv);
		//
		_d = rc["dd"].as<bool>();
		_b = rc["block"].as<size_t>();
		_r.parse(rc["header"].as<std::string>());
	}
	//
	std::string aex::usage() const
	{
		return std::string();
	}
}