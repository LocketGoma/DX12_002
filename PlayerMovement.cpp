#include "PlayerMovement.h"
#include "Resource.h"


PlayerMovement::PlayerMovement() :
	initialPosition(0, 0, 0),
	position(initialPosition),
	moveSpeed(20.0f),
	lookDirection(0,0,-1)
{
}
void PlayerMovement::Init(XMFLOAT3 position) {
	initialPosition = position;
	Reset();			//좌표 리셋
}
void PlayerMovement::SetMoveSpeed(float unitsPerSecond) {
	moveSpeed = unitsPerSecond;
}
void PlayerMovement::Reset() {
	position = initialPosition;
	lookDirection = { 0, 0, -1 };
}
void PlayerMovement::Update(float elapsedSeconds) {
	
	//움직이는 좌표 / 위치 조정.
	XMFLOAT3 move(0, 0, 0);


	if (keyPressed.left)
		move.x -= 1.0f;
	if (keyPressed.right)
		move.x += 1.0f;
	if (keyPressed.up)
		move.z -= 1.0f;
	if (keyPressed.down)
		move.z += 1.0f;


	float moveInterval = moveSpeed * elapsedSeconds;

	position.x += move.x * moveInterval;
	position.z += move.z * moveInterval;
}

void PlayerMovement::OnKeyDown(WPARAM key)
{
    switch (key)
    {
    case VK_LEFT:
        keyPressed.left = true;
        break;
    case VK_RIGHT:
        keyPressed.right = true;
        break;
    case VK_UP:
        keyPressed.up = true;
        break;
    case VK_DOWN:
        keyPressed.down = true;
        break;
//    case VK_ESCAPE:
//        Reset();
//        break;
    }
}
void PlayerMovement::OnKeyUp(WPARAM key)
{
    switch (key)
    {
    case VK_LEFT:
        keyPressed.left = false;
        break;
    case VK_RIGHT:
        keyPressed.right = false;
        break;
    case VK_UP:
        keyPressed.up = false;
        break;
    case VK_DOWN:
        keyPressed.down = false;
        break;
        //    case VK_ESCAPE:
        //        Reset();
        //        break;
    }
}