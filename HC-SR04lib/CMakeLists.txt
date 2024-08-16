cmake_minimum_required(VERSION 3.22)
project(HC-SR04_installTest)

add_library(HC-SR04 HC-SR04.h HC-SR04.cpp  )

include(includeGNUInstallDirs)

set(installable_libs installTest tutorial_compiler_flags)
if(TARGET HC-SR04)
  list(APPEND installable_libs HC-SR04 -lwiringPi)
endif()
install(TARGETS ${installable_libs} DESTINATION lib)
install(FILES HC-SR04.h DESTINATION include)
install(FILES HC-SR04.cpp DESTINATION include)
install(TARGETS HC-SR04_installTest DESTINATION bin)

install(FILES "${PROJECT_BINARY_DIR}/HC-SR04.h"
  DESTINATION include
  )

install(FILES "${PROJECT_BINARY_DIR}/HC-SR04.cpp"
DESTINATION include
)




enable_testing()

add_test(NAME Runs COMMAND Tutorial 25)

add_test(NAME Usage COMMAND HC-SR04_installTest)
set_tests_properties(Usage
  PROPERTIES PASS_REGULAR_EXPRESSION "Usage:.*number"
  )

  add_test(NAME StandardUse COMMAND Tutorial 4)
set_tests_properties(StandardUse
  PROPERTIES PASS_REGULAR_EXPRESSION "4 is 2"
  )