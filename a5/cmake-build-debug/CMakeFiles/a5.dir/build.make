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
CMAKE_COMMAND = /snap/clion/107/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /snap/clion/107/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/tndrdesk/CLionProjects/PROGRAMACI-N-AVANZADA/a5

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/tndrdesk/CLionProjects/PROGRAMACI-N-AVANZADA/a5/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/a5.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/a5.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/a5.dir/flags.make

CMakeFiles/a5.dir/main.c.o: CMakeFiles/a5.dir/flags.make
CMakeFiles/a5.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tndrdesk/CLionProjects/PROGRAMACI-N-AVANZADA/a5/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/a5.dir/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/a5.dir/main.c.o   -c /home/tndrdesk/CLionProjects/PROGRAMACI-N-AVANZADA/a5/main.c

CMakeFiles/a5.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/a5.dir/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/tndrdesk/CLionProjects/PROGRAMACI-N-AVANZADA/a5/main.c > CMakeFiles/a5.dir/main.c.i

CMakeFiles/a5.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/a5.dir/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/tndrdesk/CLionProjects/PROGRAMACI-N-AVANZADA/a5/main.c -o CMakeFiles/a5.dir/main.c.s

# Object files for target a5
a5_OBJECTS = \
"CMakeFiles/a5.dir/main.c.o"

# External object files for target a5
a5_EXTERNAL_OBJECTS =

a5: CMakeFiles/a5.dir/main.c.o
a5: CMakeFiles/a5.dir/build.make
a5: CMakeFiles/a5.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/tndrdesk/CLionProjects/PROGRAMACI-N-AVANZADA/a5/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable a5"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/a5.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/a5.dir/build: a5

.PHONY : CMakeFiles/a5.dir/build

CMakeFiles/a5.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/a5.dir/cmake_clean.cmake
.PHONY : CMakeFiles/a5.dir/clean

CMakeFiles/a5.dir/depend:
	cd /home/tndrdesk/CLionProjects/PROGRAMACI-N-AVANZADA/a5/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/tndrdesk/CLionProjects/PROGRAMACI-N-AVANZADA/a5 /home/tndrdesk/CLionProjects/PROGRAMACI-N-AVANZADA/a5 /home/tndrdesk/CLionProjects/PROGRAMACI-N-AVANZADA/a5/cmake-build-debug /home/tndrdesk/CLionProjects/PROGRAMACI-N-AVANZADA/a5/cmake-build-debug /home/tndrdesk/CLionProjects/PROGRAMACI-N-AVANZADA/a5/cmake-build-debug/CMakeFiles/a5.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/a5.dir/depend

