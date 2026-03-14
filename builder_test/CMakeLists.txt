cmake_minimum_required(VERSION 4.2)
project(builder_pattern_test)

file(MAKE_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/output)

add_subdirectory(components/builder_component)
add_executable(${PROJECT_NAME} main.cpp)


set_target_properties(${PROJECT_NAME} 
    PROPERTIES
        RUNTIME_OUTPUT_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/output"
)

target_link_libraries(${PROJECT_NAME}
    PRIVATE
    builder_library
)

target_include_directories(${PROJECT_NAME}
    PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/components/builder_component/include
)


add_custom_target(clean-all
    COMMAND ${CMAKE_COMMAND} -E remove_directory ${CMAKE_CURRENT_SOURCE_DIR}/output
    COMMAND ${CMAKE_COMMAND} -E make_directory ${CMAKE_CURRENT_SOURCE_DIR}/output
    COMMAND ${CMAKE_COMMAND} -E echo "output directory renewed"
)


add_custom_target(rebuild
    COMMAND ${CMAKE_COMMAND} -E remove_directory ${CMAKE_CURRENT_SOURCE_DIR}/output
    COMMAND ${CMAKE_COMMAND} -E make_directory ${CMAKE_CURRENT_SOURCE_DIR}/output
    COMMAND ${CMAKE_COMMAND} -E echo "output directory renewed"
    COMMAND ${CMAKE_COMMAND} -E echo "Rebuilding project"
    COMMAND ${CMAKE_COMMAND} -E chdir ${CMAKE_CURRENT_SOURCE_DIR}/build ${CMAKE_COMMAND} ..
    COMMAND ${CMAKE_COMMAND} -E chdir ${CMAKE_CURRENT_SOURCE_DIR}/build ${CMAKE_COMMAND} --build .
    WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
)
