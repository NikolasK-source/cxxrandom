#
# Copyright (C) 2022 Nikolas Koesling <nikolas@koesling.info>.
# This program is free software. You can redistribute it and/or modify it under the terms of the MIT License.
#

# ---------------------------------------- source files (*.cpp, *.cc, ...) ---------------------------------------------
# ======================================================================================================================
# ---------------------------------------- header files (*.hpp, *.h, ...) ----------------------------------------------
# -------------------- place only header files in the src folder that are required only internally. --------------------
# ======================================================================================================================

file(GLOB tmp CONFIGURE_DEPENDS "*.hpp" "*.cpp")
target_sources(${Target} PRIVATE ${tmp})

# ---------------------------------------- subdirectories --------------------------------------------------------------
# ======================================================================================================================

add_subdirectory(generated)
