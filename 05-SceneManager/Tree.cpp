#include "Tree.h"
#include "AssetIDs.h"

void CTree::Render()
{
	CSprites* s = CSprites::GetInstance();
	s->Get(ID_SPRITE_TREE)->Draw(x, y);
	//RenderBoundingBox();
}

void CTree::GetBoundingBox(float& l, float& t, float& r, float& b)
{
	l = x - TREE_BBOX_WIDTH / 2;
	t = y - TREE_BBOX_HEIGHT / 2;
	r = l + TREE_BBOX_WIDTH;
	b = t + TREE_BBOX_HEIGHT;
}