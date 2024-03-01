/*
 * Created by Nikolas Koesling on ${Year}-${Month}-${Day}.
 */

/*
 * Test: throw 80 dice
 *    --> result is always in [80,960]
 */

#include "cxxrandom.hpp"

#include <cassert>

using cxxrandom::throw_dice;

#define LOOP(count) for (std::size_t i = 0; i < (count); ++i)  // NOLINT

int main() {
    LOOP(1000) {
        auto tmp = throw_dice(80);
        assert(tmp >= 80);
        assert(tmp <= 960);
    }
}
