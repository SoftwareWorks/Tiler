#ifndef __GAMEPANEL_H_
#define __GAMEPANEL_H_

#include "Shader.h"

#include "Panel.h"

class GamePanel : public Panel
{
	public:
		GamePanel(Window*, Camera*);
		~GamePanel();
		void render();
		void update();
		void setActive();
		Shader2t* shader;
};

#endif
