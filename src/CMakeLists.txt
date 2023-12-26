add_link_options("-fuse-ld=mold")
include_directories(${PROJECT_SOURCE_DIR}/inc)
file(GLOB minimum_SRC CONFIGURE_DEPENDS "*.h" "*.cpp")
add_executable(minimum ${minimum_SRC})
