#include "Biblioteca.h"
#include "Roman.h"
#include "Revista.h"
#include "Carte.h"

int main()
{
	Biblioteca b;
	(b += new Roman("DON QUIJOTE", "MIGUEL DE CERVANTES"))
		+= new Revista("Journal of Artificial Intelligence", 100);
	b += new Roman("MACBETH", "WILLIAM SHAKESPEARE");
	for (auto x : b)
	{
		std::cout << x->GetInfo() << std::endl;
	}
	std::cout << "Numar de intrari in biblioteca: "
		<< (int)b << std::endl;
	std::cout << "Lista doar cu romane:" << std::endl;
	b.PrintFilter([](Carte* c)->bool {
		// adaugati codul care determina daca o carte este un Roman
		auto* rom = dynamic_cast <Roman*>(c);
		if (rom != nullptr)
		{
			//asta este roman
			return true;
		}
		else
		{
			//asta nu este roman
			return false;
		}
		});
	return 0;
}