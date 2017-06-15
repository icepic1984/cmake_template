include(CMakeFindDependencyMacro)
#find_dependency(Bar 2.0)
find_dependency(Boost)
include("${CMAKE_CURRENT_LIST_DIR}/ImageTargets.cmake")