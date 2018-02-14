#pragma once
#include "Effect.h"
#include "Model.h"
#include "Texture2D.h"
#include "Camera.hpp"
#include "RenderTarget2D.h"
#include "Quad.h"
using namespace std;

class Game {
	Quad* quad;
	Texture2D* tex;
	Texture2D* autoTekstura;
	RenderTarget2D* rtTMO;
	RenderTarget2D* rt;

	Model* autoModel;
	Model* testModel;
	float posX;
	float posY;
	float posZ;
	float rotate;
	float speed;

	//pocisk
	float pociskX;
	float pociskY;
	float pociskrotate;
	bool pocisk;
	
	//kolizja
	bool kolizja;


	Model* sceneModelBox;
	int sceneWidth;
	int sceneHeight;


	Effect* shaderColor;
	Effect* shaderTMO;
	Effect* shaderTextureDrawer;
	Camera camera;
	glm::vec3 LightPosition;
	float theta;
public:
	Game(void);
	~Game(void);
	void Update();
	void Init();
	void Redraw();
	void Input();
	void drawScene( void );
};

