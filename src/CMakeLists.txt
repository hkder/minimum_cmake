add_link_options("-fuse-ld=mold")
include_directories(${PROJECT_SOURCE_DIR}/inc)
file(GLOB sqlite_SRC CONFIGURE_DEPENDS "*.h" "*.c")
add_executable(sqlite ${sqlite_SRC})
