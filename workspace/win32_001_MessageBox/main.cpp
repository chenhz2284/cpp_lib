

#include <windows.h>
#include <string>
#include <cstdio>
#include <fstream>
#include <cstdint>
#include <boost\format.hpp>


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
	SimpleFileLog& infoEndl(boost::format& p_format)
	{
		fout << p_format.str();
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


int WINAPI WinMain (HINSTANCE hInstance, HINSTANCE hPrevInstance, PSTR szCmdLine, int iCmdShow)
{
	SimpleFileLog log;

	MessageBox (NULL, TEXT ("Hello, Windows 98!"), TEXT ("HelloMsg"), MB_OKCANCEL  );

	return 0 ;
}


