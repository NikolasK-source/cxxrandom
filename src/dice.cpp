/*
 * Created by Nikolas Koesling on ${Year}-${Month}-${Day}.
 */

#include "cxxrandom.hpp"
#include "random_device.hpp"
#include <stdexcept>

#define LOOP(count) for (unsigned long i = 0; i < (count); ++i)  // NOLINT

signed long cxxrandom::throw_dice(unsigned long num_dice, signed long dice_min, ptrdiff_t dice_max) {
    if (dice_min >= dice_max)
        throw std::invalid_argument(std::string(__PRETTY_FUNCTION__) +  // NOLINT
                                    ": dice_min must be less than dice_max");

    std::uniform_int_distribution<signed long> dice_dist(dice_min, dice_max);

    signed long sum = 0;

    LOOP(num_dice) {
        auto dice_val = dice_dist(rnd.random_engine);
        sum += dice_val;
    }

    return sum;
}

signed long cxxrandom::throw_custom_dice(const std::vector<signed long> &dice_values, unsigned long num_dice) {
    if (dice_values.empty())
        throw std::invalid_argument(std::string(__PRETTY_FUNCTION__) +  // NOLINT
                                    ": dice must have at leas one value");

    std::uniform_int_distribution<unsigned long> dice_dist(0, dice_values.size() - 1);

    signed long sum = 0;

    LOOP(num_dice) {
        auto dice_index = dice_dist(rnd.random_engine);
        sum += dice_values.at(dice_index);
    }

    return sum;
}
