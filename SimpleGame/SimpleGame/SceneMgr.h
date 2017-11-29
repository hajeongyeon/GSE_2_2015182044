#pragma once

#include <iostream>
#include "GameObject.h"
#include "Renderer.h"

class SceneMgr
{
private:
	Renderer* renderer;
	
	GameObject* Bgr;
	GameObject* buildingObj[6];
	GameObject* actorObj[MAX_OBJ_COUNT];
	GameObject* bulletObj[MAX_BL_COUNT];

	GLuint textureBuilding1;
	GLuint textureBuilding2;
	GLuint textureBgr;
	GLuint textureRabbit;
	GLuint textureDog;

	float team1time, team2time, testtime;
	int rabbitX, DogX, DogY;

public:
	SceneMgr();
	~SceneMgr();

	void DrawSolidRect();

	void AddBuildingObj();
	int AddObj(float x, float y, int type, int team);
	void UpdateObj(float elapsedTime);
	void DeleteObj(int idx);

	void Collision();
	bool CollisionRect(float minX, float minY, float maxX, float maxY, float minX1, float minY1, float maxX1, float maxY1);

	float getTeam2Time() { return team2time; }
};

