# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.24

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

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /home/bipbop/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/223.8836.42/bin/cmake/linux/x64/bin/cmake

# The command to remove a file.
RM = /home/bipbop/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/223.8836.42/bin/cmake/linux/x64/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/bipbop/Programming/Scratchpads/JsonCPP

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/bipbop/Programming/Scratchpads/JsonCPP/cmake-build-debug

# Include any dependencies generated for this target.
include jsoncpp-1.9.5/src/jsontestrunner/CMakeFiles/jsontestrunner_exe.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include jsoncpp-1.9.5/src/jsontestrunner/CMakeFiles/jsontestrunner_exe.dir/compiler_depend.make

# Include the progress variables for this target.
include jsoncpp-1.9.5/src/jsontestrunner/CMakeFiles/jsontestrunner_exe.dir/progress.make

# Include the compile flags for this target's objects.
include jsoncpp-1.9.5/src/jsontestrunner/CMakeFiles/jsontestrunner_exe.dir/flags.make

jsoncpp-1.9.5/src/jsontestrunner/CMakeFiles/jsontestrunner_exe.dir/main.cpp.o: jsoncpp-1.9.5/src/jsontestrunner/CMakeFiles/jsontestrunner_exe.dir/flags.make
jsoncpp-1.9.5/src/jsontestrunner/CMakeFiles/jsontestrunner_exe.dir/main.cpp.o: /home/bipbop/Programming/Scratchpads/JsonCPP/jsoncpp-1.9.5/src/jsontestrunner/main.cpp
jsoncpp-1.9.5/src/jsontestrunner/CMakeFiles/jsontestrunner_exe.dir/main.cpp.o: jsoncpp-1.9.5/src/jsontestrunner/CMakeFiles/jsontestrunner_exe.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/bipbop/Programming/Scratchpads/JsonCPP/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object jsoncpp-1.9.5/src/jsontestrunner/CMakeFiles/jsontestrunner_exe.dir/main.cpp.o"
	cd /home/bipbop/Programming/Scratchpads/JsonCPP/cmake-build-debug/jsoncpp-1.9.5/src/jsontestrunner && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT jsoncpp-1.9.5/src/jsontestrunner/CMakeFiles/jsontestrunner_exe.dir/main.cpp.o -MF CMakeFiles/jsontestrunner_exe.dir/main.cpp.o.d -o CMakeFiles/jsontestrunner_exe.dir/main.cpp.o -c /home/bipbop/Programming/Scratchpads/JsonCPP/jsoncpp-1.9.5/src/jsontestrunner/main.cpp

jsoncpp-1.9.5/src/jsontestrunner/CMakeFiles/jsontestrunner_exe.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/jsontestrunner_exe.dir/main.cpp.i"
	cd /home/bipbop/Programming/Scratchpads/JsonCPP/cmake-build-debug/jsoncpp-1.9.5/src/jsontestrunner && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/bipbop/Programming/Scratchpads/JsonCPP/jsoncpp-1.9.5/src/jsontestrunner/main.cpp > CMakeFiles/jsontestrunner_exe.dir/main.cpp.i

jsoncpp-1.9.5/src/jsontestrunner/CMakeFiles/jsontestrunner_exe.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/jsontestrunner_exe.dir/main.cpp.s"
	cd /home/bipbop/Programming/Scratchpads/JsonCPP/cmake-build-debug/jsoncpp-1.9.5/src/jsontestrunner && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/bipbop/Programming/Scratchpads/JsonCPP/jsoncpp-1.9.5/src/jsontestrunner/main.cpp -o CMakeFiles/jsontestrunner_exe.dir/main.cpp.s

# Object files for target jsontestrunner_exe
jsontestrunner_exe_OBJECTS = \
"CMakeFiles/jsontestrunner_exe.dir/main.cpp.o"

# External object files for target jsontestrunner_exe
jsontestrunner_exe_EXTERNAL_OBJECTS =

bin/jsontestrunner_exe: jsoncpp-1.9.5/src/jsontestrunner/CMakeFiles/jsontestrunner_exe.dir/main.cpp.o
bin/jsontestrunner_exe: jsoncpp-1.9.5/src/jsontestrunner/CMakeFiles/jsontestrunner_exe.dir/build.make
bin/jsontestrunner_exe: lib/libjsoncpp.so.1.9.5
bin/jsontestrunner_exe: jsoncpp-1.9.5/src/jsontestrunner/CMakeFiles/jsontestrunner_exe.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/bipbop/Programming/Scratchpads/JsonCPP/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ../../../bin/jsontestrunner_exe"
	cd /home/bipbop/Programming/Scratchpads/JsonCPP/cmake-build-debug/jsoncpp-1.9.5/src/jsontestrunner && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/jsontestrunner_exe.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
jsoncpp-1.9.5/src/jsontestrunner/CMakeFiles/jsontestrunner_exe.dir/build: bin/jsontestrunner_exe
.PHONY : jsoncpp-1.9.5/src/jsontestrunner/CMakeFiles/jsontestrunner_exe.dir/build

jsoncpp-1.9.5/src/jsontestrunner/CMakeFiles/jsontestrunner_exe.dir/clean:
	cd /home/bipbop/Programming/Scratchpads/JsonCPP/cmake-build-debug/jsoncpp-1.9.5/src/jsontestrunner && $(CMAKE_COMMAND) -P CMakeFiles/jsontestrunner_exe.dir/cmake_clean.cmake
.PHONY : jsoncpp-1.9.5/src/jsontestrunner/CMakeFiles/jsontestrunner_exe.dir/clean

jsoncpp-1.9.5/src/jsontestrunner/CMakeFiles/jsontestrunner_exe.dir/depend:
	cd /home/bipbop/Programming/Scratchpads/JsonCPP/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/bipbop/Programming/Scratchpads/JsonCPP /home/bipbop/Programming/Scratchpads/JsonCPP/jsoncpp-1.9.5/src/jsontestrunner /home/bipbop/Programming/Scratchpads/JsonCPP/cmake-build-debug /home/bipbop/Programming/Scratchpads/JsonCPP/cmake-build-debug/jsoncpp-1.9.5/src/jsontestrunner /home/bipbop/Programming/Scratchpads/JsonCPP/cmake-build-debug/jsoncpp-1.9.5/src/jsontestrunner/CMakeFiles/jsontestrunner_exe.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : jsoncpp-1.9.5/src/jsontestrunner/CMakeFiles/jsontestrunner_exe.dir/depend

