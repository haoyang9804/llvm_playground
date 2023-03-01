cmake_minimum_required(VERSION 3.10)
project(LLVM-play)


find_package(LLVM REQUIRED CONFIG)

message(STATUS "Found LLVM ${LLVM_PACKAGE_VERSION}")
message(STATUS "Using LLVMConfig.cmake in: ${LLVM_DIR}")

add_executable(parseCommandLine parseCommandLine.cpp)
target_link_libraries(parseCommandLine LLVMOption LLVMSupport LLVMCore )