#include "Orange.h"
#include "AssetIDs.h"

void COrange::Render()
{
	CSprites* s = CSprites::GetInstance();
	s->Get(ID_SPRITE_ORANGE)->Draw(x, y);
	//RenderBoundingBox();
}

void COrange::GetBoundingBox(float& l, float& t, float& r, float& b)
{
	l = x - ORANGE_BBOX_WIDTH / 2;
	t = y - ORANGE_BBOX_HEIGHT / 2;
	r = l + ORANGE_BBOX_WIDTH - 10;
	b = t + ORANGE_BBOX_HEIGHT;
}