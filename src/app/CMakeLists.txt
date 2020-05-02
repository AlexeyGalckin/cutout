file( GLOB SRC *.cpp )
file( GLOB HDR *.h )
#
add_executable( cutout ${SRC} ${HDR} )
#
set( CXXOPTS_INC ${CUT_EXT_DIR}/cxxopts/include )
#
target_include_directories( cutout PRIVATE ${CXXOPTS_INC} )
target_link_libraries( cutout PRIVATE cut )
#
