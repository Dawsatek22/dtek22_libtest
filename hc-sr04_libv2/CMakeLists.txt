cmake_minimum_required(VERSION 3.22)
project(HR-SR04_installv1)

add_library(  HC-SR04  HC-SR04.cpp HC-SR04.h  )

set(installable_libs HC-SR04 )
if(TARGET HC-SR04)
  list(APPEND installable_libs HC-SR04)
endif()




install(FILES HC-SR04.h HC-SR04.cpp DESTINATION lib)

add_excecutable(HC-SR04 PUBLIC HC-SR04.cpp)

install(FILES HC-SR04.cpp DESTINATION include)
