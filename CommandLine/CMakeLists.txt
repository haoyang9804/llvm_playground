

add_executable(parseCommandLine parseCommandLine.cpp)
target_link_libraries(parseCommandLine LLVMOption LLVMSupport LLVMCore )