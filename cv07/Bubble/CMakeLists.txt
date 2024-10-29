# CMakeList.txt : CMake project for BublinkoveTrideni, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

project ("BublinkoveTrideni")

# Add source to this project's executable.
add_executable (BublinkoveTrideni "BublinkoveTrideni.cpp" "BublinkoveTrideni.h" "Trideni.h" "Trideni.cpp")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET BublinkoveTrideni PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
