set(RAII_FILES
    "${CMAKE_CURRENT_SOURCE_DIR}/cpp/matrix.cpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/include/public/raii/matrix.hpp"
)

# add directory structure to IDEs
source_group(TREE "${CMAKE_CURRENT_SOURCE_DIR}/" FILES ${RAII_FILES})

add_library(raii STATIC ${RAII_FILES})

target_include_directories(raii PUBLIC "include/public")