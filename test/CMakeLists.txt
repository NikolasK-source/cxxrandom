#
# Copyright (C) 2022 Nikolas Koesling <nikolas@koesling.info>.
# This program is free software. You can redistribute it and/or modify it under the terms of the MIT License.
#

enable_testing()

# throw_dice
foreach(i RANGE 5)
    add_executable(test_throw_dice_${i}_${Target} test_throw_dice_${i}.cpp)
    add_test(NAME test_throw_dice_${i}_${Target} COMMAND test_throw_dice_${i}_${Target})
    target_link_libraries(test_throw_dice_${i}_${Target} ${Target})
endforeach()
