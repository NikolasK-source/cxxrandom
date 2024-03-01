/*
 * Created by Nikolas Koesling on 2024-03-01.
 */

/*
 * Test: throw 1 dice --> result is always in [1,6]
 */

#include "cxxrandom.hpp"

#include <cassert>
#include <unordered_set>

using cxxrandom::throw_dice;

#define LOOP(count) for (std::size_t i = 0; i < (count); ++i)  // NOLINT

int main() {
    std::unordered_set<std::ptrdiff_t> result_values;
    LOOP(1000) {
        auto tmp = throw_dice(1);
        assert(tmp >= 1);
        assert(tmp <= 6);
        result_values.insert(tmp);
    }

    for (std::ptrdiff_t i = 1; i <= 6; ++i) {
        assert(result_values.contains(i));
    }
}
