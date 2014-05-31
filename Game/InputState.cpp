#include "InputState.h"

InputState::InputState(void)
{
	// Ensure we can capture the escape key being pressed below
	glfwEnable( GLFW_STICKY_KEYS );
	glfwSetMousePos(1024/2, 768/2);
}

void InputState::getInput()
{

}

InputState::~InputState(void)
{
}
