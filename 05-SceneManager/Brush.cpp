#include "Brush.h"
#include "AssetIDs.h"

void CBrush::Render()
{
	CSprites* s = CSprites::GetInstance();
	s->Get(ID_SPRITE_BRUSH)->Draw(x, y);
	//RenderBoundingBox();
}

void CBrush::GetBoundingBox(float& l, float& t, float& r, float& b)
{
	l = x - BRUSH_BBOX_WIDTH / 2;
	t = y - BRUSH_BBOX_HEIGHT / 2;
	r = l + BRUSH_BBOX_WIDTH;
	b = t + BRUSH_BBOX_HEIGHT;
}