#include "Main.h"
#include "Vertex.h"

// Entry point
int main()
{
	std::cout << "Hello world";
	Vertex v = Vertex(2.3f, 5.6f, 10.3f);
	v.print();
	v.setY(0.0f); 
	v.print();

	glewExperimental = GL_TRUE;
	glfwInit();
	// Create and configure the window
	#pragma region configWindow

	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 2); 
	glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE); 

	glfwWindowHint(GLFW_RESIZABLE, GL_FALSE); 

	GLFWwindow* window = glfwCreateWindow(800, 600, "OpenGL", nullptr, nullptr); 
	//GLFWwindow* window = glfwCreateWindow(800, 600, "OpenGL", glfwGetPrimaryMonitor(), nullptr); // Fullscreen

	// After creating the window, the OpenGL context has to be made active. 
	glfwMakeContextCurrent(window); 
	#pragma endregion

#pragma region configGLEW

	glewInit();
	GLuint vertexBuffer;
	glGenBuffers(1, &vertexBuffer); 
	printf("%u\n", vertexBuffer);

	float vertices[] = 
	{
		0.0f, 0.5f, // vertex 1
		0.5f, -0.5f, 
		-0.5f, -0.5f
	};

	glBindBuffer(GL_ARRAY_BUFFER, vertexBuffer); 
	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW); 

#pragma endregion

	// Next: event loop. 
	while (!glfwWindowShouldClose(window))
	{
		glfwSwapBuffers(window); 
		glfwPollEvents(); 

		if (glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS)
			glfwSetWindowShouldClose(window, GL_TRUE);
	}

	glfwTerminate();
}