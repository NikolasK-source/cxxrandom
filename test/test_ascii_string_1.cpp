/*
 * Created by Nikolas Koesling on 2024-03-01.
 */

/*
 * Test: random string not equal not equal
 */

#include "cxxrandom.hpp"

#include <cassert>

using cxxrandom::ascii_string;

int main() {
    auto str0 = ascii_string(1024);
    auto str1 = ascii_string(1024);
    auto str2 = ascii_string(1024);
    auto str3 = ascii_string(1024);

    assert(str0 != str1);
    assert(str0 != str2);
    assert(str0 != str3);
    assert(str1 != str2);
    assert(str1 != str3);
    assert(str2 != str3);
}
