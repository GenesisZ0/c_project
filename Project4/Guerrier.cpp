#include "Guerrier.h"

Guerrier::Guerrier()
{

	setRage(100);
}

Guerrier::Guerrier(string n, int h, int f, int d, bool p, int r)
{
	setName(n);
	setHealth(h);
	setForce(f);
	setDefense(d);
	setPnj(p);
	setRage(r);

}

int Guerrier::getRage() const
{
	return rage;
}

void Guerrier::setRage(int r)
{
	rage = r;
	
}

void Guerrier::berserk()
{
	if (getRage() - 30 < 0) {
		cout << "pas asser de rage ";
	}
	else
	{
		
		int bonus = getHealth() / 2;
		setHealth(bonus);
		setForce(getForce() + bonus);
		setRage(getRage() - 30);
	}
	
}

ostream& operator<<(ostream& os, Guerrier const& p)
{
	os << "--- " << p.getName() << " ---" << endl;
	os << "Vie : " << p.getHealth() << endl;
	os << "Force : " << p.getForce() << endl;
	os << "Defense : " << p.getDefense() << endl;
	os << (p.getPnj() ? "non joueur" : "joueur") << endl;
	os << "Rage : " << p.getRage() << endl;
	return os;
}
