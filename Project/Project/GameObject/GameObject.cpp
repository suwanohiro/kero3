#include "GameObject.hpp"

GameObject::GameObject()
	: _isActive(true)
	, _position(0, 0)
	, _scroll(0, 0)
{
}

void GameObject::Initialize()
{
}

void GameObject::FixedUpdate(const Vector2& scroll)
{
	_scroll = scroll;
}

void GameObject::Update()
{
}

void GameObject::Render()
{
}

void GameObject::Release()
{
}
