#pragma once

#include "GameObject.h"
#include "Animation.h"
#include "Animations.h"

#define BRUSH_WIDTH 15
#define BRUSH_BBOX_WIDTH 15
#define BRUSH_BBOX_HEIGHT 15

class CBrush : public CGameObject {
public:
	CBrush(float x, float y) : CGameObject(x, y) {}
	void Render();
	void Update(DWORD dt) {}
	void GetBoundingBox(float& l, float& t, float& r, float& b);
	int IsBlocking() { return 0; }
};
#pragma once
