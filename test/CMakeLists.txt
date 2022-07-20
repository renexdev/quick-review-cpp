set(TEST_BUNDLE ${PROJECT_NAME}_test)

set(SRC_TEST_FILES 
        main.cpp
        codewars/codeWars.unitTest.cpp
        googleSamples/googleSample1.unitTest.cpp
)


# Compile all source files in this folder into one target--test bundle
add_executable(${TEST_BUNDLE} ${SRC_TEST_FILES})

# Specify which targets the test bundle depends on
target_link_libraries(${TEST_BUNDLE} ${APP_BUNDLE} 
        codeWarsLib        
        googleSample1Lib
        GTest::gtest_main
        )

# Register tests
add_test(NAME ${TEST_BUNDLE}
        COMMAND ${TEST_BUNDLE})

include(GoogleTest)
gtest_discover_tests(${PROJECT_NAME}_test)

        