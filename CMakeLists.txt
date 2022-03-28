cmake_minimum_required (VERSION 3.16)
project(integers)

add_executable(archdep archdep.cc)
set_property(TARGET archdep PROPERTY CXX_STANDARD 17)
target_compile_options(archdep PRIVATE
     $<$<OR:$<CXX_COMPILER_ID:Clang>,$<CXX_COMPILER_ID:AppleClang>,$<CXX_COMPILER_ID:GNU>>:
          -Wall -pedantic-errors -pedantic -Wextra -Wconversion -Wsign-conversion>
     $<$<CXX_COMPILER_ID:MSVC>:
          /W4>)

add_executable(archdep2 archdep2.cc)
set_property(TARGET archdep2 PROPERTY CXX_STANDARD 17)
target_compile_options(archdep2 PRIVATE
     $<$<OR:$<CXX_COMPILER_ID:Clang>,$<CXX_COMPILER_ID:AppleClang>,$<CXX_COMPILER_ID:GNU>>:
          -Wall -pedantic-errors -pedantic -Wextra -Wconversion -Wsign-conversion>
     $<$<CXX_COMPILER_ID:MSVC>:
          /W4>)

add_executable(fixedint fixedint.cpp)
set_property(TARGET fixedint PROPERTY CXX_STANDARD 17)
target_compile_options(fixedint PRIVATE
     $<$<OR:$<CXX_COMPILER_ID:Clang>,$<CXX_COMPILER_ID:AppleClang>,$<CXX_COMPILER_ID:GNU>>:
          -Wall -pedantic-errors -pedantic -Wextra -Wconversion -Wsign-conversion>
     $<$<CXX_COMPILER_ID:MSVC>:
          /W4>)