#==============================================================================#
# Preamble containing minimum CMake version, project definition and generation
# of compile_commangs.json for clang related tools.
#==============================================================================#
cmake_minimum_required (VERSION 3.19)

project(CMakeTemplate
        VERSION 0.1.0
        DESCRIPTION "CMake Project Template."
        LANGUAGES CXX
)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

#==============================================================================#
# Add directories containing executable apps and library targets.
#==============================================================================#
add_subdirectory(apps)
add_subdirectory(libs)
