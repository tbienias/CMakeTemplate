#==============================================================================#
# Add sources to executable target.
#==============================================================================#
target_sources(CMakeTemplate_example-app
    PRIVATE
        greeter.cc
)

#==============================================================================#
# Tell CMake about C++ features used in source files.
#==============================================================================#
target_compile_features(CMakeTemplate_example-app
    PRIVATE
        cxx_auto_type
        cxx_final
)

#==============================================================================#
# Declare target includes for private headers.
#==============================================================================#
target_include_directories(CMakeTemplate_example-app
    PUBLIC $<BUILD_INTERFACE:${CMAKE_CURRENT_LIST_DIR}>
)
