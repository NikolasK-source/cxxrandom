/*
 * Created by Nikolas Koesling on 2024-03-01.
 */

/*
 * Test: throw custom dice (-6..6)
 *    --> result is always in [-6..6]
 */

#include "cxxrandom.hpp"

#include <cassert>
#include <unordered_set>

using cxxrandom::throw_dice;

#define LOOP(count) for (std::size_t i = 0; i < (count); ++i)  // NOLINT

int main() {
    std::unordered_set<long> result_values;
    LOOP(1000) {
        auto tmp = throw_dice(1, -6, 6);
        assert(tmp >= -6);
        assert(tmp <= 6);
        result_values.insert(tmp);
    }

    for (long i = -6; i <= 6; ++i) {
        assert(result_values.contains(i));
    }
}
