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

# Utility rule file for NightlySubmit.

# Include any custom commands dependencies for this target.
include jsoncpp-1.9.5/CMakeFiles/NightlySubmit.dir/compiler_depend.make

# Include the progress variables for this target.
include jsoncpp-1.9.5/CMakeFiles/NightlySubmit.dir/progress.make

jsoncpp-1.9.5/CMakeFiles/NightlySubmit:
	cd /home/bipbop/Programming/Scratchpads/JsonCPP/cmake-build-debug/jsoncpp-1.9.5 && /home/bipbop/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/223.8836.42/bin/cmake/linux/x64/bin/ctest -D NightlySubmit

NightlySubmit: jsoncpp-1.9.5/CMakeFiles/NightlySubmit
NightlySubmit: jsoncpp-1.9.5/CMakeFiles/NightlySubmit.dir/build.make
.PHONY : NightlySubmit

# Rule to build all files generated by this target.
jsoncpp-1.9.5/CMakeFiles/NightlySubmit.dir/build: NightlySubmit
.PHONY : jsoncpp-1.9.5/CMakeFiles/NightlySubmit.dir/build

jsoncpp-1.9.5/CMakeFiles/NightlySubmit.dir/clean:
	cd /home/bipbop/Programming/Scratchpads/JsonCPP/cmake-build-debug/jsoncpp-1.9.5 && $(CMAKE_COMMAND) -P CMakeFiles/NightlySubmit.dir/cmake_clean.cmake
.PHONY : jsoncpp-1.9.5/CMakeFiles/NightlySubmit.dir/clean

jsoncpp-1.9.5/CMakeFiles/NightlySubmit.dir/depend:
	cd /home/bipbop/Programming/Scratchpads/JsonCPP/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/bipbop/Programming/Scratchpads/JsonCPP /home/bipbop/Programming/Scratchpads/JsonCPP/jsoncpp-1.9.5 /home/bipbop/Programming/Scratchpads/JsonCPP/cmake-build-debug /home/bipbop/Programming/Scratchpads/JsonCPP/cmake-build-debug/jsoncpp-1.9.5 /home/bipbop/Programming/Scratchpads/JsonCPP/cmake-build-debug/jsoncpp-1.9.5/CMakeFiles/NightlySubmit.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : jsoncpp-1.9.5/CMakeFiles/NightlySubmit.dir/depend

