project(imagelib VERSION 0.1 LANGUAGES CXX)

add_library(image src/image.cpp)
    
target_include_directories(image
    PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
        $<INSTALL_INTERFACE:include>
    PRIVATE
        src)

target_compile_features(image
    PUBLIC
        cxx_auto_type
    PRIVATE
        cxx_variadic_templates)

target_link_libraries(image boost)

install(TARGETS image EXPORT ImageTargets
    ARCHIVE  DESTINATION lib
    LIBRARY  DESTINATION lib
    RUNTIME  DESTINATION bin)
install(DIRECTORY include/ DESTINATION include)

install(EXPORT ImageTargets FILE ImageTargets.cmake DESTINATION lib/cmake/Image)

include(CMakePackageConfigHelpers)
write_basic_package_version_file(${CMAKE_CURRENT_LIST_DIR}/ImageConfigVersion.cmake
    VERSION ${Image_VERSION}
    COMPATIBILITY SameMajorVersion)
install(FILES "ImageConfig.cmake" ${CMAKE_CURRENT_LIST_DIR}/ImageConfigVersion.cmake
        DESTINATION lib/cmake/Image)


set(CPACK_PACKAGE_NAME "Image")
set(CPACK_PACKAGE_VENDOR "Icepic")
set(CPACK_PACKAGE_DESCRIPTION_SUMMARY "Image - CPack Component Installation Example")
set(CPACK_PACKAGE_VERSION "1.0.0")
set(CPACK_PACKAGE_VERSION_MAJOR "1")
set(CPACK_PACKAGE_VERSION_MINOR "0")
set(CPACK_PACKAGE_VERSION_PATCH "0")
set(CPACK_PACKAGE_INSTALL_DIRECTORY "CPack Component Example")

INCLUDE(CPack)
