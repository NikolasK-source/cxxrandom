/*
 * Created by Nikolas Koesling on 2024-03-01.
 */

/*
 * Test: throw 0 dices --> result is always 0
 */

#include "cxxrandom.hpp"

#include <cassert>

using cxxrandom::throw_custom_dice;

#define LOOP(count) for (std::size_t i = 0; i < (count); ++i)  // NOLINT

int main() {
    LOOP(1000) {
        auto tmp = throw_custom_dice({1, 5, 12, 18, 42}, 0);
        assert(tmp == 0);
    }
}
