# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.19

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2021.1.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2021.1.3\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\Guga\CLionProjects\todosmetodos

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Guga\CLionProjects\todosmetodos\cmake-build-debug-mingw

# Include any dependencies generated for this target.
include CMakeFiles/todosmetodos.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/todosmetodos.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/todosmetodos.dir/flags.make

CMakeFiles/todosmetodos.dir/main.cpp.obj: CMakeFiles/todosmetodos.dir/flags.make
CMakeFiles/todosmetodos.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Guga\CLionProjects\todosmetodos\cmake-build-debug-mingw\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/todosmetodos.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\todosmetodos.dir\main.cpp.obj -c C:\Users\Guga\CLionProjects\todosmetodos\main.cpp

CMakeFiles/todosmetodos.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/todosmetodos.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Guga\CLionProjects\todosmetodos\main.cpp > CMakeFiles\todosmetodos.dir\main.cpp.i

CMakeFiles/todosmetodos.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/todosmetodos.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Guga\CLionProjects\todosmetodos\main.cpp -o CMakeFiles\todosmetodos.dir\main.cpp.s

CMakeFiles/todosmetodos.dir/sistema.cpp.obj: CMakeFiles/todosmetodos.dir/flags.make
CMakeFiles/todosmetodos.dir/sistema.cpp.obj: ../sistema.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Guga\CLionProjects\todosmetodos\cmake-build-debug-mingw\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/todosmetodos.dir/sistema.cpp.obj"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\todosmetodos.dir\sistema.cpp.obj -c C:\Users\Guga\CLionProjects\todosmetodos\sistema.cpp

CMakeFiles/todosmetodos.dir/sistema.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/todosmetodos.dir/sistema.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Guga\CLionProjects\todosmetodos\sistema.cpp > CMakeFiles\todosmetodos.dir\sistema.cpp.i

CMakeFiles/todosmetodos.dir/sistema.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/todosmetodos.dir/sistema.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Guga\CLionProjects\todosmetodos\sistema.cpp -o CMakeFiles\todosmetodos.dir\sistema.cpp.s

# Object files for target todosmetodos
todosmetodos_OBJECTS = \
"CMakeFiles/todosmetodos.dir/main.cpp.obj" \
"CMakeFiles/todosmetodos.dir/sistema.cpp.obj"

# External object files for target todosmetodos
todosmetodos_EXTERNAL_OBJECTS =

todosmetodos.exe: CMakeFiles/todosmetodos.dir/main.cpp.obj
todosmetodos.exe: CMakeFiles/todosmetodos.dir/sistema.cpp.obj
todosmetodos.exe: CMakeFiles/todosmetodos.dir/build.make
todosmetodos.exe: CMakeFiles/todosmetodos.dir/linklibs.rsp
todosmetodos.exe: CMakeFiles/todosmetodos.dir/objects1.rsp
todosmetodos.exe: CMakeFiles/todosmetodos.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Guga\CLionProjects\todosmetodos\cmake-build-debug-mingw\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable todosmetodos.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\todosmetodos.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/todosmetodos.dir/build: todosmetodos.exe

.PHONY : CMakeFiles/todosmetodos.dir/build

CMakeFiles/todosmetodos.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\todosmetodos.dir\cmake_clean.cmake
.PHONY : CMakeFiles/todosmetodos.dir/clean

CMakeFiles/todosmetodos.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Guga\CLionProjects\todosmetodos C:\Users\Guga\CLionProjects\todosmetodos C:\Users\Guga\CLionProjects\todosmetodos\cmake-build-debug-mingw C:\Users\Guga\CLionProjects\todosmetodos\cmake-build-debug-mingw C:\Users\Guga\CLionProjects\todosmetodos\cmake-build-debug-mingw\CMakeFiles\todosmetodos.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/todosmetodos.dir/depend

