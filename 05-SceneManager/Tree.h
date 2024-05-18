#pragma once

#include "GameObject.h"
#include "Animation.h"
#include "Animations.h"

#define ID_ANI_TREE 101
#define TREE_WIDTH 130
#define TREE_BBOX_WIDTH	130
#define TREE_BBOX_HEIGHT 65

class CTree : public CGameObject {
public:
	CTree(float x, float y) : CGameObject(x, y) {}
	void Render();
	void Update(DWORD dt) {}
	void GetBoundingBox(float& l, float& t, float& r, float& b);
	int IsBlocking() { return 0;}
};
