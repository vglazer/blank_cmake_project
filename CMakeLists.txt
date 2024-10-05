cmake_minimum_required(VERSION 3.12)
project(MyProject VERSION 0.1.0 LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)
FetchContent_MakeAvailable(googletest)

include(CTest)
enable_testing()

add_executable(
    main
    main.cpp myfunctions.cpp
)

add_executable(
    mytests 
    mytests.cpp myfunctions.cpp
)

target_link_libraries(
  mytests
  GTest::gtest_main
  GTest::gmock_main
)

include(GoogleTest)
gtest_discover_tests(mytests)
