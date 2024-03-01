/*
 * Created by Nikolas Koesling on ${Year}-${Month}-${Day}.
 */

#pragma once

#include <cstddef>
#include <vector>

namespace cxxrandom {

// #####################################################################################################################
// #####################################################################################################################
// Basic
// #####################################################################################################################
// #####################################################################################################################

/**
 * @brief get random signed integer
 * @param min lower bound (inclusive)
 * @param max upper bound (inclusive)
 * @return random value
 */
signed long get(signed long min, signed long max);

/**
 * @brief get random unsigned integer
 * @param min lower bound (inclusive)
 * @param max upper bound (inclusive)
 * @return random value
 */
unsigned long get(unsigned long min, unsigned long max);

/**
 * @brief get random cahr
 * @param min lower bound (inclusive)
 * @param max upper bound (inclusive)
 * @return random value
 */
char get(char min, char max);

/**
 * @brief get random float
 * @param min lower bound (inclusive)
 * @param max upper bound (inclusive)
 * @return random value
 */
float get(float min, float max);

/**
 * @brief get random double
 * @param min lower bound (inclusive)
 * @param max upper bound (inclusive)
 * @return random value
 */
double get(double min, double max);

// #####################################################################################################################
// #####################################################################################################################
// Dice
// #####################################################################################################################
// #####################################################################################################################

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
signed long throw_dice(unsigned long num_dice = 1, signed long dice_min = 1, ptrdiff_t dice_max = 6);

/**
 * @brief throw dice with custom values
 * @param dice_values
 * @param num_dice
 * @return signed long
 */
signed long throw_custom_dice(const std::vector<signed long> &dice_values, unsigned long num_dice = 1);

}  // namespace cxxrandom
