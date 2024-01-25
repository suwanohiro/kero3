#pragma once

#include "Mof.h"

class GameObject
{
private:
	bool _isActive;

	Vector2 _position;
	Vector2 _scroll;

public:
	GameObject();
	~GameObject() { Release(); }

	virtual void Initialize();
	virtual void FixedUpdate(const Vector2& scroll);
	virtual void Update();
	virtual void Render();
	virtual void Release();

	// isActive
	void isActive(bool value) { _isActive = value; }
	bool isActive() const { return _isActive; }

	// Position
	void Position(const Vector2& value) { _position = value; }
	Vector2 Position() const { return _position; }
};
