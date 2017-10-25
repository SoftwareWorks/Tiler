#ifndef __BUTTON_H_
#define __BUTTON_H_

#include "Rect.h"
#include "AABB.h"
#include "Camera.h"
#include "Window.h"

class Button : public TexRect
{
public:
	Button(Window* window, Camera* camera, const char* pressed, const char* unpressed, const char* hover, float x, float y, float width, float height);
	AABB* getHitbox();
	void update();
private:
	enum State
	{
		NEUTRAL,
		HOVERED,
		PRESSED,
		RELEASED
	};
	State state = NEUTRAL;
	AABB* hitbox;
	Texture* pressed, * unpressed, * hover;
	Window* window;
};

class TexButton : public Button
{
public:
	TexButton(Window* window, Camera* camera, const char* texture, float x, float y, float width, float height);
	void renderTexture();
private:
	TexRect* texture;
};

#endif