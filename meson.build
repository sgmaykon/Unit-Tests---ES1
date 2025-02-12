project('conversor-app', 'cpp',
  default_options: ['cpp_std=c++17','b_coverage=true' ])
fs = import('fs')
# Include directories
doctest_inc = include_directories('include')
src_inc = include_directories('src')

# Source files
src_files = files(
  'src/Temperatura.cpp',
  'src/Medida.cpp',
  'src/Conversor.cpp',
)
src_main = files(
  'src/Main.cpp'
)

# Test files
test_files = files(
  'tests/test_main.cpp',  # Main test file with DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
  'tests/test_temperatura.cpp',
  'tests/test_medida.cpp',
  'tests/test_conversor.cpp'
)

# Build the test executable
# Build the test executable
test_exe = executable(
  'conversor-tests',  # Single executable for all tests
  test_files + src_files,  # Include all test and source files
  include_directories: [doctest_inc, src_inc],  # Include directories
  dependencies: [], # No external dependencies needed for doctest
  cpp_args: ['--coverage'],  
  link_args: ['--coverage']
)

prog_exe = executable(
  'programa',
  src_files + src_main
  )

# Register individual test cases with Meson
test('Temperatura Tests', test_exe, args: ['--test-case=Temperatura'])
test('Medida Tests', test_exe, args: ['--test-case=Medida'])
test('Conversor Tests', test_exe, args: ['--test-case=Conversor'])



