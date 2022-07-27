
add_executable(lambda_function.app main.cpp)

target_include_directories(lambda_function.app PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
