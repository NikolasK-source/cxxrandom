/*
 * Created by Nikolas Koesling on 2024-03-01.
 */

#include "cxxrandom.hpp"
#include "random_device.hpp"
#include <stdexcept>

template <typename T>
static T random_int(T min, T max) {
    std::uniform_int_distribution<T> dist(min, max);
    return dist(cxxrandom::rnd.random_engine);
}

template <typename T>
static T random_float(T min, T max) {
    std::uniform_real_distribution<T> dist(min, max);
    return dist(cxxrandom::rnd.random_engine);
}

std::ptrdiff_t cxxrandom::get(std::ptrdiff_t min, std::ptrdiff_t max) {
    if (min >= max)
        throw std::invalid_argument(std::string(__PRETTY_FUNCTION__) + ": min must be less than max");  // NOLINT
    return random_int(min, max);
}

std::size_t cxxrandom::get(std::size_t min, std::size_t max) {
    if (min >= max)
        throw std::invalid_argument(std::string(__PRETTY_FUNCTION__) + ": min must be less than max");  // NOLINT
    return random_int(min, max);
}

char cxxrandom::get(char min, char max) {
    if (min >= max)
        throw std::invalid_argument(std::string(__PRETTY_FUNCTION__) + ": min must be less than max");  // NOLINT
    return random_int(min, max);
}

float cxxrandom::get(float min, float max) {
    if (min >= max)
        throw std::invalid_argument(std::string(__PRETTY_FUNCTION__) + ": min must be less than max");  // NOLINT
    return random_float(min, max);
}

double cxxrandom::get(double min, double max) {
    if (min >= max) throw std::invalid_argument(std::string(__FUNCTION__) + ": min must be less than max");  // NOLINT
    return random_float(min, max);
}
