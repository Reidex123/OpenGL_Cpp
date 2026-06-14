#include <iostream>
#include <glad/glad.h> // OpenGL function loader
#include <GLFW/glfw3.h> // Window creation

using namespace std;

int main(){

    // Initiaise GLFW
    bool windowInit = glfwInit();

    if (!windowInit){
        cerr << "GLFW init failed!!\n";
        return -1;
    }

    // CONFIG THE OPENGL CONTEXT

    // The version of OpenGl we want to use (version 4.6)
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 6);

    // uses moreden OpenGL (includes shaders, VAOs, VBOs)
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

    // Create the window
    return 0;
}