#
# Copyright (C) 2022 Nikolas Koesling <nikolas@koesling.info>.
# This program is free software. You can redistribute it and/or modify it under the terms of the MIT License.
#

# ---------------------------------------- header files (*.hpp, *.h, ...) ----------------------------------------------
# ======================================================================================================================

file(GLOB tmp CONFIGURE_DEPENDS "*.hpp")
target_sources(${Target} PRIVATE ${tmp})

# ---------------------------------------- subdirectories --------------------------------------------------------------
# ======================================================================================================================
