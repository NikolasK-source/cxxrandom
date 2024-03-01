/*
 * Created by Nikolas Koesling on ${Year}-${Month}-${Day}.
 */

#pragma once

#include <random>

struct Rnd {
    mutable std::random_device         random_device;
    mutable std::default_random_engine random_engine;

    Rnd() : random_engine(random_device()) {}
};

extern const Rnd rnd;
