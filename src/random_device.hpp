/*
 * Created by Nikolas Koesling on 2024-03-01.
 */

#pragma once

#include <random>

namespace cxxrandom {

struct Rnd {
    mutable std::random_device         random_device;
    mutable std::default_random_engine random_engine;

    Rnd() : random_engine(random_device()) {}
};

extern const Rnd rnd;

}  // namespace cxxrandom
