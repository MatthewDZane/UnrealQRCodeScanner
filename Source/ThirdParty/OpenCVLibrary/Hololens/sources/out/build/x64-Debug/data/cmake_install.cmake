# Install script for directory: D:/OneDrive/Documents/Unreal Projects/OpenCVHololensTest/Plugins/OpenCV/Source/ThirdParty/OpenCVLibrary/Hololens/sources/data

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

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xlibsx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/etc/haarcascades" TYPE FILE FILES
    "D:/OneDrive/Documents/Unreal Projects/OpenCVHololensTest/Plugins/OpenCV/Source/ThirdParty/OpenCVLibrary/Hololens/sources/data/haarcascades/haarcascade_eye.xml"
    "D:/OneDrive/Documents/Unreal Projects/OpenCVHololensTest/Plugins/OpenCV/Source/ThirdParty/OpenCVLibrary/Hololens/sources/data/haarcascades/haarcascade_eye_tree_eyeglasses.xml"
    "D:/OneDrive/Documents/Unreal Projects/OpenCVHololensTest/Plugins/OpenCV/Source/ThirdParty/OpenCVLibrary/Hololens/sources/data/haarcascades/haarcascade_frontalcatface.xml"
    "D:/OneDrive/Documents/Unreal Projects/OpenCVHololensTest/Plugins/OpenCV/Source/ThirdParty/OpenCVLibrary/Hololens/sources/data/haarcascades/haarcascade_frontalcatface_extended.xml"
    "D:/OneDrive/Documents/Unreal Projects/OpenCVHololensTest/Plugins/OpenCV/Source/ThirdParty/OpenCVLibrary/Hololens/sources/data/haarcascades/haarcascade_frontalface_alt.xml"
    "D:/OneDrive/Documents/Unreal Projects/OpenCVHololensTest/Plugins/OpenCV/Source/ThirdParty/OpenCVLibrary/Hololens/sources/data/haarcascades/haarcascade_frontalface_alt2.xml"
    "D:/OneDrive/Documents/Unreal Projects/OpenCVHololensTest/Plugins/OpenCV/Source/ThirdParty/OpenCVLibrary/Hololens/sources/data/haarcascades/haarcascade_frontalface_alt_tree.xml"
    "D:/OneDrive/Documents/Unreal Projects/OpenCVHololensTest/Plugins/OpenCV/Source/ThirdParty/OpenCVLibrary/Hololens/sources/data/haarcascades/haarcascade_frontalface_default.xml"
    "D:/OneDrive/Documents/Unreal Projects/OpenCVHololensTest/Plugins/OpenCV/Source/ThirdParty/OpenCVLibrary/Hololens/sources/data/haarcascades/haarcascade_fullbody.xml"
    "D:/OneDrive/Documents/Unreal Projects/OpenCVHololensTest/Plugins/OpenCV/Source/ThirdParty/OpenCVLibrary/Hololens/sources/data/haarcascades/haarcascade_lefteye_2splits.xml"
    "D:/OneDrive/Documents/Unreal Projects/OpenCVHololensTest/Plugins/OpenCV/Source/ThirdParty/OpenCVLibrary/Hololens/sources/data/haarcascades/haarcascade_licence_plate_rus_16stages.xml"
    "D:/OneDrive/Documents/Unreal Projects/OpenCVHololensTest/Plugins/OpenCV/Source/ThirdParty/OpenCVLibrary/Hololens/sources/data/haarcascades/haarcascade_lowerbody.xml"
    "D:/OneDrive/Documents/Unreal Projects/OpenCVHololensTest/Plugins/OpenCV/Source/ThirdParty/OpenCVLibrary/Hololens/sources/data/haarcascades/haarcascade_profileface.xml"
    "D:/OneDrive/Documents/Unreal Projects/OpenCVHololensTest/Plugins/OpenCV/Source/ThirdParty/OpenCVLibrary/Hololens/sources/data/haarcascades/haarcascade_righteye_2splits.xml"
    "D:/OneDrive/Documents/Unreal Projects/OpenCVHololensTest/Plugins/OpenCV/Source/ThirdParty/OpenCVLibrary/Hololens/sources/data/haarcascades/haarcascade_russian_plate_number.xml"
    "D:/OneDrive/Documents/Unreal Projects/OpenCVHololensTest/Plugins/OpenCV/Source/ThirdParty/OpenCVLibrary/Hololens/sources/data/haarcascades/haarcascade_smile.xml"
    "D:/OneDrive/Documents/Unreal Projects/OpenCVHololensTest/Plugins/OpenCV/Source/ThirdParty/OpenCVLibrary/Hololens/sources/data/haarcascades/haarcascade_upperbody.xml"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xlibsx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/etc/lbpcascades" TYPE FILE FILES
    "D:/OneDrive/Documents/Unreal Projects/OpenCVHololensTest/Plugins/OpenCV/Source/ThirdParty/OpenCVLibrary/Hololens/sources/data/lbpcascades/lbpcascade_frontalcatface.xml"
    "D:/OneDrive/Documents/Unreal Projects/OpenCVHololensTest/Plugins/OpenCV/Source/ThirdParty/OpenCVLibrary/Hololens/sources/data/lbpcascades/lbpcascade_frontalface.xml"
    "D:/OneDrive/Documents/Unreal Projects/OpenCVHololensTest/Plugins/OpenCV/Source/ThirdParty/OpenCVLibrary/Hololens/sources/data/lbpcascades/lbpcascade_frontalface_improved.xml"
    "D:/OneDrive/Documents/Unreal Projects/OpenCVHololensTest/Plugins/OpenCV/Source/ThirdParty/OpenCVLibrary/Hololens/sources/data/lbpcascades/lbpcascade_profileface.xml"
    "D:/OneDrive/Documents/Unreal Projects/OpenCVHololensTest/Plugins/OpenCV/Source/ThirdParty/OpenCVLibrary/Hololens/sources/data/lbpcascades/lbpcascade_silverware.xml"
    )
endif()

