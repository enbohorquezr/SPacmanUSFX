#pragma once
#include<iostream>
#include<vector>
#include<string>
#include <fstream>

#include "GameObject.h"
#include "Texture.h"
#include "Moneda.h"
#include "Fantasma.h"
#include "Pacman.h"
#include "Fruta.h"
#include "Pared.h"
#include "Recursos.h"


using namespace std;

class MapGenerator
{
private:
	vector<GameObject*> vectorObjetosJuego;

	const string pathPacman = "Resources/nuevos/pacman.png";
	const string pathFantasma1 = "Resources/nuevos/fantasma1.png";
	const string pathFantasma2 = "Resources/nuevos/fantasma2.png";
	const string pathFantasma3 = "Resources/nuevos/fantasma3.png";
	const string pathFantasma4 = "Resources/nuevos/fantasma4.png";
	const string pathFruta = "Resources/nuevos/medicamentos.png";
	const string pathMoneda = "Resources/nuevos/moneda.png"; 
	const string pathSuperMoneda = "Resources/nuevos/jeringa.png";
	//recursos laberinto
	const string pathPared = "Resources/nuevos/par_vert.png";
	const string pathParedH = "Resources/nuevos/par_hori.png";
	const string pathParedC = "Resources/nuevos/codo_sup_izq.png";
	const string pathParedC2 = "Resources/nuevos/codo_sup_derecho.png";
	const string pathParedC3 = "Resources/nuevos/codo_infe_izq.png";
	const string pathParedC4 = "Resources/nuevos/codo_infe_der.png";
	const string pathParedC5 = "Resources/nuevos/cierre_iz.png";
	const string pathParedC6 = "Resources/nuevos/cierre_der.png";
	const string pathRecursos = "Resources/pacmanM.png";
	//imagenes de apoyo
	const string pathRecursos1 = "Resources/SPRITE_PRUEBAPAC.png";
	const string pathRecursos2 = "Resources/berserker_layers_tool.png";
	const string pathRecursos3 = "Resources/medi_sprite.png";
	const string pathRecursos4 = "Resources/jeri_sprite.png";

	Texture* pacmanTexture;
	Texture* fantasma1Texture;
	Texture* fantasma2Texture;
	Texture* fantasma3Texture;
	Texture* fantasma4Texture;
	Texture* frutaTexture;
	Texture* monedaTexture;
	Texture* superMonedaTexture;
	Texture* paredTexture;
	Texture* paredHTexture;
	Texture* paredCTexture;
	Texture* paredC2Texture;
	Texture* paredC3Texture;
	Texture* paredC4Texture;
	Texture* paredC5Texture;
	Texture* paredC6Texture;
	Texture* recursosTexture;

	Texture* recursos1Texture;
	Texture* recursos2Texture;
	Texture* recursos3Texture;
	Texture* recursos4Texture;

	int anchoPantalla;
	int altoPantalla;
public:
	MapGenerator(int _anchoPantalla, int _altoPantalla);

	// carga el archivo con el mapa del nivel y todos los objetos
	bool load(string path);

	// carga los objetos generados por la clase MapGeneratos a un array de punteros a objetos GameObject*
	void populate(vector<GameObject*> &_vectorObjetosJuegoGM);
};

