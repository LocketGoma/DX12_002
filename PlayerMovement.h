#pragma once
#include "d3dx12.h"
#include "Resource.h"

//참고 : D3D12DynamicIndexing Tutorial
//오늘 목표 : 화면 띄우기

using namespace DirectX;

class PlayerMovement
{
public :
	PlayerMovement();
	void Init(XMFLOAT3 position);
	void Update(float elapsedSeconds);
	void SetMoveSpeed(float unitsPerSecond);

	void OnKeyDown(WPARAM key);
	void OnKeyUp(WPARAM key);


private :
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

	void Reset();


	XMFLOAT3 initialPosition;	//최초 포지션
	XMFLOAT3 position;			//현재 포지션
	XMFLOAT3 lookDirection;		//시점 위치?
	float moveSpeed;	

	KeyPressed keyPressed;
};


