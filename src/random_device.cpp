/*
 * Created by Nikolas Koesling on 2024-03-01.
 */

#include "random_device.hpp"
#include "cxxrandom.hpp"

namespace cxxrandom {

const Rnd rnd;

std::default_random_engine &get_random_engine() {
    return rnd.random_engine;
}

}  // namespace cxxrandom
