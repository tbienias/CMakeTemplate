#==============================================================================#
# Add sources to library target.
#==============================================================================#
target_sources(CMakeTemplate_example-library
    PRIVATE
        cppstring.cc
)

#==============================================================================#
# Declare target includes for private headers.
#==============================================================================#
target_include_directories(CMakeTemplate_example-library
    PRIVATE $<BUILD_INTERFACE:${CMAKE_CURRENT_LIST_DIR}>
)
