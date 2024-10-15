# CMakeList.txt : CMake project for FunExt, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

project ("Vector")

# Add source to this project's executable.
add_executable (Vector "Vector.cpp" "Vector.h" "vektorovySoucin.cpp" "vektorovySoucin.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET FunExt PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
