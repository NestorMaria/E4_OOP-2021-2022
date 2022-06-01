#include "Masina.h"
#include "MasinaOras.h"
#include "SUV.h"
#include "RangeRover.h"
#include "Dacia.h"
#include "Opel.h"


int main()
{
	Opel o;
	o.setCapacitate(100);
	o.setCuloare("rosu");
	o.setAnFabricatie(2000);
	MasinaOras* m = &o;
	cout << m->getName() << "," << m->getCuloare()
		<< "," << m->getCapacitate()
		<< o.getAnFabricatie() << endl;
	return 0;
}