# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

# Default target executed when no arguments are given to make.
default_target: all
.PHONY : default_target

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

#=============================================================================
# Targets provided globally by CMake.

# Special rule for the target edit_cache
edit_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake cache editor..."
	/usr/bin/cmake-gui -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : edit_cache

# Special rule for the target edit_cache
edit_cache/fast: edit_cache
.PHONY : edit_cache/fast

# Special rule for the target rebuild_cache
rebuild_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake to regenerate build system..."
	/usr/bin/cmake -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : rebuild_cache

# Special rule for the target rebuild_cache
rebuild_cache/fast: rebuild_cache
.PHONY : rebuild_cache/fast

# Special rule for the target test
test:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running tests..."
	/usr/bin/ctest --force-new-ctest-process $(ARGS)
.PHONY : test

# Special rule for the target test
test/fast: test
.PHONY : test/fast

# The main all target
all: cmake_check_build_system
	$(CMAKE_COMMAND) -E cmake_progress_start /home/cheick/Documents/Git/ECE-3574-Project0/CMakeFiles /home/cheick/Documents/Git/ECE-3574-Project0/CMakeFiles/progress.marks
	$(MAKE) -f CMakeFiles/Makefile2 all
	$(CMAKE_COMMAND) -E cmake_progress_start /home/cheick/Documents/Git/ECE-3574-Project0/CMakeFiles 0
.PHONY : all

# The main clean target
clean:
	$(MAKE) -f CMakeFiles/Makefile2 clean
.PHONY : clean

# The main clean target
clean/fast: clean
.PHONY : clean/fast

# Prepare targets for installation.
preinstall: all
	$(MAKE) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall

# Prepare targets for installation.
preinstall/fast:
	$(MAKE) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall/fast

# clear depends
depend:
	$(CMAKE_COMMAND) -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 1
.PHONY : depend

#=============================================================================
# Target rules for targets named test_todo

# Build rule for target.
test_todo: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 test_todo
.PHONY : test_todo

# fast build rule for target.
test_todo/fast:
	$(MAKE) -f CMakeFiles/test_todo.dir/build.make CMakeFiles/test_todo.dir/build
.PHONY : test_todo/fast

#=============================================================================
# Target rules for targets named todo

# Build rule for target.
todo: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 todo
.PHONY : todo

# fast build rule for target.
todo/fast:
	$(MAKE) -f CMakeFiles/todo.dir/build.make CMakeFiles/todo.dir/build
.PHONY : todo/fast

# target to build an object file
Prog.o:
	$(MAKE) -f CMakeFiles/test_todo.dir/build.make CMakeFiles/test_todo.dir/Prog.o
	$(MAKE) -f CMakeFiles/todo.dir/build.make CMakeFiles/todo.dir/Prog.o
.PHONY : Prog.o

# target to preprocess a source file
Prog.i:
	$(MAKE) -f CMakeFiles/test_todo.dir/build.make CMakeFiles/test_todo.dir/Prog.i
	$(MAKE) -f CMakeFiles/todo.dir/build.make CMakeFiles/todo.dir/Prog.i
.PHONY : Prog.i

# target to generate assembly for a file
Prog.s:
	$(MAKE) -f CMakeFiles/test_todo.dir/build.make CMakeFiles/test_todo.dir/Prog.s
	$(MAKE) -f CMakeFiles/todo.dir/build.make CMakeFiles/todo.dir/Prog.s
.PHONY : Prog.s

# target to build an object file
c_Arglist.o:
	$(MAKE) -f CMakeFiles/test_todo.dir/build.make CMakeFiles/test_todo.dir/c_Arglist.o
	$(MAKE) -f CMakeFiles/todo.dir/build.make CMakeFiles/todo.dir/c_Arglist.o
.PHONY : c_Arglist.o

# target to preprocess a source file
c_Arglist.i:
	$(MAKE) -f CMakeFiles/test_todo.dir/build.make CMakeFiles/test_todo.dir/c_Arglist.i
	$(MAKE) -f CMakeFiles/todo.dir/build.make CMakeFiles/todo.dir/c_Arglist.i
.PHONY : c_Arglist.i

# target to generate assembly for a file
c_Arglist.s:
	$(MAKE) -f CMakeFiles/test_todo.dir/build.make CMakeFiles/test_todo.dir/c_Arglist.s
	$(MAKE) -f CMakeFiles/todo.dir/build.make CMakeFiles/todo.dir/c_Arglist.s
.PHONY : c_Arglist.s

# target to build an object file
c_command.o:
	$(MAKE) -f CMakeFiles/test_todo.dir/build.make CMakeFiles/test_todo.dir/c_command.o
	$(MAKE) -f CMakeFiles/todo.dir/build.make CMakeFiles/todo.dir/c_command.o
.PHONY : c_command.o

# target to preprocess a source file
c_command.i:
	$(MAKE) -f CMakeFiles/test_todo.dir/build.make CMakeFiles/test_todo.dir/c_command.i
	$(MAKE) -f CMakeFiles/todo.dir/build.make CMakeFiles/todo.dir/c_command.i
.PHONY : c_command.i

# target to generate assembly for a file
c_command.s:
	$(MAKE) -f CMakeFiles/test_todo.dir/build.make CMakeFiles/test_todo.dir/c_command.s
	$(MAKE) -f CMakeFiles/todo.dir/build.make CMakeFiles/todo.dir/c_command.s
.PHONY : c_command.s

# target to build an object file
main.o:
	$(MAKE) -f CMakeFiles/todo.dir/build.make CMakeFiles/todo.dir/main.o
.PHONY : main.o

# target to preprocess a source file
main.i:
	$(MAKE) -f CMakeFiles/todo.dir/build.make CMakeFiles/todo.dir/main.i
.PHONY : main.i

# target to generate assembly for a file
main.s:
	$(MAKE) -f CMakeFiles/todo.dir/build.make CMakeFiles/todo.dir/main.s
.PHONY : main.s

# target to build an object file
prog_test.o:
	$(MAKE) -f CMakeFiles/test_todo.dir/build.make CMakeFiles/test_todo.dir/prog_test.o
.PHONY : prog_test.o

# target to preprocess a source file
prog_test.i:
	$(MAKE) -f CMakeFiles/test_todo.dir/build.make CMakeFiles/test_todo.dir/prog_test.i
.PHONY : prog_test.i

# target to generate assembly for a file
prog_test.s:
	$(MAKE) -f CMakeFiles/test_todo.dir/build.make CMakeFiles/test_todo.dir/prog_test.s
.PHONY : prog_test.s

# Help Target
help:
	@echo "The following are some of the valid targets for this Makefile:"
	@echo "... all (the default if no target is provided)"
	@echo "... clean"
	@echo "... depend"
	@echo "... edit_cache"
	@echo "... rebuild_cache"
	@echo "... test"
	@echo "... test_todo"
	@echo "... todo"
	@echo "... Prog.o"
	@echo "... Prog.i"
	@echo "... Prog.s"
	@echo "... c_Arglist.o"
	@echo "... c_Arglist.i"
	@echo "... c_Arglist.s"
	@echo "... c_command.o"
	@echo "... c_command.i"
	@echo "... c_command.s"
	@echo "... main.o"
	@echo "... main.i"
	@echo "... main.s"
	@echo "... prog_test.o"
	@echo "... prog_test.i"
	@echo "... prog_test.s"
.PHONY : help



#=============================================================================
# Special targets to cleanup operation of make.

# Special rule to run CMake to check the build system integrity.
# No rule that depends on this can have commands that come from listfiles
# because they might be regenerated.
cmake_check_build_system:
	$(CMAKE_COMMAND) -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 0
.PHONY : cmake_check_build_system
