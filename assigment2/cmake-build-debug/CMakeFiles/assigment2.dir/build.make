# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


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
CMAKE_COMMAND = /snap/clion/103/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /snap/clion/103/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/tndrpoplap/CLionProjects/PROGRAMACI-N-AVANZADA/assigment2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/tndrpoplap/CLionProjects/PROGRAMACI-N-AVANZADA/assigment2/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/assigment2.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/assigment2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/assigment2.dir/flags.make

CMakeFiles/assigment2.dir/main.c.o: CMakeFiles/assigment2.dir/flags.make
CMakeFiles/assigment2.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tndrpoplap/CLionProjects/PROGRAMACI-N-AVANZADA/assigment2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/assigment2.dir/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/assigment2.dir/main.c.o   -c /home/tndrpoplap/CLionProjects/PROGRAMACI-N-AVANZADA/assigment2/main.c

CMakeFiles/assigment2.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/assigment2.dir/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/tndrpoplap/CLionProjects/PROGRAMACI-N-AVANZADA/assigment2/main.c > CMakeFiles/assigment2.dir/main.c.i

CMakeFiles/assigment2.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/assigment2.dir/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/tndrpoplap/CLionProjects/PROGRAMACI-N-AVANZADA/assigment2/main.c -o CMakeFiles/assigment2.dir/main.c.s

# Object files for target assigment2
assigment2_OBJECTS = \
"CMakeFiles/assigment2.dir/main.c.o"

# External object files for target assigment2
assigment2_EXTERNAL_OBJECTS =

assigment2: CMakeFiles/assigment2.dir/main.c.o
assigment2: CMakeFiles/assigment2.dir/build.make
assigment2: CMakeFiles/assigment2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/tndrpoplap/CLionProjects/PROGRAMACI-N-AVANZADA/assigment2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable assigment2"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/assigment2.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/assigment2.dir/build: assigment2

.PHONY : CMakeFiles/assigment2.dir/build

CMakeFiles/assigment2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/assigment2.dir/cmake_clean.cmake
.PHONY : CMakeFiles/assigment2.dir/clean

CMakeFiles/assigment2.dir/depend:
	cd /home/tndrpoplap/CLionProjects/PROGRAMACI-N-AVANZADA/assigment2/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/tndrpoplap/CLionProjects/PROGRAMACI-N-AVANZADA/assigment2 /home/tndrpoplap/CLionProjects/PROGRAMACI-N-AVANZADA/assigment2 /home/tndrpoplap/CLionProjects/PROGRAMACI-N-AVANZADA/assigment2/cmake-build-debug /home/tndrpoplap/CLionProjects/PROGRAMACI-N-AVANZADA/assigment2/cmake-build-debug /home/tndrpoplap/CLionProjects/PROGRAMACI-N-AVANZADA/assigment2/cmake-build-debug/CMakeFiles/assigment2.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/assigment2.dir/depend

