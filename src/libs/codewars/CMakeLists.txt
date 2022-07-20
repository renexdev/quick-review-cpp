
add_library(codeWarsLib my_code_exercises.cpp)


target_include_directories(codeWarsLib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)