file(GLOB_RECURSE BUILDER_PATTERN_SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp")

add_library(builder_library STATIC ${BUILDER_PATTERN_SOURCES})

set_target_properties(builder_library 
    PROPERTIES 
        ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/output"
)

target_include_directories(builder_library 
    PUBLIC 
        ${CMAKE_CURRENT_SOURCE_DIR}/include)

target_compile_options(builder_library PRIVATE -Wall)
message(STATUS "builder_library sources: ${BUILDER_PATTERN_SOURCES}")

