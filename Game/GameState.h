#pragma once

#include <list>;

#include "SpaceObject.h"
#include "InputState.h"
#include "OutputState.h"

class GameState
{
private:
	SpaceObject* camera;

public:
	GameState(void);
	OutputState* updateState(InputState *input);
	~GameState(void);
};

