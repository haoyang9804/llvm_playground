cmake_minimum_required(VERSION 3.10)

message(${CMAKE_SYSTEM_NAME})

if (CMAKE_HOST_SYSTEM_NAME STREQUAL "Darwin")
  set(CMAKE_CXX_COMPILER /opt/homebrew/Cellar/llvm@11/11.1.0_4/bin/clang++)
  set(CMAKE_C_COMPILER /opt/homebrew/Cellar/llvm@11/11.1.0_4/bin/clang)
# elseif(CMAKE_HOST_SYSTEM_NAME STREQUAL "Linux")
endif()


project(LLVM-play)

find_package(LLVM REQUIRED CONFIG)

message(STATUS "Found LLVM ${LLVM_PACKAGE_VERSION}")
message(STATUS "Using LLVMConfig.cmake in: ${LLVM_DIR}")

add_executable(parseCommandLine parseCommandLine.cpp)
target_link_libraries(parseCommandLine LLVMOption LLVMSupport LLVMCore )