#include "StreamUtil.h"
#include <sstream>
#include <stdexcept>
#include <algorithm>


union data_union
{
    short short_value;
    int32_t int32_value;
    int64_t int64_value;
    float float_value;
    double double_value;
    char char_value[8];
};

//====================


char StreamUtil::readChar(stringstream& ss)
{
    char ch = ss.get();
    if( !ss.good() )
    {
        throw std::logic_error("streanstream fail to read char.");
    }
    else
    {
        return ch;
    }
}


short StreamUtil::readShort(stringstream& ss)
{
    data_union du;
    ss.read(du.char_value, 2);
    if( ss.gcount()!=2 )
    {
        throw std::logic_error("streanstream fail to read short.");
    }
    else
    {
        return du.short_value;
    }
}

short StreamUtil::readNShort(stringstream& ss)
{
    data_union du;
    ss.read(du.char_value, 2);
    if( ss.gcount()!=2 )
    {
        throw std::logic_error("streanstream fail to read short.");
    }
    else
    {
        reverse(du.char_value, du.char_value + 2);
        return du.short_value;
    }
}


int32_t StreamUtil::readInt32(stringstream& ss)
{
    data_union du;
    ss.read(du.char_value, 4);
    if( ss.gcount()!=4 )
    {
        throw std::logic_error("streanstream fail to read int32_t.");
    }
    else
    {
        return du.int32_value;
    }
}

int32_t StreamUtil::readNInt32(stringstream& ss)
{
    data_union du;
    ss.read(du.char_value, 4);
    if( ss.gcount()!=4 )
    {
        throw std::logic_error("streanstream fail to read int32_t.");
    }
    else
    {
        reverse(du.char_value, du.char_value + 4);
        return du.int32_value;
    }
}

int64_t StreamUtil::readInt64(stringstream& ss)
{
    data_union du;
    ss.read(du.char_value, 8);
    if( ss.gcount()!=8 )
    {
        throw std::logic_error("streanstream fail to read int64_t.");
    }
    else
    {
        return du.int64_value;
    }
}

int64_t StreamUtil::readNInt64(stringstream& ss)
{
    data_union du;
    ss.read(du.char_value, 8);
    if( ss.gcount()!=8 )
    {
        throw std::logic_error("streanstream fail to read int64_t.");
    }
    else
    {
        reverse(du.char_value, du.char_value + 8);
        return du.int64_value;
    }
}

float StreamUtil::readFloat(stringstream& ss)
{
    data_union du;
    ss.read(du.char_value, 4);
    if( ss.gcount()!=4 )
    {
        throw std::logic_error("streanstream fail to read float.");
    }
    else
    {
        return du.float_value;
    }
}

double StreamUtil::readDouble(stringstream& ss)
{
    data_union du;
    ss.read(du.char_value, 8);
    if( ss.gcount()!=8 )
    {
        throw std::logic_error("streanstream fail to read double.");
    }
    else
    {
        return du.double_value;
    }
}

//================================

bool StreamUtil::writeChar(stringstream& ss, char ch)
{
    ss.put(ch);
    return ss.good();
}

bool StreamUtil::writeShort(stringstream& ss, short short_value)
{
    data_union du;
    du.short_value = short_value;
    ss.write(du.char_value, 2);
    return ss.good();
}

bool StreamUtil::writeNShort(stringstream& ss, short short_value)
{
    data_union du;
    du.short_value = short_value;
    reverse(du.char_value, du.char_value + 2);
    ss.write(du.char_value, 2);
    return ss.good();
}

bool StreamUtil::writeInt32(stringstream& ss, int32_t int32_value)
{
    data_union du;
    du.int32_value = int32_value;
    ss.write(du.char_value, 4);
    return ss.good();
}

bool StreamUtil::writeNInt32(stringstream& ss, int32_t int32_value)
{
    data_union du;
    du.int32_value = int32_value;
    reverse(du.char_value, du.char_value + 4);
    ss.write(du.char_value, 4);
    return ss.good();
}

bool StreamUtil::writeInt64(stringstream& ss, int64_t int64_value)
{
    data_union du;
    du.int64_value = int64_value;
    ss.write(du.char_value, 8);
    return ss.good();
}

bool StreamUtil::writeNInt64(stringstream& ss, int64_t int64_value)
{
    data_union du;
    du.int64_value = int64_value;
    reverse(du.char_value, du.char_value + 8);
    ss.write(du.char_value, 8);
    return ss.good();
}

bool StreamUtil::writeFloat(stringstream& ss, float float_value)
{
    data_union du;
    du.float_value = float_value;
    ss.write(du.char_value, 4);
    return ss.good();
}

bool StreamUtil::writeDouble(stringstream& ss, double double_value)
{
    data_union du;
    du.double_value = double_value;
    ss.write(du.char_value, 8);
    return ss.good();
}

////////////////////////////////


