# Install script for directory: D:/OneDrive/Documents/Unreal Projects/OpenCVHololensTest/Plugins/OpenCV/Source/ThirdParty/OpenCVLibrary/Hololens/sources/modules/flann

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "D:/OneDrive/Documents/Unreal Projects/OpenCVHololensTest/Plugins/OpenCV/Source/ThirdParty/OpenCVLibrary/Hololens/sources/out/install/x64-Debug")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Debug")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/x64/vc16/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "D:/OneDrive/Documents/Unreal Projects/OpenCVHololensTest/Plugins/OpenCV/Source/ThirdParty/OpenCVLibrary/Hololens/sources/out/build/x64-Debug/lib/opencv_flann451d.lib")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xlibsx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/x64/vc16/bin" TYPE SHARED_LIBRARY OPTIONAL FILES "D:/OneDrive/Documents/Unreal Projects/OpenCVHololensTest/Plugins/OpenCV/Source/ThirdParty/OpenCVLibrary/Hololens/sources/out/build/x64-Debug/bin/opencv_flann451d.dll")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xpdbx")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/x64/vc16/bin" TYPE FILE OPTIONAL FILES "D:/OneDrive/Documents/Unreal Projects/OpenCVHololensTest/Plugins/OpenCV/Source/ThirdParty/OpenCVLibrary/Hololens/sources/out/build/x64-Debug/bin/opencv_flann451d.pdb")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/opencv2" TYPE FILE OPTIONAL FILES "D:/OneDrive/Documents/Unreal Projects/OpenCVHololensTest/Plugins/OpenCV/Source/ThirdParty/OpenCVLibrary/Hololens/sources/modules/flann/include/opencv2/flann.hpp")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/opencv2/flann" TYPE FILE OPTIONAL FILES "D:/OneDrive/Documents/Unreal Projects/OpenCVHololensTest/Plugins/OpenCV/Source/ThirdParty/OpenCVLibrary/Hololens/sources/modules/flann/include/opencv2/flann/all_indices.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/opencv2/flann" TYPE FILE OPTIONAL FILES "D:/OneDrive/Documents/Unreal Projects/OpenCVHololensTest/Plugins/OpenCV/Source/ThirdParty/OpenCVLibrary/Hololens/sources/modules/flann/include/opencv2/flann/allocator.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/opencv2/flann" TYPE FILE OPTIONAL FILES "D:/OneDrive/Documents/Unreal Projects/OpenCVHololensTest/Plugins/OpenCV/Source/ThirdParty/OpenCVLibrary/Hololens/sources/modules/flann/include/opencv2/flann/any.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/opencv2/flann" TYPE FILE OPTIONAL FILES "D:/OneDrive/Documents/Unreal Projects/OpenCVHololensTest/Plugins/OpenCV/Source/ThirdParty/OpenCVLibrary/Hololens/sources/modules/flann/include/opencv2/flann/autotuned_index.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/opencv2/flann" TYPE FILE OPTIONAL FILES "D:/OneDrive/Documents/Unreal Projects/OpenCVHololensTest/Plugins/OpenCV/Source/ThirdParty/OpenCVLibrary/Hololens/sources/modules/flann/include/opencv2/flann/composite_index.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/opencv2/flann" TYPE FILE OPTIONAL FILES "D:/OneDrive/Documents/Unreal Projects/OpenCVHololensTest/Plugins/OpenCV/Source/ThirdParty/OpenCVLibrary/Hololens/sources/modules/flann/include/opencv2/flann/config.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/opencv2/flann" TYPE FILE OPTIONAL FILES "D:/OneDrive/Documents/Unreal Projects/OpenCVHololensTest/Plugins/OpenCV/Source/ThirdParty/OpenCVLibrary/Hololens/sources/modules/flann/include/opencv2/flann/defines.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/opencv2/flann" TYPE FILE OPTIONAL FILES "D:/OneDrive/Documents/Unreal Projects/OpenCVHololensTest/Plugins/OpenCV/Source/ThirdParty/OpenCVLibrary/Hololens/sources/modules/flann/include/opencv2/flann/dist.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/opencv2/flann" TYPE FILE OPTIONAL FILES "D:/OneDrive/Documents/Unreal Projects/OpenCVHololensTest/Plugins/OpenCV/Source/ThirdParty/OpenCVLibrary/Hololens/sources/modules/flann/include/opencv2/flann/dummy.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/opencv2/flann" TYPE FILE OPTIONAL FILES "D:/OneDrive/Documents/Unreal Projects/OpenCVHololensTest/Plugins/OpenCV/Source/ThirdParty/OpenCVLibrary/Hololens/sources/modules/flann/include/opencv2/flann/dynamic_bitset.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/opencv2/flann" TYPE FILE OPTIONAL FILES "D:/OneDrive/Documents/Unreal Projects/OpenCVHololensTest/Plugins/OpenCV/Source/ThirdParty/OpenCVLibrary/Hololens/sources/modules/flann/include/opencv2/flann/flann.hpp")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/opencv2/flann" TYPE FILE OPTIONAL FILES "D:/OneDrive/Documents/Unreal Projects/OpenCVHololensTest/Plugins/OpenCV/Source/ThirdParty/OpenCVLibrary/Hololens/sources/modules/flann/include/opencv2/flann/flann_base.hpp")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/opencv2/flann" TYPE FILE OPTIONAL FILES "D:/OneDrive/Documents/Unreal Projects/OpenCVHololensTest/Plugins/OpenCV/Source/ThirdParty/OpenCVLibrary/Hololens/sources/modules/flann/include/opencv2/flann/general.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/opencv2/flann" TYPE FILE OPTIONAL FILES "D:/OneDrive/Documents/Unreal Projects/OpenCVHololensTest/Plugins/OpenCV/Source/ThirdParty/OpenCVLibrary/Hololens/sources/modules/flann/include/opencv2/flann/ground_truth.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/opencv2/flann" TYPE FILE OPTIONAL FILES "D:/OneDrive/Documents/Unreal Projects/OpenCVHololensTest/Plugins/OpenCV/Source/ThirdParty/OpenCVLibrary/Hololens/sources/modules/flann/include/opencv2/flann/hdf5.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/opencv2/flann" TYPE FILE OPTIONAL FILES "D:/OneDrive/Documents/Unreal Projects/OpenCVHololensTest/Plugins/OpenCV/Source/ThirdParty/OpenCVLibrary/Hololens/sources/modules/flann/include/opencv2/flann/heap.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/opencv2/flann" TYPE FILE OPTIONAL FILES "D:/OneDrive/Documents/Unreal Projects/OpenCVHololensTest/Plugins/OpenCV/Source/ThirdParty/OpenCVLibrary/Hololens/sources/modules/flann/include/opencv2/flann/hierarchical_clustering_index.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/opencv2/flann" TYPE FILE OPTIONAL FILES "D:/OneDrive/Documents/Unreal Projects/OpenCVHololensTest/Plugins/OpenCV/Source/ThirdParty/OpenCVLibrary/Hololens/sources/modules/flann/include/opencv2/flann/index_testing.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/opencv2/flann" TYPE FILE OPTIONAL FILES "D:/OneDrive/Documents/Unreal Projects/OpenCVHololensTest/Plugins/OpenCV/Source/ThirdParty/OpenCVLibrary/Hololens/sources/modules/flann/include/opencv2/flann/kdtree_index.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/opencv2/flann" TYPE FILE OPTIONAL FILES "D:/OneDrive/Documents/Unreal Projects/OpenCVHololensTest/Plugins/OpenCV/Source/ThirdParty/OpenCVLibrary/Hololens/sources/modules/flann/include/opencv2/flann/kdtree_single_index.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/opencv2/flann" TYPE FILE OPTIONAL FILES "D:/OneDrive/Documents/Unreal Projects/OpenCVHololensTest/Plugins/OpenCV/Source/ThirdParty/OpenCVLibrary/Hololens/sources/modules/flann/include/opencv2/flann/kmeans_index.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/opencv2/flann" TYPE FILE OPTIONAL FILES "D:/OneDrive/Documents/Unreal Projects/OpenCVHololensTest/Plugins/OpenCV/Source/ThirdParty/OpenCVLibrary/Hololens/sources/modules/flann/include/opencv2/flann/linear_index.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/opencv2/flann" TYPE FILE OPTIONAL FILES "D:/OneDrive/Documents/Unreal Projects/OpenCVHololensTest/Plugins/OpenCV/Source/ThirdParty/OpenCVLibrary/Hololens/sources/modules/flann/include/opencv2/flann/logger.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/opencv2/flann" TYPE FILE OPTIONAL FILES "D:/OneDrive/Documents/Unreal Projects/OpenCVHololensTest/Plugins/OpenCV/Source/ThirdParty/OpenCVLibrary/Hololens/sources/modules/flann/include/opencv2/flann/lsh_index.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/opencv2/flann" TYPE FILE OPTIONAL FILES "D:/OneDrive/Documents/Unreal Projects/OpenCVHololensTest/Plugins/OpenCV/Source/ThirdParty/OpenCVLibrary/Hololens/sources/modules/flann/include/opencv2/flann/lsh_table.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/opencv2/flann" TYPE FILE OPTIONAL FILES "D:/OneDrive/Documents/Unreal Projects/OpenCVHololensTest/Plugins/OpenCV/Source/ThirdParty/OpenCVLibrary/Hololens/sources/modules/flann/include/opencv2/flann/matrix.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/opencv2/flann" TYPE FILE OPTIONAL FILES "D:/OneDrive/Documents/Unreal Projects/OpenCVHololensTest/Plugins/OpenCV/Source/ThirdParty/OpenCVLibrary/Hololens/sources/modules/flann/include/opencv2/flann/miniflann.hpp")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/opencv2/flann" TYPE FILE OPTIONAL FILES "D:/OneDrive/Documents/Unreal Projects/OpenCVHololensTest/Plugins/OpenCV/Source/ThirdParty/OpenCVLibrary/Hololens/sources/modules/flann/include/opencv2/flann/nn_index.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/opencv2/flann" TYPE FILE OPTIONAL FILES "D:/OneDrive/Documents/Unreal Projects/OpenCVHololensTest/Plugins/OpenCV/Source/ThirdParty/OpenCVLibrary/Hololens/sources/modules/flann/include/opencv2/flann/object_factory.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/opencv2/flann" TYPE FILE OPTIONAL FILES "D:/OneDrive/Documents/Unreal Projects/OpenCVHololensTest/Plugins/OpenCV/Source/ThirdParty/OpenCVLibrary/Hololens/sources/modules/flann/include/opencv2/flann/params.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/opencv2/flann" TYPE FILE OPTIONAL FILES "D:/OneDrive/Documents/Unreal Projects/OpenCVHololensTest/Plugins/OpenCV/Source/ThirdParty/OpenCVLibrary/Hololens/sources/modules/flann/include/opencv2/flann/random.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/opencv2/flann" TYPE FILE OPTIONAL FILES "D:/OneDrive/Documents/Unreal Projects/OpenCVHololensTest/Plugins/OpenCV/Source/ThirdParty/OpenCVLibrary/Hololens/sources/modules/flann/include/opencv2/flann/result_set.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/opencv2/flann" TYPE FILE OPTIONAL FILES "D:/OneDrive/Documents/Unreal Projects/OpenCVHololensTest/Plugins/OpenCV/Source/ThirdParty/OpenCVLibrary/Hololens/sources/modules/flann/include/opencv2/flann/sampling.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/opencv2/flann" TYPE FILE OPTIONAL FILES "D:/OneDrive/Documents/Unreal Projects/OpenCVHololensTest/Plugins/OpenCV/Source/ThirdParty/OpenCVLibrary/Hololens/sources/modules/flann/include/opencv2/flann/saving.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/opencv2/flann" TYPE FILE OPTIONAL FILES "D:/OneDrive/Documents/Unreal Projects/OpenCVHololensTest/Plugins/OpenCV/Source/ThirdParty/OpenCVLibrary/Hololens/sources/modules/flann/include/opencv2/flann/simplex_downhill.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/opencv2/flann" TYPE FILE OPTIONAL FILES "D:/OneDrive/Documents/Unreal Projects/OpenCVHololensTest/Plugins/OpenCV/Source/ThirdParty/OpenCVLibrary/Hololens/sources/modules/flann/include/opencv2/flann/timer.h")
endif()

