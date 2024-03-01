/*
 * Created by Nikolas Koesling on 2024-03-01.
 */

/*
 * Test: throw 4 custom dices
 */

#include "cxxrandom.hpp"

#include <cassert>
#include <unordered_set>

using cxxrandom::throw_custom_dice;

#define LOOP(count) for (std::size_t i = 0; i < (count); ++i)  // NOLINT

int main() {
    const std::vector<std::ptrdiff_t>  dice_values = {5, 12, 18, 37, 19, 42, -17};
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

    std::unordered_set<std::ptrdiff_t> result_values;
    LOOP(10000) {
        auto tmp = throw_custom_dice(dice_values, 4);
        result_values.insert(tmp);
    }

    assert(result_values == dice_combo);
}
