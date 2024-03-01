/*
 * Created by Nikolas Koesling on 2024-03-01.
 */

/*
 * Test: check string length
 */

#include "cxxrandom.hpp"

#include <cassert>

using cxxrandom::ascii_string;

#define LOOP(count) for (std::size_t i = 0; i < (count); ++i)  // NOLINT

int main() {
    LOOP(1000) {
        auto length = cxxrandom::get(static_cast<std::size_t>(128), static_cast<std::size_t>(8192));
        auto str    = ascii_string(length);
        assert(str.size() == length);
    }
}
