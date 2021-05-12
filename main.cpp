#include <iostream>
#include "Veiculo.h"
#include <locale.h>
using namespace std;

int main() {

	Veiculo *terr, *aqua, *aereo;

	terr = new Terrestre("VT1");
	aqua = new Aquatico("VQ1");
	aereo = new Aereo("VA1");

//    ((Terrestre*)terr)->setCapMax(45);
	dynamic_cast<Terrestre*>(terr)->setCapMax(45);
//    ((Aquatico*)aqua)->setCargaMax(12.5);
	dynamic_cast<Aquatico*>(aqua)->setCargaMax(12.5);
//  ((Aereo*)aereo)->setVelMax(1040.5);
	dynamic_cast<Aereo*>(aereo)->setVelMax(1040.5);

	terr->mover();
	aqua->mover();
	aereo->mover();

	delete terr;
	delete aqua;
	delete aereo;

	Veiculo *anfi = new Anfibio("VANF");
	anfi->mover();
	delete anfi;
	return 0;
}
