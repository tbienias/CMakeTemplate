#==============================================================================#
# Add sources to executable target.
#==============================================================================#
target_sources(CMakeTemplate_example-app
    PRIVATE
        greeter.cc
)

#==============================================================================#
# Declare target includes for private headers.
#==============================================================================#
target_include_directories(CMakeTemplate_example-app
    PUBLIC $<BUILD_INTERFACE:${CMAKE_CURRENT_LIST_DIR}>
)
