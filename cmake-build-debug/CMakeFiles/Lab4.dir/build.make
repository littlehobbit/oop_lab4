# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

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
CMAKE_COMMAND = /opt/clion/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /opt/clion/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/hobbit/CLionProjects/OOP_Labs/Lab4

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/hobbit/CLionProjects/OOP_Labs/Lab4/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Lab4.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Lab4.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Lab4.dir/flags.make

CMakeFiles/Lab4.dir/main.cpp.o: CMakeFiles/Lab4.dir/flags.make
CMakeFiles/Lab4.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/hobbit/CLionProjects/OOP_Labs/Lab4/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Lab4.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Lab4.dir/main.cpp.o -c /home/hobbit/CLionProjects/OOP_Labs/Lab4/main.cpp

CMakeFiles/Lab4.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Lab4.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/hobbit/CLionProjects/OOP_Labs/Lab4/main.cpp > CMakeFiles/Lab4.dir/main.cpp.i

CMakeFiles/Lab4.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Lab4.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/hobbit/CLionProjects/OOP_Labs/Lab4/main.cpp -o CMakeFiles/Lab4.dir/main.cpp.s

CMakeFiles/Lab4.dir/console.cpp.o: CMakeFiles/Lab4.dir/flags.make
CMakeFiles/Lab4.dir/console.cpp.o: ../console.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/hobbit/CLionProjects/OOP_Labs/Lab4/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Lab4.dir/console.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Lab4.dir/console.cpp.o -c /home/hobbit/CLionProjects/OOP_Labs/Lab4/console.cpp

CMakeFiles/Lab4.dir/console.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Lab4.dir/console.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/hobbit/CLionProjects/OOP_Labs/Lab4/console.cpp > CMakeFiles/Lab4.dir/console.cpp.i

CMakeFiles/Lab4.dir/console.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Lab4.dir/console.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/hobbit/CLionProjects/OOP_Labs/Lab4/console.cpp -o CMakeFiles/Lab4.dir/console.cpp.s

CMakeFiles/Lab4.dir/employee.cpp.o: CMakeFiles/Lab4.dir/flags.make
CMakeFiles/Lab4.dir/employee.cpp.o: ../employee.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/hobbit/CLionProjects/OOP_Labs/Lab4/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/Lab4.dir/employee.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Lab4.dir/employee.cpp.o -c /home/hobbit/CLionProjects/OOP_Labs/Lab4/employee.cpp

CMakeFiles/Lab4.dir/employee.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Lab4.dir/employee.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/hobbit/CLionProjects/OOP_Labs/Lab4/employee.cpp > CMakeFiles/Lab4.dir/employee.cpp.i

CMakeFiles/Lab4.dir/employee.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Lab4.dir/employee.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/hobbit/CLionProjects/OOP_Labs/Lab4/employee.cpp -o CMakeFiles/Lab4.dir/employee.cpp.s

CMakeFiles/Lab4.dir/vector_employees.cpp.o: CMakeFiles/Lab4.dir/flags.make
CMakeFiles/Lab4.dir/vector_employees.cpp.o: ../vector_employees.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/hobbit/CLionProjects/OOP_Labs/Lab4/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/Lab4.dir/vector_employees.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Lab4.dir/vector_employees.cpp.o -c /home/hobbit/CLionProjects/OOP_Labs/Lab4/vector_employees.cpp

CMakeFiles/Lab4.dir/vector_employees.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Lab4.dir/vector_employees.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/hobbit/CLionProjects/OOP_Labs/Lab4/vector_employees.cpp > CMakeFiles/Lab4.dir/vector_employees.cpp.i

CMakeFiles/Lab4.dir/vector_employees.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Lab4.dir/vector_employees.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/hobbit/CLionProjects/OOP_Labs/Lab4/vector_employees.cpp -o CMakeFiles/Lab4.dir/vector_employees.cpp.s

CMakeFiles/Lab4.dir/emp_operations.cpp.o: CMakeFiles/Lab4.dir/flags.make
CMakeFiles/Lab4.dir/emp_operations.cpp.o: ../emp_operations.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/hobbit/CLionProjects/OOP_Labs/Lab4/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/Lab4.dir/emp_operations.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Lab4.dir/emp_operations.cpp.o -c /home/hobbit/CLionProjects/OOP_Labs/Lab4/emp_operations.cpp

CMakeFiles/Lab4.dir/emp_operations.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Lab4.dir/emp_operations.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/hobbit/CLionProjects/OOP_Labs/Lab4/emp_operations.cpp > CMakeFiles/Lab4.dir/emp_operations.cpp.i

CMakeFiles/Lab4.dir/emp_operations.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Lab4.dir/emp_operations.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/hobbit/CLionProjects/OOP_Labs/Lab4/emp_operations.cpp -o CMakeFiles/Lab4.dir/emp_operations.cpp.s

# Object files for target Lab4
Lab4_OBJECTS = \
"CMakeFiles/Lab4.dir/main.cpp.o" \
"CMakeFiles/Lab4.dir/console.cpp.o" \
"CMakeFiles/Lab4.dir/employee.cpp.o" \
"CMakeFiles/Lab4.dir/vector_employees.cpp.o" \
"CMakeFiles/Lab4.dir/emp_operations.cpp.o"

# External object files for target Lab4
Lab4_EXTERNAL_OBJECTS =

Lab4: CMakeFiles/Lab4.dir/main.cpp.o
Lab4: CMakeFiles/Lab4.dir/console.cpp.o
Lab4: CMakeFiles/Lab4.dir/employee.cpp.o
Lab4: CMakeFiles/Lab4.dir/vector_employees.cpp.o
Lab4: CMakeFiles/Lab4.dir/emp_operations.cpp.o
Lab4: CMakeFiles/Lab4.dir/build.make
Lab4: CMakeFiles/Lab4.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/hobbit/CLionProjects/OOP_Labs/Lab4/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX executable Lab4"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Lab4.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Lab4.dir/build: Lab4

.PHONY : CMakeFiles/Lab4.dir/build

CMakeFiles/Lab4.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Lab4.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Lab4.dir/clean

CMakeFiles/Lab4.dir/depend:
	cd /home/hobbit/CLionProjects/OOP_Labs/Lab4/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/hobbit/CLionProjects/OOP_Labs/Lab4 /home/hobbit/CLionProjects/OOP_Labs/Lab4 /home/hobbit/CLionProjects/OOP_Labs/Lab4/cmake-build-debug /home/hobbit/CLionProjects/OOP_Labs/Lab4/cmake-build-debug /home/hobbit/CLionProjects/OOP_Labs/Lab4/cmake-build-debug/CMakeFiles/Lab4.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Lab4.dir/depend

