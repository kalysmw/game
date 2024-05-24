#include "Blue.h"
#include "AssetIDs.h"

void CBlue::Render()
{
	CSprites* s = CSprites::GetInstance();
	s->Get(ID_SPRITE_BLUE)->Draw(x, y);
	//RenderBoundingBox();
}

void CBlue::GetBoundingBox(float& l, float& t, float& r, float& b)
{
	l = x - BLUE_BBOX_WIDTH / 2;
	t = y - BLUE_BBOX_HEIGHT / 2;
	r = l + BLUE_BBOX_WIDTH - 11;
	b = t + BLUE_BBOX_HEIGHT;
}