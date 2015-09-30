#ifndef DATA_TRANSFORM_INCLUDED
#define DATA_TRANSFORM_INCLUDED

#include <iostream>

using namespace std;

namespace chz
{
	namespace data_transform
	{
		//
		template<typename From>
		void toString(From & from, string & str)
		{
			ostringstream oss;
			oss << from;
			str = oss.str();
		};

		//
		template<typename From>
		string toString(From & from)
		{
			string str;
			toString(from, str);
			return str;
		};

		//
		template<typename To>
		To fromString(const string & from, To & to)
		{
		    stringstream ss;
		    ss << from;
		    ss >> to;
		    return to;
		}

		//
		template<typename To>
		To fromString(const string & from)
		{
		    To to;
		    stringstream ss;
		    ss << from;
		    ss >> to;
		    return to;
		}
	};
};


#endif // DATA_TRANSFORM_INCLUDED
