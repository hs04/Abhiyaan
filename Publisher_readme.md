harsh@harsh-VirtualBox:~$ mkdir cat_ws/src -p
harsh@harsh-VirtualBox:~$ cd cat_ws
harsh@harsh-VirtualBox:~/cat_ws$ ls
src
harsh@harsh-VirtualBox:~/cat_ws$ ls src
harsh@harsh-VirtualBox:~/cat_ws$ catkin_make
Base path: /home/harsh/cat_ws
Source space: /home/harsh/cat_ws/src
Build space: /home/harsh/cat_ws/build
Devel space: /home/harsh/cat_ws/devel
Install space: /home/harsh/cat_ws/install
Creating symlink "/home/harsh/cat_ws/src/CMakeLists.txt" pointing to "/opt/ros/melodic/share/catkin/cmake/toplevel.cmake"
####
#### Running command: "cmake /home/harsh/cat_ws/src -DCATKIN_DEVEL_PREFIX=/home/harsh/cat_ws/devel -DCMAKE_INSTALL_PREFIX=/home/harsh/cat_ws/install -G Unix Makefiles" in "/home/harsh/cat_ws/build"
####
-- The C compiler identification is GNU 7.3.0
-- The CXX compiler identification is GNU 7.3.0
-- Check for working C compiler: /usr/bin/cc
-- Check for working C compiler: /usr/bin/cc -- works
-- Detecting C compiler ABI info
-- Detecting C compiler ABI info - done
-- Detecting C compile features
-- Detecting C compile features - done
-- Check for working CXX compiler: /usr/bin/c++
-- Check for working CXX compiler: /usr/bin/c++ -- works
-- Detecting CXX compiler ABI info
-- Detecting CXX compiler ABI info - done
-- Detecting CXX compile features
-- Detecting CXX compile features - done
-- Using CATKIN_DEVEL_PREFIX: /home/harsh/cat_ws/devel
-- Using CMAKE_PREFIX_PATH: /home/harsh/catkin_ws/devel;/opt/ros/melodic
-- This workspace overlays: /home/harsh/catkin_ws/devel;/opt/ros/melodic
-- Found PythonInterp: /usr/bin/python2 (found suitable version "2.7.15", minimum required is "2") 
-- Using PYTHON_EXECUTABLE: /usr/bin/python2
-- Using Debian Python package layout
-- Using empy: /usr/bin/empy
-- Using CATKIN_ENABLE_TESTING: ON
-- Call enable_testing()
-- Using CATKIN_TEST_RESULTS_DIR: /home/harsh/cat_ws/build/test_results
-- Found gmock sources under '/usr/src/googletest': gmock will be built
-- Found PythonInterp: /usr/bin/python2 (found version "2.7.15") 
-- Looking for pthread.h
-- Looking for pthread.h - found
-- Looking for pthread_create
-- Looking for pthread_create - not found
-- Looking for pthread_create in pthreads
-- Looking for pthread_create in pthreads - not found
-- Looking for pthread_create in pthread
-- Looking for pthread_create in pthread - found
-- Found Threads: TRUE  
-- Found gtest sources under '/usr/src/googletest': gtests will be built
-- Using Python nosetests: /usr/bin/nosetests-2.7
-- catkin 0.7.14
-- BUILD_SHARED_LIBS is on
-- Configuring done
-- Generating done
-- Build files have been written to: /home/harsh/cat_ws/build
####
#### Running command: "make -j1 -l1" in "/home/harsh/cat_ws/build"
####
harsh@harsh-VirtualBox:~/cat_ws$ ls
build  devel  src
harsh@harsh-VirtualBox:~/cat_ws$ source devel/setup.bash
harsh@harsh-VirtualBox:~/cat_ws$ ls devel/
env.sh  lib  setup.bash  setup.sh  _setup_util.py  setup.zsh
harsh@harsh-VirtualBox:~/cat_ws$ cd src/
harsh@harsh-VirtualBox:~/cat_ws/src$ chmod +x tutorial/src/talk
harsh@harsh-VirtualBox:~/cat_ws/src$ rosrun tutorial talk
