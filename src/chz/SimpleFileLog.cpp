

#include <cstdio>
#include <string>
#include <fstream>

class SimpleFileLog
{
public:
	SimpleFileLog():fout("win32_test2.log", std::ios_base::binary | std::ios_base::app)
	{
	};
	std::ofstream& operator<<(std::string str)
	{
		fout << str;
		return fout;
	};
	SimpleFileLog& info(std::string str)
	{
		fout << str;
		return *this;
	};
	SimpleFileLog& infoEndl(std::string str)
	{
		fout << str;
		fout << std::endl;
		fout.flush();
		return *this;
	};
	SimpleFileLog& endl()
	{
		fout << std::endl;
		fout.flush();
		return *this;
	};
private:
	std::ofstream fout;
};








