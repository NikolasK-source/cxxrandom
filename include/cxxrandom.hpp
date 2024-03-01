/*
 * Created by Nikolas Koesling on ${Year}-${Month}-${Day}.
 */

#pragma once

#include <cstddef>

namespace cxxrandom {

/**
 * @brief
 * @param num_dice
 * @return value
 */

/**
 * @brief simulate throwing the dice
 * @details
 *      simulates throwing of dices with subsequent number sequences (e.g. 1..6, 1..12, -5,..6, ...)
 * @param num_dice number of dice
 * @param dice_min lowest value of each dice
 * @param dice_max highest value of each dice
 * @return sum of all dices
 * @throws std::invalid_argument if dice_min >= dice_max
 */
std::ptrdiff_t throw_dice(std::size_t num_dice = 1, std::ptrdiff_t dice_min = 1, ptrdiff_t dice_max = 6);

}  // namespace cxxrandom