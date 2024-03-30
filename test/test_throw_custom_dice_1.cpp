/*
 * Created by Nikolas Koesling on 2024-03-01.
 */

/*
 * Test: invalid dice
 */

#include "cxxrandom.hpp"

#include <iostream>
#include <stdexcept>

using cxxrandom::throw_custom_dice;

int main() {
    try {
        auto tmp = throw_custom_dice({}, 0);
        static_cast<void>(tmp);
        std::cerr << "Invalid dice accepted" << std::endl;
        exit(1);
    } catch (const std::invalid_argument &) {}  // NOLINT
}
