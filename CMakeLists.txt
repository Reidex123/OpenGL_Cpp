cmake_minimum_required(VERSION 3.20)
project(GameEngine)

set(CMAKE_CXX_STANDARD 17)

# Tell CMake to build GLFW from source
add_subdirectory(glfw-3.4)

add_executable(Engine
    src/window.cpp
    src/glad.c
)

# Include paths for GLAD and GLFW headers
target_include_directories(Engine PRIVATE
    include/              # where glad/ folder lives
    glfw-3.4/include/     # where GLFW/glfw3.h lives
)

# Link GLFW
target_link_libraries(Engine glfw)