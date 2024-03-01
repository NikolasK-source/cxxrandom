/*
 * Created by Nikolas Koesling on ${Year}-${Month}-${Day}.
 */

#include "cxxrandom.hpp"

#include <random>
#include <stdexcept>

#define LOOP(count) for (std::size_t i = 0; i < (count); ++i)  // NOLINT

const static struct Rnd {
    mutable std::random_device         random_device;
    mutable std::default_random_engine random_engine;

    Rnd() : random_engine(random_device()) {}
} rnd;

std::ptrdiff_t cxxrandom::throw_dice(std::size_t num_dice, std::ptrdiff_t dice_min, ptrdiff_t dice_max) {
    if (dice_min >= dice_max)
        throw std::invalid_argument(std::string(__FUNCTION__) +  // NOLINT
                                    ": dice_min must be less than dice_max");

    std::uniform_int_distribution<std::ptrdiff_t> dice_dist(dice_min, dice_max);

    std::ptrdiff_t sum = 0;

    LOOP(num_dice) {
        auto dice_val = dice_dist(rnd.random_engine);
        sum += dice_val;
    }

    return sum;
}