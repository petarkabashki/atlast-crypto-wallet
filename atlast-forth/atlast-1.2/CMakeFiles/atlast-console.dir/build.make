# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.18

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
CMAKE_COMMAND = /usr/local/bin/cmake

# The command to remove a file.
RM = /usr/local/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/grenada/proj/atlast-crypto

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/grenada/proj/atlast-crypto

# Include any dependencies generated for this target.
include atlast-forth/atlast-1.2/CMakeFiles/atlast-console.dir/depend.make

# Include the progress variables for this target.
include atlast-forth/atlast-1.2/CMakeFiles/atlast-console.dir/progress.make

# Include the compile flags for this target's objects.
include atlast-forth/atlast-1.2/CMakeFiles/atlast-console.dir/flags.make

atlast-forth/atlast-1.2/CMakeFiles/atlast-console.dir/atlmain.c.o: atlast-forth/atlast-1.2/CMakeFiles/atlast-console.dir/flags.make
atlast-forth/atlast-1.2/CMakeFiles/atlast-console.dir/atlmain.c.o: atlast-forth/atlast-1.2/atlmain.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/grenada/proj/atlast-crypto/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object atlast-forth/atlast-1.2/CMakeFiles/atlast-console.dir/atlmain.c.o"
	cd /home/grenada/proj/atlast-crypto/atlast-forth/atlast-1.2 && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/atlast-console.dir/atlmain.c.o -c /home/grenada/proj/atlast-crypto/atlast-forth/atlast-1.2/atlmain.c

atlast-forth/atlast-1.2/CMakeFiles/atlast-console.dir/atlmain.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/atlast-console.dir/atlmain.c.i"
	cd /home/grenada/proj/atlast-crypto/atlast-forth/atlast-1.2 && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/grenada/proj/atlast-crypto/atlast-forth/atlast-1.2/atlmain.c > CMakeFiles/atlast-console.dir/atlmain.c.i

atlast-forth/atlast-1.2/CMakeFiles/atlast-console.dir/atlmain.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/atlast-console.dir/atlmain.c.s"
	cd /home/grenada/proj/atlast-crypto/atlast-forth/atlast-1.2 && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/grenada/proj/atlast-crypto/atlast-forth/atlast-1.2/atlmain.c -o CMakeFiles/atlast-console.dir/atlmain.c.s

# Object files for target atlast-console
atlast__console_OBJECTS = \
"CMakeFiles/atlast-console.dir/atlmain.c.o"

# External object files for target atlast-console
atlast__console_EXTERNAL_OBJECTS =

atlast-forth/atlast-1.2/atlast-console: atlast-forth/atlast-1.2/CMakeFiles/atlast-console.dir/atlmain.c.o
atlast-forth/atlast-1.2/atlast-console: atlast-forth/atlast-1.2/CMakeFiles/atlast-console.dir/build.make
atlast-forth/atlast-1.2/atlast-console: atlast-forth/atlast-1.2/libatlast.a
atlast-forth/atlast-1.2/atlast-console: atlast-forth/atlast-1.2/CMakeFiles/atlast-console.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/grenada/proj/atlast-crypto/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable atlast-console"
	cd /home/grenada/proj/atlast-crypto/atlast-forth/atlast-1.2 && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/atlast-console.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
atlast-forth/atlast-1.2/CMakeFiles/atlast-console.dir/build: atlast-forth/atlast-1.2/atlast-console

.PHONY : atlast-forth/atlast-1.2/CMakeFiles/atlast-console.dir/build

atlast-forth/atlast-1.2/CMakeFiles/atlast-console.dir/clean:
	cd /home/grenada/proj/atlast-crypto/atlast-forth/atlast-1.2 && $(CMAKE_COMMAND) -P CMakeFiles/atlast-console.dir/cmake_clean.cmake
.PHONY : atlast-forth/atlast-1.2/CMakeFiles/atlast-console.dir/clean

atlast-forth/atlast-1.2/CMakeFiles/atlast-console.dir/depend:
	cd /home/grenada/proj/atlast-crypto && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/grenada/proj/atlast-crypto /home/grenada/proj/atlast-crypto/atlast-forth/atlast-1.2 /home/grenada/proj/atlast-crypto /home/grenada/proj/atlast-crypto/atlast-forth/atlast-1.2 /home/grenada/proj/atlast-crypto/atlast-forth/atlast-1.2/CMakeFiles/atlast-console.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : atlast-forth/atlast-1.2/CMakeFiles/atlast-console.dir/depend

