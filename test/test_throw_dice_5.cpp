/*
 * Created by Nikolas Koesling on ${Year}-${Month}-${Day}.
 */

/*
 * Test: try to throw invalid dice
 */

#include "cxxrandom.hpp"

#include <cassert>
#include <iostream>
#include <stdexcept>

using cxxrandom::throw_dice;


int main() {
    for (int dmin = -100; dmin <= 100; ++dmin) {
        for (int dmax = -100; dmax <= 100; ++dmax) {
            try {
                auto tmp = throw_dice(1, dmin, dmax);
                if (dmin >= dmax) {
                    std::cerr << "Invalid dice (" << dmin << ',' << dmax << ") was accepted" << std::endl;
                    exit(1);
                }
                assert(tmp >= dmin);
                assert(tmp <= dmax);
            } catch (const std::invalid_argument &) {
                if (dmin < dmax) {
                    std::cerr << "Valid dice (" << dmin << ',' << dmax << ") was not accepted" << std::endl;
                    exit(2);
                }
            }
        }
    }
}
