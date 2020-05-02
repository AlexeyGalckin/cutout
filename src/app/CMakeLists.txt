file( GLOB SRC *.cpp )
file( GLOB HDR *.h )
#
add_executable( cutout ${SRC} ${HDR} )
target_link_libraries( cutout PRIVATE cut )
#
