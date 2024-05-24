#include "Cloud2.h"
#include "AssetIDs.h"

void CCloud2::Render()
{
	CSprites* s = CSprites::GetInstance();
	s->Get(SPRITEID)->Draw(x, y);
	//RenderBoundingBox();
}

void CCloud2::GetBoundingBox(float& l, float& t, float& r, float& b)
{
	l = x - CLOUD2_BBOX_WIDTH / 2;
	t = y - CLOUD2_BBOX_HEIGHT / 2;
	r = l + CLOUD2_BBOX_WIDTH;
	b = t + CLOUD2_BBOX_HEIGHT;
}