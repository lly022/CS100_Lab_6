CMAKE_MINIMUM_REQUIRED(VERSION 2.8)

ADD_SUBDIRECTORY(googletest)

SET(CMAKE_CXX_STANDARD 11) 

ADD_EXECUTABLE(test
   listContainer.cpp
   container_unit_test.cpp
   
)

ADD_EXECUTABLE(print
   print_test.cpp
   listContainer.cpp
)

TARGET_LINK_LIBRARIES(test gtest)
TARGET_COMPILE_DEFINITIONS(test PRIVATE gtest_disable_pthreads=ON)
