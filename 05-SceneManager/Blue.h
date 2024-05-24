#pragma once

#include "GameObject.h"
#include "Animation.h"
#include "Animations.h"

#define BLUE_WIDTH 55
#define BLUE_BBOX_WIDTH	55
#define BLUE_BBOX_HEIGHT 79

class CBlue : public CGameObject {
public:
	CBlue(float x, float y) : CGameObject(x, y) {}
	void Render();
	void Update(DWORD dt) {}
	void GetBoundingBox(float& l, float& t, float& r, float& b);
	int IsDirectionColliable(float nx, float ny)
	{
		if (nx == 0 && ny == -1) return 1;
		else return 0;
	}
	//int IsBlocking() { return 0; }

};
