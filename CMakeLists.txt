CMAKE_MINIMUM_REQUIRED(VERSION 2.8)

ADD_SUBDIRECTORY(googletest)

SET(CMAKE_CXX_STANDARD 11) 

ADD_EXECUTABLE(test
   listContainer.cpp
   VectorContainer.cpp
   BubbleSort.cpp
   container_unit_test.cpp
   selection_sort.cpp
)

ADD_EXECUTABLE(print1
  print_test.cpp
  listContainer.cpp
)

ADD_EXECUTABLE(print2
        vectorContainerPrint_test.cpp
        VectorContainer.cpp
)

ADD_EXECUTABLE(test2
	main2.cpp
	VectorContainer.cpp
	listContainer.cpp
	BubbleSort.cpp
	selection_sort.cpp
)

TARGET_LINK_LIBRARIES(test gtest)
TARGET_COMPILE_DEFINITIONS(test PRIVATE gtest_disable_pthreads=ON)
