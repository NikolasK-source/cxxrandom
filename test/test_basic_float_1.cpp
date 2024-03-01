/*
 * Created by Nikolas Koesling on 2024-03-01.
 */

/*
 * Test: invalid min,max
 */

#include "cxxrandom.hpp"

#include <cassert>
#include <iostream>
#include <limits>
#include <stdexcept>

#define LOOP(count) for (std::size_t i = 0; i < (count); ++i)  // NOLINT

int main() {
    LOOP(10000) {
        auto min = cxxrandom::get(std::numeric_limits<float>::lowest() / 2.f, std::numeric_limits<float>::max() / 2.f);
        auto max = cxxrandom::get(std::numeric_limits<float>::lowest() / 2.f, std::numeric_limits<float>::max() / 2.f);

        try {
            auto rnd = cxxrandom::get(min, max);
            if (min >= max) {
                std::cerr << "Invalid range (" << min << ',' << max << ") accepted" << std::endl;
                exit(1);
            }
            assert(rnd <= max);
            assert(rnd >= min);
        } catch (const std::invalid_argument &) {
            if (min < max) {
                std::cerr << "Valid range (" << min << ',' << max << ") rejected" << std::endl;
                exit(2);
            }
        }
    }
}
