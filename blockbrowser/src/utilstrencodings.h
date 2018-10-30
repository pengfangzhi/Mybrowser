#ifndef UTILSTRENCODINGS_H
#define UTILSTRENCODINGS_H

#include <stdint.h>
#include <string>
#include <vector>




std::string EncodeBase64(const unsigned char* pch, size_t len);

std::string EncodeBase64(const std::string& str);

void SplitHostPort(std::string in, int &portOut, std::string &hostOut);

int64_t atoi64(const std::string& str);

int atoi(const std::string& str);

bool ParseInt32(const std::string& str, int32_t *out);

std::string FormatParagraph(const std::string& in, size_t width, size_t indent);

template<int frombits, int tobits, bool pad, typename O, typename I>
bool ConvertBits(const O& outfn, I it, I end) {
    size_t acc = 0;
    size_t bits = 0;
    constexpr size_t maxv = (1 << tobits) - 1;
    constexpr size_t max_acc = (1 << (frombits + tobits - 1)) - 1;
    while (it != end) {
        acc = ((acc << frombits) | *it) & max_acc;
        bits += frombits;
        while (bits >= tobits) {
            bits -= tobits;
            outfn((acc >> bits) & maxv);
        }
        ++it;
    }
    if (pad) {
        if (bits) outfn((acc << (tobits - bits)) & maxv);
    } else if (bits >= frombits || ((acc << (tobits - bits)) & maxv)) {
        return false;
    }
    return true;
}

#endif // UTILSTRENCODINGS_H
