# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" DNAGenerator, CMake Version 3.17

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Disable VCS-based implicit rules.
% : %,v


# Disable VCS-based implicit rules.
% : RCS/%


# Disable VCS-based implicit rules.
% : RCS/%,v


# Disable VCS-based implicit rules.
% : SCCS/s.%


# Disable VCS-based implicit rules.
% : s.%


.SUFFIXES: .hpux_make_needs_suffix_list


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /opt/clion-2020.2.1/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /opt/clion-2020.2.1/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/gc/CLionProjects/RosalindPP

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/gc/CLionProjects/RosalindPP/cmake-build-debug

# Include any dependencies generated for this target.
include test/CMakeFiles/unit_tests.dir/depend.make

# Include the progress variables for this target.
include test/CMakeFiles/unit_tests.dir/progress.make

# Include the compile flags for this target's objects.
include test/CMakeFiles/unit_tests.dir/flags.make

test/CMakeFiles/unit_tests.dir/input_generators/generate_DNA.cpp.o: test/CMakeFiles/unit_tests.dir/flags.make
test/CMakeFiles/unit_tests.dir/input_generators/generate_DNA.cpp.o: ../test/input_generators/generate_DNA.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/gc/CLionProjects/RosalindPP/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object test/CMakeFiles/unit_tests.dir/input_generators/generate_DNA.cpp.o"
	cd /home/gc/CLionProjects/RosalindPP/cmake-build-debug/test && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/unit_tests.dir/input_generators/generate_DNA.cpp.o -c /home/gc/CLionProjects/RosalindPP/test/input_generators/generate_DNA.cpp

test/CMakeFiles/unit_tests.dir/input_generators/generate_DNA.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/unit_tests.dir/input_generators/generate_DNA.cpp.i"
	cd /home/gc/CLionProjects/RosalindPP/cmake-build-debug/test && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/gc/CLionProjects/RosalindPP/test/input_generators/generate_DNA.cpp > CMakeFiles/unit_tests.dir/input_generators/generate_DNA.cpp.i

test/CMakeFiles/unit_tests.dir/input_generators/generate_DNA.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/unit_tests.dir/input_generators/generate_DNA.cpp.s"
	cd /home/gc/CLionProjects/RosalindPP/cmake-build-debug/test && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/gc/CLionProjects/RosalindPP/test/input_generators/generate_DNA.cpp -o CMakeFiles/unit_tests.dir/input_generators/generate_DNA.cpp.s

# Object files for target unit_tests
unit_tests_OBJECTS = \
"CMakeFiles/unit_tests.dir/input_generators/generate_DNA.cpp.o"

# External object files for target unit_tests
unit_tests_EXTERNAL_OBJECTS =

test/unit_tests: test/CMakeFiles/unit_tests.dir/input_generators/generate_DNA.cpp.o
test/unit_tests: test/CMakeFiles/unit_tests.dir/build.make
test/unit_tests: lib/libgtest_maind.a
test/unit_tests: lib/libgtestd.a
test/unit_tests: test/CMakeFiles/unit_tests.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/gc/CLionProjects/RosalindPP/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable unit_tests"
	cd /home/gc/CLionProjects/RosalindPP/cmake-build-debug/test && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/unit_tests.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
test/CMakeFiles/unit_tests.dir/build: test/unit_tests

.PHONY : test/CMakeFiles/unit_tests.dir/build

test/CMakeFiles/unit_tests.dir/clean:
	cd /home/gc/CLionProjects/RosalindPP/cmake-build-debug/test && $(CMAKE_COMMAND) -P CMakeFiles/unit_tests.dir/cmake_clean.cmake
.PHONY : test/CMakeFiles/unit_tests.dir/clean

test/CMakeFiles/unit_tests.dir/depend:
	cd /home/gc/CLionProjects/RosalindPP/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/gc/CLionProjects/RosalindPP /home/gc/CLionProjects/RosalindPP/test /home/gc/CLionProjects/RosalindPP/cmake-build-debug /home/gc/CLionProjects/RosalindPP/cmake-build-debug/test /home/gc/CLionProjects/RosalindPP/cmake-build-debug/test/CMakeFiles/unit_tests.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : test/CMakeFiles/unit_tests.dir/depend

