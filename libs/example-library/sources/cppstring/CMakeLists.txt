#==============================================================================#
# Add sources to library target.
#==============================================================================#
target_sources(CMakeTemplate_example-library
    PRIVATE
        cppstring.cc
)

#==============================================================================#
# Tell CMake about C++ features used in source files.
#==============================================================================#
target_compile_features(CMakeTemplate_example-library
    PRIVATE
        cxx_auto_type
        cxx_final
)

#==============================================================================#
# Declare target includes for private headers.
#==============================================================================#
target_include_directories(CMakeTemplate_example-library
    PRIVATE $<BUILD_INTERFACE:${CMAKE_CURRENT_LIST_DIR}>
)
