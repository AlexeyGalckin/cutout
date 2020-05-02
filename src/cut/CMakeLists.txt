file( GLOB SRC *.cpp )
file( GLOB HDR *.h )
#
add_library( cut STATIC ${SRC} ${HDR} )
#
target_include_directories( cut PUBLIC ${CMAKE_CURRENT_LIST_DIR} )
