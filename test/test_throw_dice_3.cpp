/*
 * Created by Nikolas Koesling on 2024-03-01.
 */

/*
 * Test: throw 4 dice
 *    --> result is always in [4,64]
 */

#include "cxxrandom.hpp"

#include <cassert>
#include <iostream>
#include <unordered_set>

using cxxrandom::throw_dice;

#define LOOP(count) for (std::size_t i = 0; i < (count); ++i)  // NOLINT

int main() {
    std::unordered_set<std::ptrdiff_t> result_values;

    const std::vector<std::ptrdiff_t>  dice_values = {1, 2, 3, 4, 5, 6};
    std::unordered_set<std::ptrdiff_t> dice_combo;

    for (auto x1 : dice_values) {
        for (auto x2 : dice_values) {
            for (auto x3 : dice_values) {
                for (auto x4 : dice_values) {
                    dice_combo.insert(x1 + x2 + x3 + x4);
                }
            }
        }
    }

    LOOP(10000) {
        auto tmp = throw_dice(4);
        assert(tmp >= 4);
        assert(tmp <= 64);
        result_values.insert(tmp);
    }

    assert(result_values == dice_combo);
}
