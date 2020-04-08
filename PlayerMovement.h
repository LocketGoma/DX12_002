#pragma once
#include "d3dx12.h"
#include "Resource.h"

//���� : D3D12DynamicIndexing Tutorial
//���� ��ǥ : ȭ�� ����

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
	void Reset();


	XMFLOAT3 initialPosition;	//���� ������
	XMFLOAT3 position;			//���� ������
	XMFLOAT3 lookDirection;		//���� ��ġ?
	float moveSpeed;	

	KeyPressed keyPressed;
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