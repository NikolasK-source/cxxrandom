/*
 * Created by Nikolas Koesling on ${Year}-${Month}-${Day}.
 */

/*
 * Test: throw 1 dice --> result is always in [1,6]
 */

#include "cxxrandom.hpp"

#include <cassert>

using cxxrandom::throw_dice;

#define LOOP(count) for (std::size_t i = 0; i < (count); ++i)  // NOLINT

int main() {
    LOOP(1000) {
        auto tmp = throw_dice(1);
        assert(tmp >= 1);
        assert(tmp <= 6);
    }
}