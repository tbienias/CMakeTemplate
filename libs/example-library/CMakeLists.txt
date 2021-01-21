#==============================================================================#
# Hide exports by default.
#==============================================================================#
set(CMAKE_CXX_VISIBILITY_PRESET     hidden)
set(CMAKE_VISIBILITY_INLINES_HIDDEN YES)

#==============================================================================#
# Create library.
#==============================================================================#
add_library(CMakeTemplate_example-library SHARED)

add_library(CMakeTemplate::CMakeTemplate_example-library
    ALIAS CMakeTemplate_example-library
)

set_target_properties(CMakeTemplate_example-library
    PROPERTIES
        OUTPUT_NAME example-library
)

#==============================================================================#
# Set C++ standard to match used language features.
#==============================================================================#
target_compile_features(CMakeTemplate_example-library
    PUBLIC
        cxx_std_11)

#==============================================================================#
# Declare target includes for public headers.
#==============================================================================#
target_include_directories(CMakeTemplate_example-library
    PUBLIC 
        $<BUILD_INTERFACE:${CMAKE_CURRENT_LIST_DIR}/includes>
        $<BUILD_INTERFACE:${CMAKE_CURRENT_BINARY_DIR}>
)

#==============================================================================#
# Generate export header.
#==============================================================================#
include(GenerateExportHeader)
generate_export_header(CMakeTemplate_example-library
    BASE_NAME examplelibrary
)

#==============================================================================#
# Add sources to build.
#==============================================================================#
add_subdirectory(sources)
