#ifndef APPLOGGER_H
#define APPLOGGER_H

#include <string>
#include <util/logging.h>

using namespace std;
using namespace zhicloud::util;

namespace chz {};
using namespace chz;

namespace chz
{

    class AppLoggerClass
    {
        public:
            AppLoggerClass();
            virtual ~AppLoggerClass();
            void info(const string & str);
            void info(boost::format & input);
        protected:
            logger_type m_logger;
        private:

    };

    class AppLogger
    {
    public:
        static void info(const string & str);
        static void info(boost::format & input);
    private:
         static AppLoggerClass m_logger;
    };

};


#endif // APPLOGGER_H
