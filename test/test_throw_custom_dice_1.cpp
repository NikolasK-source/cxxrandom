/*
 * Created by Nikolas Koesling on ${Year}-${Month}-${Day}.
 */

/*
 * Test: invalid dice
 */

#include "cxxrandom.hpp"

#include <iostream>
#include <stdexcept>

using cxxrandom::throw_custom_dice;

#define LOOP(count) for (std::size_t i = 0; i < (count); ++i)  // NOLINT

int main() {
    try {
        auto tmp = throw_custom_dice({}, 0);
        static_cast<void>(tmp);
        std::cerr << "Invalid dice accepted" << std::endl;
        exit(1);
    } catch (const std::invalid_argument &) {}  // NOLINT
}
