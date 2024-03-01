/*
 * Created by Nikolas Koesling on 2024-03-01.
 */

/*
 * Test: throw 2 custom dices
 */

#include "cxxrandom.hpp"

#include <cassert>
#include <unordered_set>

using cxxrandom::throw_custom_dice;

#define LOOP(count) for (std::size_t i = 0; i < (count); ++i)  // NOLINT

int main() {
    const std::vector<std::ptrdiff_t>  dice_values = {5, 12, 18, 37, 19, 42, -17};
    std::unordered_set<std::ptrdiff_t> dice_combo;

    for (auto x : dice_values) {
        for (auto y : dice_values) {
            dice_combo.insert(x + y);
        }
    }

    std::unordered_set<std::ptrdiff_t> result_values;
    LOOP(10000) {
        auto tmp = throw_custom_dice(dice_values, 2);
        result_values.insert(tmp);
    }

    assert(result_values == dice_combo);
}
