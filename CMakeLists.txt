cmake_minimum_required(VERSION 3.16)
project("NowCoder")
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_C_STANDARD 99)
add_subdirectory(googletest)
enable_testing()
include_directories(googletest/googletest/include)
include_directories(googletest/googlemock/include)
include_directories(include)
add_subdirectory(HJ)
add_subdirectory(CPP)
add_subdirectory(CC)
add_subdirectory(BC)
add_subdirectory(Live)