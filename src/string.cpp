/*
 * Created by Nikolas Koesling on 2024-03-01.
 */

#include "cxxrandom.hpp"
#include <sstream>

std::string cxxrandom::ascii_string(std::size_t length) {
    std::ostringstream result;

    for (std::size_t i = length; i; --i)
        result << cxxrandom::get(' ', '~');

    return result.str();
}
