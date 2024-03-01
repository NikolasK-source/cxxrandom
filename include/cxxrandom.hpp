/*
 * Created by Nikolas Koesling on ${Year}-${Month}-${Day}.
 */

#pragma once

#include <cstddef>
#include <vector>

namespace cxxrandom {

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

/**
 * @brief throw dice with custom values
 * @param dice_values
 * @param num_dice
 * @return std::ptrdiff_t
 */
std::ptrdiff_t throw_custom_dice(const std::vector<std::ptrdiff_t> &dice_values, std::size_t num_dice = 1);

}  // namespace cxxrandom
