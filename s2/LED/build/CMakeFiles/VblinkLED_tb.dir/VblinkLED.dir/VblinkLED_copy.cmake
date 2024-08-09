# Verilated -*- CMake -*-
# DESCRIPTION: Verilator output: CMake include script with class lists
#
# This CMake script lists generated Verilated files, for including in higher level CMake scripts.
# This file is meant to be consumed by the verilate() function,
# which becomes available after executing `find_package(verilator).

### Constants...
set(PERL "perl" CACHE FILEPATH "Perl executable (from $PERL)")
set(VERILATOR_ROOT "/Users/koto/Programming/verilator-v4.224" CACHE PATH "Path to Verilator kit (from $VERILATOR_ROOT)")

### Compiler flags...
# User CFLAGS (from -CFLAGS on Verilator command line)
set(VblinkLED_USER_CFLAGS )
# User LDLIBS (from -LDFLAGS on Verilator command line)
set(VblinkLED_USER_LDLIBS )

### Switches...
# SystemC output mode?  0/1 (from --sc)
set(VblinkLED_SC 1)
# Coverage output mode?  0/1 (from --coverage)
set(VblinkLED_COVERAGE 1)
# Threaded output mode?  0/1/N threads (from --threads)
set(VblinkLED_THREADS 0)
# Threaded tracing output mode?  0/1/N threads (from --threads/--trace-threads)
set(VblinkLED_TRACE_THREADS 0)
set(VblinkLED_TRACE_FST_WRITER_THREAD 0)
# Struct output mode?  0/1 (from --trace-structs)
set(VblinkLED_TRACE_STRUCTS 0)
# VCD Tracing output mode?  0/1 (from --trace)
set(VblinkLED_TRACE_VCD 1)
# FST Tracing output mode? 0/1 (from --trace-fst)
set(VblinkLED_TRACE_FST 0)

### Sources...
# Global classes, need linked once per executable
set(VblinkLED_GLOBAL "${VERILATOR_ROOT}/include/verilated.cpp" "${VERILATOR_ROOT}/include/verilated_cov.cpp" "${VERILATOR_ROOT}/include/verilated_vcd_c.cpp" "${VERILATOR_ROOT}/include/verilated_vcd_sc.cpp")
# Generated module classes, non-fast-path, compile with low/medium optimization
set(VblinkLED_CLASSES_SLOW "/Users/koto/build/FromtheTransistor/s2/LED/build/CMakeFiles/VblinkLED_tb.dir/VblinkLED.dir/VblinkLED___024root__Slow.cpp" "/Users/koto/build/FromtheTransistor/s2/LED/build/CMakeFiles/VblinkLED_tb.dir/VblinkLED.dir/VblinkLED___024root__DepSet_had6f58ff__0__Slow.cpp" "/Users/koto/build/FromtheTransistor/s2/LED/build/CMakeFiles/VblinkLED_tb.dir/VblinkLED.dir/VblinkLED___024root__DepSet_hc0c99f40__0__Slow.cpp")
# Generated module classes, fast-path, compile with highest optimization
set(VblinkLED_CLASSES_FAST "/Users/koto/build/FromtheTransistor/s2/LED/build/CMakeFiles/VblinkLED_tb.dir/VblinkLED.dir/VblinkLED.cpp" "/Users/koto/build/FromtheTransistor/s2/LED/build/CMakeFiles/VblinkLED_tb.dir/VblinkLED.dir/VblinkLED___024root__DepSet_had6f58ff__0.cpp" "/Users/koto/build/FromtheTransistor/s2/LED/build/CMakeFiles/VblinkLED_tb.dir/VblinkLED.dir/VblinkLED___024root__DepSet_hc0c99f40__0.cpp")
# Generated support classes, non-fast-path, compile with low/medium optimization
set(VblinkLED_SUPPORT_SLOW "/Users/koto/build/FromtheTransistor/s2/LED/build/CMakeFiles/VblinkLED_tb.dir/VblinkLED.dir/VblinkLED__Syms.cpp" "/Users/koto/build/FromtheTransistor/s2/LED/build/CMakeFiles/VblinkLED_tb.dir/VblinkLED.dir/VblinkLED__Trace__0__Slow.cpp")
# Generated support classes, fast-path, compile with highest optimization
set(VblinkLED_SUPPORT_FAST "/Users/koto/build/FromtheTransistor/s2/LED/build/CMakeFiles/VblinkLED_tb.dir/VblinkLED.dir/VblinkLED__Trace__0.cpp")
# All dependencies
set(VblinkLED_DEPS "/Users/koto/Programming/verilator-v4.224/bin/verilator_bin" "blinkLED.v")
# User .cpp files (from .cpp's on Verilator command line)
set(VblinkLED_USER_CLASSES )
