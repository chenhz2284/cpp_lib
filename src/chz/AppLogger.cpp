#include <iostream>
#include "chz/AppLogger.h"

using namespace std;

namespace chz
{
    AppLoggerClass::AppLoggerClass()
    {
        //ctor
        m_logger = getLogger("AppLoggerClass");
    }

    AppLoggerClass::~AppLoggerClass()
    {
        //dtor
    }


    void AppLoggerClass::info(const string & str)
    {
        cout << str << endl;
        m_logger->info(str);
    }


    void AppLoggerClass::info(boost::format& input)
    {
        cout << input.str() << endl;
        m_logger->info(input);
    }

    //---------------------------

    AppLoggerClass AppLogger::m_logger;


    void AppLogger::info(const string & str)
    {
        m_logger.info(str);
    }

    void AppLogger::info(boost::format & input)
    {
        m_logger.info(input);
    }

};



