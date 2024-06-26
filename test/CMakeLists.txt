#
# Copyright (C) 2022 Nikolas Koesling <nikolas@koesling.info>.
# This program is free software. You can redistribute it and/or modify it under the terms of the MIT License.
#

function(set_cxx_standard target)
    set_target_properties(${target} PROPERTIES
        CXX_STANDARD ${STANDARD}
        CXX_STANDARD_REQUIRED ON
        CXX_EXTENSIONS ${COMPILER_EXTENSIONS}
    )
endfunction()

enable_testing()

# throw_dice
foreach (i RANGE 5)
    add_executable(test_throw_dice_${i}_${Target} test_throw_dice_${i}.cpp)
    add_test(NAME test_throw_dice_${i}_${Target} COMMAND test_throw_dice_${i}_${Target})
    target_link_libraries(test_throw_dice_${i}_${Target} ${Target})
    set_options(test_throw_dice_${i}_${Target} OFF)
    set_cxx_standard(test_throw_dice_${i}_${Target})
endforeach ()

foreach (i RANGE 4)
    add_executable(test_throw_custom_dice_${i}_${Target} test_throw_custom_dice_${i}.cpp)
    add_test(NAME test_throw_custom_dice_${i}_${Target} COMMAND test_throw_custom_dice_${i}_${Target})
    target_link_libraries(test_throw_custom_dice_${i}_${Target} ${Target})
    set_options(test_throw_custom_dice_${i}_${Target} OFF)
    set_cxx_standard(test_throw_custom_dice_${i}_${Target})
endforeach ()

foreach (i RANGE 1)
    add_executable(test_basic_signed_${i}_${Target} test_basic_signed_${i}.cpp)
    add_test(NAME test_basic_signed_${i}_${Target} COMMAND test_basic_signed_${i}_${Target})
    target_link_libraries(test_basic_signed_${i}_${Target} ${Target})
    set_options(test_basic_signed_${i}_${Target} OFF)
    set_cxx_standard(test_basic_signed_${i}_${Target})
endforeach ()

foreach (i RANGE 1)
    add_executable(test_basic_unsigned_${i}_${Target} test_basic_unsigned_${i}.cpp)
    add_test(NAME test_basic_unsigned_${i}_${Target} COMMAND test_basic_unsigned_${i}_${Target})
    target_link_libraries(test_basic_unsigned_${i}_${Target} ${Target})
    set_options(test_basic_unsigned_${i}_${Target} OFF)
    set_cxx_standard(test_basic_unsigned_${i}_${Target})
endforeach ()

foreach (i RANGE 1)
    add_executable(test_basic_float_${i}_${Target} test_basic_float_${i}.cpp)
    add_test(NAME test_basic_float_${i}_${Target} COMMAND test_basic_float_${i}_${Target})
    target_link_libraries(test_basic_float_${i}_${Target} ${Target})
    set_options(test_basic_float_${i}_${Target} OFF)
    set_cxx_standard(test_basic_float_${i}_${Target})
endforeach ()

foreach (i RANGE 1)
    add_executable(test_basic_double_${i}_${Target} test_basic_double_${i}.cpp)
    add_test(NAME test_basic_double_${i}_${Target} COMMAND test_basic_double_${i}_${Target})
    target_link_libraries(test_basic_double_${i}_${Target} ${Target})
    set_options(test_basic_double_${i}_${Target} OFF)
    set_cxx_standard(test_basic_double_${i}_${Target})
endforeach ()

foreach (i RANGE 1)
    add_executable(test_ascii_string_${i}_${Target} test_ascii_string_${i}.cpp)
    add_test(NAME test_ascii_string_${i}_${Target} COMMAND test_ascii_string_${i}_${Target})
    target_link_libraries(test_ascii_string_${i}_${Target} ${Target})
    set_options(test_ascii_string_${i}_${Target} OFF)
    set_cxx_standard(test_ascii_string_${i}_${Target})
endforeach ()

