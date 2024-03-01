/*
 * Created by Nikolas Koesling on ${Year}-${Month}-${Day}.
 */

/*
 * Test: throw 2 dice
 *    --> result is always in [2,12]
 */

#include "cxxrandom.hpp"

#include <cassert>

using cxxrandom::throw_dice;

#define LOOP(count) for (std::size_t i = 0; i < (count); ++i)  // NOLINT

int main() {
    LOOP(1000) {
        auto tmp = throw_dice(2);
        assert(tmp >= 2);
        assert(tmp <= 12);
    }
}
