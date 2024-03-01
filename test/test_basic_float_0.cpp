/*
 * Created by Nikolas Koesling on 2024-03-01.
 */

/*
 * Test: get random floats
 */

#include "cxxrandom.hpp"

#include <cassert>
#include <limits>

#define LOOP(count) for (std::size_t i = 0; i < (count); ++i)  // NOLINT

int main() {
    LOOP(1000) {
        auto min = cxxrandom::get(std::numeric_limits<float>::lowest() / 2, -128.f);  // NOLINT
        auto max = cxxrandom::get(127.f, std::numeric_limits<float>::max() / 2);      // NOLINT

        assert(min <= -128.f);
        assert(max >= 127.f);

        auto rnd = cxxrandom::get(min, max);
        assert(rnd <= max);
        assert(rnd >= min);
    }
}
