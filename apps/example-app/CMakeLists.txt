#==============================================================================#
# Create executable.
#==============================================================================#
add_executable(CMakeTemplate_example-app)

add_executable(CMakeTemplate::CMakeTemplate_example-app
    ALIAS CMakeTemplate_example-app
)

set_target_properties(CMakeTemplate_example-app
    PROPERTIES 
        OUTPUT_NAME example-app
)

#==============================================================================#
# Set C++ standard to match used language features.
#==============================================================================#
target_compile_features(CMakeTemplate_example-app
    PRIVATE
        cxx_std_11
)

#==============================================================================#
# Link against used libraries.
#==============================================================================#
target_link_libraries(CMakeTemplate_example-app
    PRIVATE
        CMakeTemplate_example-library)

#==============================================================================#
# Add source directory.
#==============================================================================#
add_subdirectory(sources)
