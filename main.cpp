#include <vector>
#include <cstdint>
#include <iostream>

std::vector<uint8_t> stringToBytes( const std::string& str )
{
    std::vector<uint8_t> result( str.size() );

    for( char c : str )
    {
        result.push_back( static_cast<uint8_t>(c) );
    }

    return result;

}

std::string bytesToString( const std::vector<uint8_t> str )
{
    std::string result;

    for( char c : str )
    {
        result.push_back( static_cast<char>(c) );
    }

    return result;

}

std::vector<uint8_t> xorEncode(const std::vector<uint8_t> data, const std::vector<uint8_t> key)
{
    
    std::vector<uint8_t> encoded;

    if ( !key.empty() )
    {
        encoded.reserve(data.size());
    
        size_t keyIndex = 0;
        for (uint8_t byte : data) {
            encoded.push_back(byte ^ key[keyIndex]);
            keyIndex = (keyIndex + 1) % key.size();
        }
    }
    
    return encoded;
}

std::vector<uint8_t> xorDecode(const std::vector<uint8_t> encodedData, const std::vector<uint8_t> key)
{
    return xorEncode(encodedData, key);
}

auto main( int args, const char** params ) -> int
{
    auto str_to_bytes = stringToBytes("Hello World");
    auto str_key_to_bytes = stringToBytes("insecure123");

    return 0x00;
}