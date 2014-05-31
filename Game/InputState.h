#pragma once

// Include GLEW
#include <GL/glew.h>

// Include GLFW
#include <GL/glfw.h>

// Include GLM
#include <glm/glm.hpp>

class InputState
{
public:
	InputState(void);
	void getInput();
	~InputState(void);
};

