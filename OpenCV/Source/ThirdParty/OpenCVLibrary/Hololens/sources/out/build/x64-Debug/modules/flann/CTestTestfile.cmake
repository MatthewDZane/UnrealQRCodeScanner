# CMake generated Testfile for 
# Source directory: D:/OneDrive/Documents/Unreal Projects/OpenCVHololensTest/Plugins/OpenCV/Source/ThirdParty/OpenCVLibrary/Hololens/sources/modules/flann
# Build directory: D:/OneDrive/Documents/Unreal Projects/OpenCVHololensTest/Plugins/OpenCV/Source/ThirdParty/OpenCVLibrary/Hololens/sources/out/build/x64-Debug/modules/flann
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(opencv_test_flann "D:/OneDrive/Documents/Unreal Projects/OpenCVHololensTest/Plugins/OpenCV/Source/ThirdParty/OpenCVLibrary/Hololens/sources/out/build/x64-Debug/bin/opencv_test_flannd.exe" "--gtest_output=xml:opencv_test_flann.xml")
set_tests_properties(opencv_test_flann PROPERTIES  LABELS "Main;opencv_flann;Accuracy" WORKING_DIRECTORY "D:/OneDrive/Documents/Unreal Projects/OpenCVHololensTest/Plugins/OpenCV/Source/ThirdParty/OpenCVLibrary/Hololens/sources/out/build/x64-Debug/test-reports/accuracy" _BACKTRACE_TRIPLES "D:/OneDrive/Documents/Unreal Projects/OpenCVHololensTest/Plugins/OpenCV/Source/ThirdParty/OpenCVLibrary/Hololens/sources/cmake/OpenCVUtils.cmake;1677;add_test;D:/OneDrive/Documents/Unreal Projects/OpenCVHololensTest/Plugins/OpenCV/Source/ThirdParty/OpenCVLibrary/Hololens/sources/cmake/OpenCVModule.cmake;1311;ocv_add_test_from_target;D:/OneDrive/Documents/Unreal Projects/OpenCVHololensTest/Plugins/OpenCV/Source/ThirdParty/OpenCVLibrary/Hololens/sources/cmake/OpenCVModule.cmake;1075;ocv_add_accuracy_tests;D:/OneDrive/Documents/Unreal Projects/OpenCVHololensTest/Plugins/OpenCV/Source/ThirdParty/OpenCVLibrary/Hololens/sources/modules/flann/CMakeLists.txt;2;ocv_define_module;D:/OneDrive/Documents/Unreal Projects/OpenCVHololensTest/Plugins/OpenCV/Source/ThirdParty/OpenCVLibrary/Hololens/sources/modules/flann/CMakeLists.txt;0;")
