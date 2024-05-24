#pragma once

#include "GameObject.h"
#include "Animation.h"
#include "Animations.h"

#define ORANGE_WIDTH 55
#define ORANGE_BBOX_WIDTH	55
#define ORANGE_BBOX_HEIGHT 47

class COrange : public CGameObject {
public:
	COrange(float x, float y) : CGameObject(x, y) {}
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
