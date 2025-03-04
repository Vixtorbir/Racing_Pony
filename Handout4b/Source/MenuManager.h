
#pragma once

#include "Globals.h"
#include "Module.h"
#include "p2Point.h"
#include "raylib.h"
#include <vector>

class MenuManager
{
public:
	MenuManager();
	~MenuManager();
	void LoadAssets();
	void DrawMainMenu();
	void DrawCharacterSelectMenu(int selectedCharacter);
	void DrawMapSelectMenu(int selectedMap);
	void DrawGameModeSelectionMenu(int selectedMode);
	void DrawPauseMenu();
	void DrawGameOverMenu();
	void DrawWinMenu();
	void DrawInstructions();
	void CleanUp();

	Texture2D GetCharacter1Texture() const;

	Texture2D GetCharacter2Texture() const;

	Texture2D GetCharacter3Texture() const;

	Texture2D GetCharacter4Texture() const;

	Texture2D GetCharacter5Texture() const;

	Texture2D GetMap1Full() const;

	Texture2D GetMap2Full() const;

public:

	Texture2D mainMenuTexture;
	Texture2D pauseMenuTexture;
	Texture2D gameOverMenuTexture;
	Texture2D Win;

	Texture2D map1Preview;
	Texture2D map2Preview;
	Texture2D map1Full;
	Texture2D map2Full;
	Texture2D NormalMode;
	Texture2D GreenRedMode;
	Texture2D instructions;

	Texture2D map1Background;
	Texture2D map2Background;

	Texture2D character1Texture;
	Texture2D character2Texture;
	Texture2D character3Texture;
	Texture2D character4Texture;
	Texture2D character5Texture;
};