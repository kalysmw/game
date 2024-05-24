#include "GREEN.h"
#include "AssetIDs.h"

void CGreen::Render()
{
	CSprites* s = CSprites::GetInstance();
	s->Get(ID_SPRITE_GREEN)->Draw(x, y);
	//RenderBoundingBox();
}

void CGreen::GetBoundingBox(float& l, float& t, float& r, float& b)
{
	l = x - GREEN_BBOX_WIDTH / 2;
	t = y - GREEN_BBOX_HEIGHT / 2;
	r = l + GREEN_BBOX_WIDTH - 10;
	b = t + GREEN_BBOX_HEIGHT;
}