#ifndef HPP_MODE
#define HPP_MODE

#include <string>

#if defined(__APPLE__) || defined(__MACOSX)
#include <OpenCL/cl.h>
#else
#include <CL/cl.h>
#endif

class Mode {
	private:
		Mode();

	public:
		// TRON vanity address modes
		static Mode tronRepeat(size_t minCount = 4);      // 豹子号，minCount=最少重复位数
		static Mode tronSequential(size_t minCount = 4);  // 顺子号，minCount=最少连续位数
		static Mode tronSuffix(const std::string suffix); // 自定义后缀
		static Mode tronLucky();                          // 谐音靓号
		static Mode benchmark();                          // 性能测试

		std::string name;
		std::string kernel;

		cl_uchar data1[20];
		cl_uchar data2[20];
		cl_uchar score;
};

#endif /* HPP_MODE */
