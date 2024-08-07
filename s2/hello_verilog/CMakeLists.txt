cmake_minimum_required(VERSION 3.16)
project(test CXX)

# Find Verilator
find_package(verilator HINTS ${VERILATOR_ROOT} $ENV{VERILATOR_ROOT})

# SystemC dependencies
set(THREADS_PREFER_PTHREAD_FLAG ON)
find_package(Threads REQUIRED)

# Find SystemC using SystemC's CMake integration
find_package(SystemCLanguage PATHS ${SYSTEMC_HOME})

add_executable(Vhello_tb hello_tb.cc)

set_property(
	TARGET Vhello_tb
	PROPERTY CXX_STANDARD ${SystemC_CXX_STANDARD}
)

verilate(Vhello_tb SYSTEMC COVERAGE TRACE
	INCLUDE_DIRECTORIES "."
	SOURCES hello.v
)

verilator_link_systemc(Vhello_tb)