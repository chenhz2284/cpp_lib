#ifndef STREAMUTIL_H
#define STREAMUTIL_H

#include <sstream>
#include <cstdint>

using namespace std;




class StreamUtil
{
    public:

        static char readChar(stringstream& ss);
        static short readShort(stringstream& ss);
        static int32_t readInt32(stringstream& ss);
        static int64_t readInt64(stringstream& ss);
        static float readFloat(stringstream& ss);
        static double readDouble(stringstream& ss);

        static short readNShort(stringstream& ss);
        static int32_t readNInt32(stringstream& ss);
        static int64_t readNInt64(stringstream& ss);

        static bool writeChar(stringstream& ss, char char_value);
        static bool writeShort(stringstream& ss, short short_value);
        static bool writeInt32(stringstream& ss, int32_t int32_value);
        static bool writeInt64(stringstream& ss, int64_t int64_value);
        static bool writeFloat(stringstream& ss, float float_value);
        static bool writeDouble(stringstream& ss, double double_value);

        static bool writeNShort(stringstream& ss, short short_value);
        static bool writeNInt32(stringstream& ss, int32_t int32_value);
        static bool writeNInt64(stringstream& ss, int64_t int64_value);

    protected:
    private:
};

#endif // STREAMUTIL_H
