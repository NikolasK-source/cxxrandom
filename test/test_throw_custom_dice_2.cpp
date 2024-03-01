/*
 * Created by Nikolas Koesling on 2024-03-01.
 */

/*
 * Test: throw custom dice --> result is always 0
 */

#include "cxxrandom.hpp"

#include <algorithm>
#include <cassert>
#include <unordered_set>

using cxxrandom::throw_custom_dice;

#define LOOP(count) for (std::size_t i = 0; i < (count); ++i)  // NOLINT

int main() {
    const std::vector<std::ptrdiff_t> dice_values = {5, 12, 18, 37, 19, 42, -17};

    std::unordered_set<std::ptrdiff_t> result_values;
    LOOP(10000) {
        auto tmp = throw_custom_dice(dice_values);
        result_values.insert(tmp);
        assert(std::find(dice_values.begin(), dice_values.end(), tmp) != dice_values.end());
    }

    for (auto x : dice_values) {
        assert(result_values.contains(x));
    }
}
