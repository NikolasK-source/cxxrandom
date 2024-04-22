/*
 * Created by Nikolas Koesling on 2024-03-01.
 */

#include "cxxrandom.hpp"

std::string cxxrandom::ascii_string(std::size_t length) {
    std::string result(length, ' ');

    for (std::size_t i = length; i; --i)
        result[i - 1] = cxxrandom::get(' ', '~');

    return result;
}
