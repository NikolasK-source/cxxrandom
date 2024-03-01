/*
 * Created by Nikolas Koesling on ${Year}-${Month}-${Day}.
 */

/*
 * Test: throw custom dice (-6..6)
 *    --> result is always in [-6..6]
 */

#include "cxxrandom.hpp"

#include <cassert>

using cxxrandom::throw_dice;

#define LOOP(count) for (std::size_t i = 0; i < (count); ++i)  // NOLINT

int main() {
    LOOP(1000) {
        auto tmp = throw_dice(1, -6, 6);
        assert(tmp >= -6);
        assert(tmp <= 6);
    }
}
