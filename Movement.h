#pragma once
#include "d3dx12.h"
#include "Resource.h"

//Âü°í : D3D12DynamicIndexing Tutorial

using namespace DirectX;

class Movement
{
public :
	Movement();
	void Init(XMFLOAT3 position);
	void Update(float elapsedSeconds);
	void SetMoveSpeed(float unitsPerSecond);

	void OnKeyDown(WPARAM key);
	void OnKeyUp(WPARAM key);


private :
	void Reset();

};

typedef struct KeyPressed
{
	//bool w;
	//bool a;
	//bool s;
	//bool d;

	bool space;
	bool z;
	bool x;

	bool left;
	bool right;
	bool up;
	bool down;
}KeyPressed;
