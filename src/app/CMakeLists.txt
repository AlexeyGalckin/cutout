file( GLOB SRC *.cpp )
file( GLOB HDR *.h )
#
add_executable( cutout ${SRC} ${HDR} )
#
target_include_directories( cutout PRIVATE ${CUT_EXT_DIR} )
target_link_libraries( cutout PRIVATE cut )
#
