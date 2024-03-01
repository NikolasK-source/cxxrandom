/*
 * Created by Nikolas Koesling on ${Year}-${Month}-${Day}.
 */

/*
 * Test: throw 2 dice
 *    --> result is always in [2,12]
 */

#include "cxxrandom.hpp"

#include <cassert>
#include <unordered_set>

using cxxrandom::throw_dice;

#define LOOP(count) for (std::size_t i = 0; i < (count); ++i)  // NOLINT

int main() {
    std::unordered_set<std::ptrdiff_t> result_values;
    LOOP(1000) {
        auto tmp = throw_dice(2);
        assert(tmp >= 2);
        assert(tmp <= 12);
        result_values.insert(tmp);
    }

    for (std::ptrdiff_t i = 2; i <= 12; ++i) {
        assert(result_values.contains(i));
    }
}
