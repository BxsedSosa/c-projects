#include <stdlib.h>
#define GLFW_INCLUDE_NONE
#include <GLFW/glfw3.h>
#include <stdio.h>

int main() {
  while (1) {
    GLFWwindow *window = glfwCreateWindow(640, 480, "Blah Blah", NULL, NULL);
    if (!window) {
      glfwTerminate();
      exit(EXIT_FAILURE);
    }
  }
  return 0;
}
