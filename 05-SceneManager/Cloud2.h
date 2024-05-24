#pragma once

#include "GameObject.h"
#include "Animation.h"
#include "Animations.h"

#define CLOUD2_WIDTH 48
#define CLOUD2_BBOX_WIDTH 48
#define CLOUD2_BBOX_HEIGHT 22

#define CLOUD2_ALONE_WIDTH 31
#define CLOUD2_ALONE_BBOX_WIDTH 31
#define CLOUD2_ALONE_BBOX_HEIGHT 23

class CCloud2 : public CGameObject {
public:
	int SPRITEID;
	CCloud2(float x, float y, int SPRITEID) : CGameObject(x, y) { this->SPRITEID = SPRITEID; }
	void Render();
	void Update(DWORD dt) {}
	void GetBoundingBox(float& l, float& t, float& r, float& b);
	//int IsBlocking() { return 0; )

};
