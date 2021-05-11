#include "Moneda.h"

Moneda::Moneda(Texture* _monedaTextura, int _posicionX, int _posicionY, int _ancho, int _alto, int _anchoPantalla, int _altoPantalla) :
	GameObject(_monedaTextura, _posicionX, _posicionY, _ancho, _alto, _anchoPantalla, _altoPantalla)
{
	// Inicializa propiedade de de pacman
	valor = 1;
	tipoPoderMoneda = PODER_MONEDA_NINGUNO;
	tiempoPoderMoneda = 0;
}


void Moneda::render()
{
	SDL_Rect renderQuad = {
	   250 * numeroFrame,0,getAncho(),getAlto()
	};
	//renderizar pantalla
	textura->render(getPosicionX(), getPosicionY(), &renderQuad);
}
