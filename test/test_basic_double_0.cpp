/*
 * Created by Nikolas Koesling on 2024-03-01.
 */

/*
 * Test: get random doubles
 */

#include "cxxrandom.hpp"

#include <cassert>
#include <limits>

#define LOOP(count) for (std::size_t i = 0; i < (count); ++i)  // NOLINT

int main() {
    LOOP(1000) {
        auto min = cxxrandom::get(std::numeric_limits<double>::lowest() / 2, -128.0);  // NOLINT
        auto max = cxxrandom::get(127.0, std::numeric_limits<double>::max() / 2);      // NOLINT

        assert(min <= -128.0);
        assert(max >= 127.0);

        auto rnd = cxxrandom::get(min, max);
        assert(rnd <= max);
        assert(rnd >= min);
    }
}
