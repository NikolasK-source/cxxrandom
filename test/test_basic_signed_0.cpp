/*
 * Created by Nikolas Koesling on ${Year}-${Month}-${Day}.
 */

/*
 * Test: get random integers
 */

#include "cxxrandom.hpp"

#include <cassert>
#include <limits>

#define LOOP(count) for (std::size_t i = 0; i < (count); ++i)  // NOLINT

int main() {
    LOOP(1000) {
        auto min = cxxrandom::get(std::numeric_limits<long>::min() / 2, -128);  // NOLINT
        auto max = cxxrandom::get(127, std::numeric_limits<long>::max() / 2);   // NOLINT

        assert(min <= -128);
        assert(max >= 127);

        auto rnd = cxxrandom::get(min, max);
        assert(rnd <= max);
        assert(rnd >= min);
    }
}
