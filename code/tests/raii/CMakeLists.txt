enable_testing()

set(RAII_TEST_FILES
    "${CMAKE_CURRENT_SOURCE_DIR}/cpp/rule_of_five.cpp"
)

add_executable(tests ${RAII_TEST_FILES})

# add directory structure to IDEs
source_group(TREE "${CMAKE_CURRENT_SOURCE_DIR}/" FILES ${RAII_TEST_FILES})

target_link_libraries(tests PRIVATE raii GTest::gtest_main)

# set up cpp files with precompiled headers
target_precompile_headers(tests PRIVATE <vector> <gtest/gtest.h>)

include(GoogleTest)
# finds all the tests associated with the executable
gtest_discover_tests(tests)