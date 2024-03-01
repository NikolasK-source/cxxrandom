/*
 * Created by Nikolas Koesling on 2024-03-01.
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
        auto min = cxxrandom::get(std::numeric_limits<unsigned long>::min() / 2, 100);  // NOLINT
        auto max = cxxrandom::get(200, std::numeric_limits<unsigned long>::max() / 2);  // NOLINT

        assert(min <= 100);
        assert(max >= 200);

        auto rnd = cxxrandom::get(min, max);
        assert(rnd <= max);
        assert(rnd >= min);
    }
}
