

add_clang_executable(astplayer ASTplayer.cpp FileReader.cpp)

target_link_libraries(astplayer
  PRIVATE
  clangAST
  clangBasic
  clangFrontend
  clangSerialization
  clangTooling
  )