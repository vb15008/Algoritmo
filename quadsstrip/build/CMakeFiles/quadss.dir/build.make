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
CMAKE_SOURCE_DIR = /home/aldo/PrgramasOpenGL/quadsstrip

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/aldo/PrgramasOpenGL/quadsstrip/build

# Include any dependencies generated for this target.
include CMakeFiles/quadss.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/quadss.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/quadss.dir/flags.make

CMakeFiles/quadss.dir/quadsstrip.cpp.o: CMakeFiles/quadss.dir/flags.make
CMakeFiles/quadss.dir/quadsstrip.cpp.o: ../quadsstrip.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/aldo/PrgramasOpenGL/quadsstrip/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/quadss.dir/quadsstrip.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/quadss.dir/quadsstrip.cpp.o -c /home/aldo/PrgramasOpenGL/quadsstrip/quadsstrip.cpp

CMakeFiles/quadss.dir/quadsstrip.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/quadss.dir/quadsstrip.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/aldo/PrgramasOpenGL/quadsstrip/quadsstrip.cpp > CMakeFiles/quadss.dir/quadsstrip.cpp.i

CMakeFiles/quadss.dir/quadsstrip.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/quadss.dir/quadsstrip.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/aldo/PrgramasOpenGL/quadsstrip/quadsstrip.cpp -o CMakeFiles/quadss.dir/quadsstrip.cpp.s

CMakeFiles/quadss.dir/quadsstrip.cpp.o.requires:

.PHONY : CMakeFiles/quadss.dir/quadsstrip.cpp.o.requires

CMakeFiles/quadss.dir/quadsstrip.cpp.o.provides: CMakeFiles/quadss.dir/quadsstrip.cpp.o.requires
	$(MAKE) -f CMakeFiles/quadss.dir/build.make CMakeFiles/quadss.dir/quadsstrip.cpp.o.provides.build
.PHONY : CMakeFiles/quadss.dir/quadsstrip.cpp.o.provides

CMakeFiles/quadss.dir/quadsstrip.cpp.o.provides.build: CMakeFiles/quadss.dir/quadsstrip.cpp.o


# Object files for target quadss
quadss_OBJECTS = \
"CMakeFiles/quadss.dir/quadsstrip.cpp.o"

# External object files for target quadss
quadss_EXTERNAL_OBJECTS =

quadss: CMakeFiles/quadss.dir/quadsstrip.cpp.o
quadss: CMakeFiles/quadss.dir/build.make
quadss: /usr/lib/x86_64-linux-gnu/libGLU.so
quadss: /usr/lib/x86_64-linux-gnu/libGL.so
quadss: /usr/lib/x86_64-linux-gnu/libglut.so
quadss: /usr/lib/x86_64-linux-gnu/libXmu.so
quadss: /usr/lib/x86_64-linux-gnu/libXi.so
quadss: CMakeFiles/quadss.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/aldo/PrgramasOpenGL/quadsstrip/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable quadss"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/quadss.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/quadss.dir/build: quadss

.PHONY : CMakeFiles/quadss.dir/build

CMakeFiles/quadss.dir/requires: CMakeFiles/quadss.dir/quadsstrip.cpp.o.requires

.PHONY : CMakeFiles/quadss.dir/requires

CMakeFiles/quadss.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/quadss.dir/cmake_clean.cmake
.PHONY : CMakeFiles/quadss.dir/clean

CMakeFiles/quadss.dir/depend:
	cd /home/aldo/PrgramasOpenGL/quadsstrip/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/aldo/PrgramasOpenGL/quadsstrip /home/aldo/PrgramasOpenGL/quadsstrip /home/aldo/PrgramasOpenGL/quadsstrip/build /home/aldo/PrgramasOpenGL/quadsstrip/build /home/aldo/PrgramasOpenGL/quadsstrip/build/CMakeFiles/quadss.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/quadss.dir/depend
