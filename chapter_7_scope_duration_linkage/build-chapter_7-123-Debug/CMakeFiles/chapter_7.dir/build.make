# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.25

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/mikhail/Programming/cpp/tutorialFromLearnCpp/chapter_7_scope_duration_linkage/chapter_7

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/mikhail/Programming/cpp/tutorialFromLearnCpp/chapter_7_scope_duration_linkage/build-chapter_7-123-Debug

# Include any dependencies generated for this target.
include CMakeFiles/chapter_7.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/chapter_7.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/chapter_7.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/chapter_7.dir/flags.make

CMakeFiles/chapter_7.dir/main.cpp.o: CMakeFiles/chapter_7.dir/flags.make
CMakeFiles/chapter_7.dir/main.cpp.o: /home/mikhail/Programming/cpp/tutorialFromLearnCpp/chapter_7_scope_duration_linkage/chapter_7/main.cpp
CMakeFiles/chapter_7.dir/main.cpp.o: CMakeFiles/chapter_7.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mikhail/Programming/cpp/tutorialFromLearnCpp/chapter_7_scope_duration_linkage/build-chapter_7-123-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/chapter_7.dir/main.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/chapter_7.dir/main.cpp.o -MF CMakeFiles/chapter_7.dir/main.cpp.o.d -o CMakeFiles/chapter_7.dir/main.cpp.o -c /home/mikhail/Programming/cpp/tutorialFromLearnCpp/chapter_7_scope_duration_linkage/chapter_7/main.cpp

CMakeFiles/chapter_7.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/chapter_7.dir/main.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mikhail/Programming/cpp/tutorialFromLearnCpp/chapter_7_scope_duration_linkage/chapter_7/main.cpp > CMakeFiles/chapter_7.dir/main.cpp.i

CMakeFiles/chapter_7.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/chapter_7.dir/main.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mikhail/Programming/cpp/tutorialFromLearnCpp/chapter_7_scope_duration_linkage/chapter_7/main.cpp -o CMakeFiles/chapter_7.dir/main.cpp.s

CMakeFiles/chapter_7.dir/section2/section2.cpp.o: CMakeFiles/chapter_7.dir/flags.make
CMakeFiles/chapter_7.dir/section2/section2.cpp.o: /home/mikhail/Programming/cpp/tutorialFromLearnCpp/chapter_7_scope_duration_linkage/chapter_7/section2/section2.cpp
CMakeFiles/chapter_7.dir/section2/section2.cpp.o: CMakeFiles/chapter_7.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mikhail/Programming/cpp/tutorialFromLearnCpp/chapter_7_scope_duration_linkage/build-chapter_7-123-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/chapter_7.dir/section2/section2.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/chapter_7.dir/section2/section2.cpp.o -MF CMakeFiles/chapter_7.dir/section2/section2.cpp.o.d -o CMakeFiles/chapter_7.dir/section2/section2.cpp.o -c /home/mikhail/Programming/cpp/tutorialFromLearnCpp/chapter_7_scope_duration_linkage/chapter_7/section2/section2.cpp

CMakeFiles/chapter_7.dir/section2/section2.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/chapter_7.dir/section2/section2.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mikhail/Programming/cpp/tutorialFromLearnCpp/chapter_7_scope_duration_linkage/chapter_7/section2/section2.cpp > CMakeFiles/chapter_7.dir/section2/section2.cpp.i

CMakeFiles/chapter_7.dir/section2/section2.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/chapter_7.dir/section2/section2.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mikhail/Programming/cpp/tutorialFromLearnCpp/chapter_7_scope_duration_linkage/chapter_7/section2/section2.cpp -o CMakeFiles/chapter_7.dir/section2/section2.cpp.s

# Object files for target chapter_7
chapter_7_OBJECTS = \
"CMakeFiles/chapter_7.dir/main.cpp.o" \
"CMakeFiles/chapter_7.dir/section2/section2.cpp.o"

# External object files for target chapter_7
chapter_7_EXTERNAL_OBJECTS =

chapter_7: CMakeFiles/chapter_7.dir/main.cpp.o
chapter_7: CMakeFiles/chapter_7.dir/section2/section2.cpp.o
chapter_7: CMakeFiles/chapter_7.dir/build.make
chapter_7: CMakeFiles/chapter_7.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/mikhail/Programming/cpp/tutorialFromLearnCpp/chapter_7_scope_duration_linkage/build-chapter_7-123-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable chapter_7"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/chapter_7.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/chapter_7.dir/build: chapter_7
.PHONY : CMakeFiles/chapter_7.dir/build

CMakeFiles/chapter_7.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/chapter_7.dir/cmake_clean.cmake
.PHONY : CMakeFiles/chapter_7.dir/clean

CMakeFiles/chapter_7.dir/depend:
	cd /home/mikhail/Programming/cpp/tutorialFromLearnCpp/chapter_7_scope_duration_linkage/build-chapter_7-123-Debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/mikhail/Programming/cpp/tutorialFromLearnCpp/chapter_7_scope_duration_linkage/chapter_7 /home/mikhail/Programming/cpp/tutorialFromLearnCpp/chapter_7_scope_duration_linkage/chapter_7 /home/mikhail/Programming/cpp/tutorialFromLearnCpp/chapter_7_scope_duration_linkage/build-chapter_7-123-Debug /home/mikhail/Programming/cpp/tutorialFromLearnCpp/chapter_7_scope_duration_linkage/build-chapter_7-123-Debug /home/mikhail/Programming/cpp/tutorialFromLearnCpp/chapter_7_scope_duration_linkage/build-chapter_7-123-Debug/CMakeFiles/chapter_7.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/chapter_7.dir/depend

