# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.7

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/aldo/PrgramasOpenGL/inventoisidro

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/aldo/PrgramasOpenGL/inventoisidro/build

# Include any dependencies generated for this target.
include CMakeFiles/invento.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/invento.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/invento.dir/flags.make

CMakeFiles/invento.dir/inven.cpp.o: CMakeFiles/invento.dir/flags.make
CMakeFiles/invento.dir/inven.cpp.o: ../inven.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/aldo/PrgramasOpenGL/inventoisidro/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/invento.dir/inven.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/invento.dir/inven.cpp.o -c /home/aldo/PrgramasOpenGL/inventoisidro/inven.cpp

CMakeFiles/invento.dir/inven.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/invento.dir/inven.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/aldo/PrgramasOpenGL/inventoisidro/inven.cpp > CMakeFiles/invento.dir/inven.cpp.i

CMakeFiles/invento.dir/inven.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/invento.dir/inven.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/aldo/PrgramasOpenGL/inventoisidro/inven.cpp -o CMakeFiles/invento.dir/inven.cpp.s

CMakeFiles/invento.dir/inven.cpp.o.requires:

.PHONY : CMakeFiles/invento.dir/inven.cpp.o.requires

CMakeFiles/invento.dir/inven.cpp.o.provides: CMakeFiles/invento.dir/inven.cpp.o.requires
	$(MAKE) -f CMakeFiles/invento.dir/build.make CMakeFiles/invento.dir/inven.cpp.o.provides.build
.PHONY : CMakeFiles/invento.dir/inven.cpp.o.provides

CMakeFiles/invento.dir/inven.cpp.o.provides.build: CMakeFiles/invento.dir/inven.cpp.o


# Object files for target invento
invento_OBJECTS = \
"CMakeFiles/invento.dir/inven.cpp.o"

# External object files for target invento
invento_EXTERNAL_OBJECTS =

invento: CMakeFiles/invento.dir/inven.cpp.o
invento: CMakeFiles/invento.dir/build.make
invento: /usr/lib/x86_64-linux-gnu/libGLU.so
invento: /usr/lib/x86_64-linux-gnu/libGL.so
invento: /usr/lib/x86_64-linux-gnu/libglut.so
invento: /usr/lib/x86_64-linux-gnu/libXmu.so
invento: /usr/lib/x86_64-linux-gnu/libXi.so
invento: CMakeFiles/invento.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/aldo/PrgramasOpenGL/inventoisidro/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable invento"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/invento.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/invento.dir/build: invento

.PHONY : CMakeFiles/invento.dir/build

CMakeFiles/invento.dir/requires: CMakeFiles/invento.dir/inven.cpp.o.requires

.PHONY : CMakeFiles/invento.dir/requires

CMakeFiles/invento.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/invento.dir/cmake_clean.cmake
.PHONY : CMakeFiles/invento.dir/clean

CMakeFiles/invento.dir/depend:
	cd /home/aldo/PrgramasOpenGL/inventoisidro/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/aldo/PrgramasOpenGL/inventoisidro /home/aldo/PrgramasOpenGL/inventoisidro /home/aldo/PrgramasOpenGL/inventoisidro/build /home/aldo/PrgramasOpenGL/inventoisidro/build /home/aldo/PrgramasOpenGL/inventoisidro/build/CMakeFiles/invento.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/invento.dir/depend

