# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.27

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
CMAKE_COMMAND = C:\Users\pc\AppData\Local\Programs\CLion\bin\cmake\win\x64\bin\cmake.exe

# The command to remove a file.
RM = C:\Users\pc\AppData\Local\Programs\CLion\bin\cmake\win\x64\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\dev\tp-times-series

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\dev\tp-times-series\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/tp_times_series.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/tp_times_series.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/tp_times_series.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/tp_times_series.dir/flags.make

CMakeFiles/tp_times_series.dir/main.cpp.obj: CMakeFiles/tp_times_series.dir/flags.make
CMakeFiles/tp_times_series.dir/main.cpp.obj: C:/dev/tp-times-series/main.cpp
CMakeFiles/tp_times_series.dir/main.cpp.obj: CMakeFiles/tp_times_series.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\dev\tp-times-series\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/tp_times_series.dir/main.cpp.obj"
	C:\MinGW\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/tp_times_series.dir/main.cpp.obj -MF CMakeFiles\tp_times_series.dir\main.cpp.obj.d -o CMakeFiles\tp_times_series.dir\main.cpp.obj -c C:\dev\tp-times-series\main.cpp

CMakeFiles/tp_times_series.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/tp_times_series.dir/main.cpp.i"
	C:\MinGW\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\dev\tp-times-series\main.cpp > CMakeFiles\tp_times_series.dir\main.cpp.i

CMakeFiles/tp_times_series.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/tp_times_series.dir/main.cpp.s"
	C:\MinGW\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\dev\tp-times-series\main.cpp -o CMakeFiles\tp_times_series.dir\main.cpp.s

CMakeFiles/tp_times_series.dir/TimeSeriesGenerator.cpp.obj: CMakeFiles/tp_times_series.dir/flags.make
CMakeFiles/tp_times_series.dir/TimeSeriesGenerator.cpp.obj: C:/dev/tp-times-series/TimeSeriesGenerator.cpp
CMakeFiles/tp_times_series.dir/TimeSeriesGenerator.cpp.obj: CMakeFiles/tp_times_series.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\dev\tp-times-series\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/tp_times_series.dir/TimeSeriesGenerator.cpp.obj"
	C:\MinGW\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/tp_times_series.dir/TimeSeriesGenerator.cpp.obj -MF CMakeFiles\tp_times_series.dir\TimeSeriesGenerator.cpp.obj.d -o CMakeFiles\tp_times_series.dir\TimeSeriesGenerator.cpp.obj -c C:\dev\tp-times-series\TimeSeriesGenerator.cpp

CMakeFiles/tp_times_series.dir/TimeSeriesGenerator.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/tp_times_series.dir/TimeSeriesGenerator.cpp.i"
	C:\MinGW\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\dev\tp-times-series\TimeSeriesGenerator.cpp > CMakeFiles\tp_times_series.dir\TimeSeriesGenerator.cpp.i

CMakeFiles/tp_times_series.dir/TimeSeriesGenerator.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/tp_times_series.dir/TimeSeriesGenerator.cpp.s"
	C:\MinGW\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\dev\tp-times-series\TimeSeriesGenerator.cpp -o CMakeFiles\tp_times_series.dir\TimeSeriesGenerator.cpp.s

CMakeFiles/tp_times_series.dir/GaussianGenerator.cpp.obj: CMakeFiles/tp_times_series.dir/flags.make
CMakeFiles/tp_times_series.dir/GaussianGenerator.cpp.obj: C:/dev/tp-times-series/GaussianGenerator.cpp
CMakeFiles/tp_times_series.dir/GaussianGenerator.cpp.obj: CMakeFiles/tp_times_series.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\dev\tp-times-series\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/tp_times_series.dir/GaussianGenerator.cpp.obj"
	C:\MinGW\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/tp_times_series.dir/GaussianGenerator.cpp.obj -MF CMakeFiles\tp_times_series.dir\GaussianGenerator.cpp.obj.d -o CMakeFiles\tp_times_series.dir\GaussianGenerator.cpp.obj -c C:\dev\tp-times-series\GaussianGenerator.cpp

CMakeFiles/tp_times_series.dir/GaussianGenerator.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/tp_times_series.dir/GaussianGenerator.cpp.i"
	C:\MinGW\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\dev\tp-times-series\GaussianGenerator.cpp > CMakeFiles\tp_times_series.dir\GaussianGenerator.cpp.i

CMakeFiles/tp_times_series.dir/GaussianGenerator.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/tp_times_series.dir/GaussianGenerator.cpp.s"
	C:\MinGW\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\dev\tp-times-series\GaussianGenerator.cpp -o CMakeFiles\tp_times_series.dir\GaussianGenerator.cpp.s

CMakeFiles/tp_times_series.dir/StepGenerator.cpp.obj: CMakeFiles/tp_times_series.dir/flags.make
CMakeFiles/tp_times_series.dir/StepGenerator.cpp.obj: C:/dev/tp-times-series/StepGenerator.cpp
CMakeFiles/tp_times_series.dir/StepGenerator.cpp.obj: CMakeFiles/tp_times_series.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\dev\tp-times-series\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/tp_times_series.dir/StepGenerator.cpp.obj"
	C:\MinGW\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/tp_times_series.dir/StepGenerator.cpp.obj -MF CMakeFiles\tp_times_series.dir\StepGenerator.cpp.obj.d -o CMakeFiles\tp_times_series.dir\StepGenerator.cpp.obj -c C:\dev\tp-times-series\StepGenerator.cpp

CMakeFiles/tp_times_series.dir/StepGenerator.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/tp_times_series.dir/StepGenerator.cpp.i"
	C:\MinGW\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\dev\tp-times-series\StepGenerator.cpp > CMakeFiles\tp_times_series.dir\StepGenerator.cpp.i

CMakeFiles/tp_times_series.dir/StepGenerator.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/tp_times_series.dir/StepGenerator.cpp.s"
	C:\MinGW\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\dev\tp-times-series\StepGenerator.cpp -o CMakeFiles\tp_times_series.dir\StepGenerator.cpp.s

CMakeFiles/tp_times_series.dir/SinWaveGenerator.cpp.obj: CMakeFiles/tp_times_series.dir/flags.make
CMakeFiles/tp_times_series.dir/SinWaveGenerator.cpp.obj: C:/dev/tp-times-series/SinWaveGenerator.cpp
CMakeFiles/tp_times_series.dir/SinWaveGenerator.cpp.obj: CMakeFiles/tp_times_series.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\dev\tp-times-series\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/tp_times_series.dir/SinWaveGenerator.cpp.obj"
	C:\MinGW\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/tp_times_series.dir/SinWaveGenerator.cpp.obj -MF CMakeFiles\tp_times_series.dir\SinWaveGenerator.cpp.obj.d -o CMakeFiles\tp_times_series.dir\SinWaveGenerator.cpp.obj -c C:\dev\tp-times-series\SinWaveGenerator.cpp

CMakeFiles/tp_times_series.dir/SinWaveGenerator.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/tp_times_series.dir/SinWaveGenerator.cpp.i"
	C:\MinGW\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\dev\tp-times-series\SinWaveGenerator.cpp > CMakeFiles\tp_times_series.dir\SinWaveGenerator.cpp.i

CMakeFiles/tp_times_series.dir/SinWaveGenerator.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/tp_times_series.dir/SinWaveGenerator.cpp.s"
	C:\MinGW\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\dev\tp-times-series\SinWaveGenerator.cpp -o CMakeFiles\tp_times_series.dir\SinWaveGenerator.cpp.s

CMakeFiles/tp_times_series.dir/TimeSeriesDataset.cpp.obj: CMakeFiles/tp_times_series.dir/flags.make
CMakeFiles/tp_times_series.dir/TimeSeriesDataset.cpp.obj: C:/dev/tp-times-series/TimeSeriesDataset.cpp
CMakeFiles/tp_times_series.dir/TimeSeriesDataset.cpp.obj: CMakeFiles/tp_times_series.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\dev\tp-times-series\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/tp_times_series.dir/TimeSeriesDataset.cpp.obj"
	C:\MinGW\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/tp_times_series.dir/TimeSeriesDataset.cpp.obj -MF CMakeFiles\tp_times_series.dir\TimeSeriesDataset.cpp.obj.d -o CMakeFiles\tp_times_series.dir\TimeSeriesDataset.cpp.obj -c C:\dev\tp-times-series\TimeSeriesDataset.cpp

CMakeFiles/tp_times_series.dir/TimeSeriesDataset.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/tp_times_series.dir/TimeSeriesDataset.cpp.i"
	C:\MinGW\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\dev\tp-times-series\TimeSeriesDataset.cpp > CMakeFiles\tp_times_series.dir\TimeSeriesDataset.cpp.i

CMakeFiles/tp_times_series.dir/TimeSeriesDataset.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/tp_times_series.dir/TimeSeriesDataset.cpp.s"
	C:\MinGW\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\dev\tp-times-series\TimeSeriesDataset.cpp -o CMakeFiles\tp_times_series.dir\TimeSeriesDataset.cpp.s

CMakeFiles/tp_times_series.dir/euclidean_distance.cpp.obj: CMakeFiles/tp_times_series.dir/flags.make
CMakeFiles/tp_times_series.dir/euclidean_distance.cpp.obj: C:/dev/tp-times-series/euclidean_distance.cpp
CMakeFiles/tp_times_series.dir/euclidean_distance.cpp.obj: CMakeFiles/tp_times_series.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\dev\tp-times-series\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/tp_times_series.dir/euclidean_distance.cpp.obj"
	C:\MinGW\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/tp_times_series.dir/euclidean_distance.cpp.obj -MF CMakeFiles\tp_times_series.dir\euclidean_distance.cpp.obj.d -o CMakeFiles\tp_times_series.dir\euclidean_distance.cpp.obj -c C:\dev\tp-times-series\euclidean_distance.cpp

CMakeFiles/tp_times_series.dir/euclidean_distance.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/tp_times_series.dir/euclidean_distance.cpp.i"
	C:\MinGW\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\dev\tp-times-series\euclidean_distance.cpp > CMakeFiles\tp_times_series.dir\euclidean_distance.cpp.i

CMakeFiles/tp_times_series.dir/euclidean_distance.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/tp_times_series.dir/euclidean_distance.cpp.s"
	C:\MinGW\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\dev\tp-times-series\euclidean_distance.cpp -o CMakeFiles\tp_times_series.dir\euclidean_distance.cpp.s

CMakeFiles/tp_times_series.dir/DTW.cpp.obj: CMakeFiles/tp_times_series.dir/flags.make
CMakeFiles/tp_times_series.dir/DTW.cpp.obj: C:/dev/tp-times-series/DTW.cpp
CMakeFiles/tp_times_series.dir/DTW.cpp.obj: CMakeFiles/tp_times_series.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\dev\tp-times-series\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/tp_times_series.dir/DTW.cpp.obj"
	C:\MinGW\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/tp_times_series.dir/DTW.cpp.obj -MF CMakeFiles\tp_times_series.dir\DTW.cpp.obj.d -o CMakeFiles\tp_times_series.dir\DTW.cpp.obj -c C:\dev\tp-times-series\DTW.cpp

CMakeFiles/tp_times_series.dir/DTW.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/tp_times_series.dir/DTW.cpp.i"
	C:\MinGW\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\dev\tp-times-series\DTW.cpp > CMakeFiles\tp_times_series.dir\DTW.cpp.i

CMakeFiles/tp_times_series.dir/DTW.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/tp_times_series.dir/DTW.cpp.s"
	C:\MinGW\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\dev\tp-times-series\DTW.cpp -o CMakeFiles\tp_times_series.dir\DTW.cpp.s

CMakeFiles/tp_times_series.dir/KNN.cpp.obj: CMakeFiles/tp_times_series.dir/flags.make
CMakeFiles/tp_times_series.dir/KNN.cpp.obj: C:/dev/tp-times-series/KNN.cpp
CMakeFiles/tp_times_series.dir/KNN.cpp.obj: CMakeFiles/tp_times_series.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\dev\tp-times-series\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/tp_times_series.dir/KNN.cpp.obj"
	C:\MinGW\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/tp_times_series.dir/KNN.cpp.obj -MF CMakeFiles\tp_times_series.dir\KNN.cpp.obj.d -o CMakeFiles\tp_times_series.dir\KNN.cpp.obj -c C:\dev\tp-times-series\KNN.cpp

CMakeFiles/tp_times_series.dir/KNN.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/tp_times_series.dir/KNN.cpp.i"
	C:\MinGW\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\dev\tp-times-series\KNN.cpp > CMakeFiles\tp_times_series.dir\KNN.cpp.i

CMakeFiles/tp_times_series.dir/KNN.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/tp_times_series.dir/KNN.cpp.s"
	C:\MinGW\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\dev\tp-times-series\KNN.cpp -o CMakeFiles\tp_times_series.dir\KNN.cpp.s

# Object files for target tp_times_series
tp_times_series_OBJECTS = \
"CMakeFiles/tp_times_series.dir/main.cpp.obj" \
"CMakeFiles/tp_times_series.dir/TimeSeriesGenerator.cpp.obj" \
"CMakeFiles/tp_times_series.dir/GaussianGenerator.cpp.obj" \
"CMakeFiles/tp_times_series.dir/StepGenerator.cpp.obj" \
"CMakeFiles/tp_times_series.dir/SinWaveGenerator.cpp.obj" \
"CMakeFiles/tp_times_series.dir/TimeSeriesDataset.cpp.obj" \
"CMakeFiles/tp_times_series.dir/euclidean_distance.cpp.obj" \
"CMakeFiles/tp_times_series.dir/DTW.cpp.obj" \
"CMakeFiles/tp_times_series.dir/KNN.cpp.obj"

# External object files for target tp_times_series
tp_times_series_EXTERNAL_OBJECTS =

tp_times_series.exe: CMakeFiles/tp_times_series.dir/main.cpp.obj
tp_times_series.exe: CMakeFiles/tp_times_series.dir/TimeSeriesGenerator.cpp.obj
tp_times_series.exe: CMakeFiles/tp_times_series.dir/GaussianGenerator.cpp.obj
tp_times_series.exe: CMakeFiles/tp_times_series.dir/StepGenerator.cpp.obj
tp_times_series.exe: CMakeFiles/tp_times_series.dir/SinWaveGenerator.cpp.obj
tp_times_series.exe: CMakeFiles/tp_times_series.dir/TimeSeriesDataset.cpp.obj
tp_times_series.exe: CMakeFiles/tp_times_series.dir/euclidean_distance.cpp.obj
tp_times_series.exe: CMakeFiles/tp_times_series.dir/DTW.cpp.obj
tp_times_series.exe: CMakeFiles/tp_times_series.dir/KNN.cpp.obj
tp_times_series.exe: CMakeFiles/tp_times_series.dir/build.make
tp_times_series.exe: CMakeFiles/tp_times_series.dir/linkLibs.rsp
tp_times_series.exe: CMakeFiles/tp_times_series.dir/objects1.rsp
tp_times_series.exe: CMakeFiles/tp_times_series.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=C:\dev\tp-times-series\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Linking CXX executable tp_times_series.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\tp_times_series.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/tp_times_series.dir/build: tp_times_series.exe
.PHONY : CMakeFiles/tp_times_series.dir/build

CMakeFiles/tp_times_series.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\tp_times_series.dir\cmake_clean.cmake
.PHONY : CMakeFiles/tp_times_series.dir/clean

CMakeFiles/tp_times_series.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\dev\tp-times-series C:\dev\tp-times-series C:\dev\tp-times-series\cmake-build-debug C:\dev\tp-times-series\cmake-build-debug C:\dev\tp-times-series\cmake-build-debug\CMakeFiles\tp_times_series.dir\DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/tp_times_series.dir/depend

