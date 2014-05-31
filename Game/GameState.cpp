#include "GameState.h"

using namespace std;

GameState::GameState(void)
{
}

OutputState* GameState::updateState(InputState *input)
{
	OutputState *outState = new OutputState();

	return outState;
}

GameState::~GameState(void)
{
	delete camera;
}
