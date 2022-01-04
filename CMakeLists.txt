cmake_minimum_required(VERSION "3.22.1")

project("SumIntegers")

add_executable("${PROJECT_NAME}" "Source.cpp" "DoIt.hpp")

install(TARGETS "${PROJECT_NAME}" DESTINATION bin)			#"${CMAKE_INSTALL_PREFIX}"/bin
install(FILES "Source.cpp" "DoIt.hpp" DESTINATION src)			#"${CMAKE_INSTALL_PREFIX}"/src

include(CTest)

add_test("Test" "${CMAKE_CURRENT_BINARY_DIR}/${PROJECT_NAME}")