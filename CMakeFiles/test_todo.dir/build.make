# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

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

# The program to use to edit the cache.
CMAKE_EDIT_COMMAND = /usr/bin/cmake-gui

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/cheick/Documents/Git/ECE-3574-Project0

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/cheick/Documents/Git/ECE-3574-Project0

# Include any dependencies generated for this target.
include CMakeFiles/test_todo.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/test_todo.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/test_todo.dir/flags.make

CMakeFiles/test_todo.dir/prog_test.o: CMakeFiles/test_todo.dir/flags.make
CMakeFiles/test_todo.dir/prog_test.o: prog_test.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/cheick/Documents/Git/ECE-3574-Project0/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/test_todo.dir/prog_test.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/test_todo.dir/prog_test.o -c /home/cheick/Documents/Git/ECE-3574-Project0/prog_test.cpp

CMakeFiles/test_todo.dir/prog_test.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test_todo.dir/prog_test.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/cheick/Documents/Git/ECE-3574-Project0/prog_test.cpp > CMakeFiles/test_todo.dir/prog_test.i

CMakeFiles/test_todo.dir/prog_test.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test_todo.dir/prog_test.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/cheick/Documents/Git/ECE-3574-Project0/prog_test.cpp -o CMakeFiles/test_todo.dir/prog_test.s

CMakeFiles/test_todo.dir/prog_test.o.requires:
.PHONY : CMakeFiles/test_todo.dir/prog_test.o.requires

CMakeFiles/test_todo.dir/prog_test.o.provides: CMakeFiles/test_todo.dir/prog_test.o.requires
	$(MAKE) -f CMakeFiles/test_todo.dir/build.make CMakeFiles/test_todo.dir/prog_test.o.provides.build
.PHONY : CMakeFiles/test_todo.dir/prog_test.o.provides

CMakeFiles/test_todo.dir/prog_test.o.provides.build: CMakeFiles/test_todo.dir/prog_test.o

CMakeFiles/test_todo.dir/Prog.o: CMakeFiles/test_todo.dir/flags.make
CMakeFiles/test_todo.dir/Prog.o: Prog.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/cheick/Documents/Git/ECE-3574-Project0/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/test_todo.dir/Prog.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/test_todo.dir/Prog.o -c /home/cheick/Documents/Git/ECE-3574-Project0/Prog.cpp

CMakeFiles/test_todo.dir/Prog.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test_todo.dir/Prog.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/cheick/Documents/Git/ECE-3574-Project0/Prog.cpp > CMakeFiles/test_todo.dir/Prog.i

CMakeFiles/test_todo.dir/Prog.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test_todo.dir/Prog.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/cheick/Documents/Git/ECE-3574-Project0/Prog.cpp -o CMakeFiles/test_todo.dir/Prog.s

CMakeFiles/test_todo.dir/Prog.o.requires:
.PHONY : CMakeFiles/test_todo.dir/Prog.o.requires

CMakeFiles/test_todo.dir/Prog.o.provides: CMakeFiles/test_todo.dir/Prog.o.requires
	$(MAKE) -f CMakeFiles/test_todo.dir/build.make CMakeFiles/test_todo.dir/Prog.o.provides.build
.PHONY : CMakeFiles/test_todo.dir/Prog.o.provides

CMakeFiles/test_todo.dir/Prog.o.provides.build: CMakeFiles/test_todo.dir/Prog.o

CMakeFiles/test_todo.dir/c_Arglist.o: CMakeFiles/test_todo.dir/flags.make
CMakeFiles/test_todo.dir/c_Arglist.o: c_Arglist.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/cheick/Documents/Git/ECE-3574-Project0/CMakeFiles $(CMAKE_PROGRESS_3)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/test_todo.dir/c_Arglist.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/test_todo.dir/c_Arglist.o -c /home/cheick/Documents/Git/ECE-3574-Project0/c_Arglist.cpp

CMakeFiles/test_todo.dir/c_Arglist.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test_todo.dir/c_Arglist.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/cheick/Documents/Git/ECE-3574-Project0/c_Arglist.cpp > CMakeFiles/test_todo.dir/c_Arglist.i

CMakeFiles/test_todo.dir/c_Arglist.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test_todo.dir/c_Arglist.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/cheick/Documents/Git/ECE-3574-Project0/c_Arglist.cpp -o CMakeFiles/test_todo.dir/c_Arglist.s

CMakeFiles/test_todo.dir/c_Arglist.o.requires:
.PHONY : CMakeFiles/test_todo.dir/c_Arglist.o.requires

CMakeFiles/test_todo.dir/c_Arglist.o.provides: CMakeFiles/test_todo.dir/c_Arglist.o.requires
	$(MAKE) -f CMakeFiles/test_todo.dir/build.make CMakeFiles/test_todo.dir/c_Arglist.o.provides.build
.PHONY : CMakeFiles/test_todo.dir/c_Arglist.o.provides

CMakeFiles/test_todo.dir/c_Arglist.o.provides.build: CMakeFiles/test_todo.dir/c_Arglist.o

CMakeFiles/test_todo.dir/c_command.o: CMakeFiles/test_todo.dir/flags.make
CMakeFiles/test_todo.dir/c_command.o: c_command.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/cheick/Documents/Git/ECE-3574-Project0/CMakeFiles $(CMAKE_PROGRESS_4)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/test_todo.dir/c_command.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/test_todo.dir/c_command.o -c /home/cheick/Documents/Git/ECE-3574-Project0/c_command.cpp

CMakeFiles/test_todo.dir/c_command.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test_todo.dir/c_command.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/cheick/Documents/Git/ECE-3574-Project0/c_command.cpp > CMakeFiles/test_todo.dir/c_command.i

CMakeFiles/test_todo.dir/c_command.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test_todo.dir/c_command.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/cheick/Documents/Git/ECE-3574-Project0/c_command.cpp -o CMakeFiles/test_todo.dir/c_command.s

CMakeFiles/test_todo.dir/c_command.o.requires:
.PHONY : CMakeFiles/test_todo.dir/c_command.o.requires

CMakeFiles/test_todo.dir/c_command.o.provides: CMakeFiles/test_todo.dir/c_command.o.requires
	$(MAKE) -f CMakeFiles/test_todo.dir/build.make CMakeFiles/test_todo.dir/c_command.o.provides.build
.PHONY : CMakeFiles/test_todo.dir/c_command.o.provides

CMakeFiles/test_todo.dir/c_command.o.provides.build: CMakeFiles/test_todo.dir/c_command.o

# Object files for target test_todo
test_todo_OBJECTS = \
"CMakeFiles/test_todo.dir/prog_test.o" \
"CMakeFiles/test_todo.dir/Prog.o" \
"CMakeFiles/test_todo.dir/c_Arglist.o" \
"CMakeFiles/test_todo.dir/c_command.o"

# External object files for target test_todo
test_todo_EXTERNAL_OBJECTS =

test_todo: CMakeFiles/test_todo.dir/prog_test.o
test_todo: CMakeFiles/test_todo.dir/Prog.o
test_todo: CMakeFiles/test_todo.dir/c_Arglist.o
test_todo: CMakeFiles/test_todo.dir/c_command.o
test_todo: CMakeFiles/test_todo.dir/build.make
test_todo: CMakeFiles/test_todo.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable test_todo"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/test_todo.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/test_todo.dir/build: test_todo
.PHONY : CMakeFiles/test_todo.dir/build

CMakeFiles/test_todo.dir/requires: CMakeFiles/test_todo.dir/prog_test.o.requires
CMakeFiles/test_todo.dir/requires: CMakeFiles/test_todo.dir/Prog.o.requires
CMakeFiles/test_todo.dir/requires: CMakeFiles/test_todo.dir/c_Arglist.o.requires
CMakeFiles/test_todo.dir/requires: CMakeFiles/test_todo.dir/c_command.o.requires
.PHONY : CMakeFiles/test_todo.dir/requires

CMakeFiles/test_todo.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/test_todo.dir/cmake_clean.cmake
.PHONY : CMakeFiles/test_todo.dir/clean

CMakeFiles/test_todo.dir/depend:
	cd /home/cheick/Documents/Git/ECE-3574-Project0 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/cheick/Documents/Git/ECE-3574-Project0 /home/cheick/Documents/Git/ECE-3574-Project0 /home/cheick/Documents/Git/ECE-3574-Project0 /home/cheick/Documents/Git/ECE-3574-Project0 /home/cheick/Documents/Git/ECE-3574-Project0/CMakeFiles/test_todo.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/test_todo.dir/depend

