

add_clang_executable(astplayer ASTPlayer.cpp FileReader.cpp)

target_link_libraries(astplayer
  PRIVATE
  clangAST
  clangBasic
  clangFrontend
  clangSerialization
  clangTooling
  )