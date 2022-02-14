#include "Personnage.h"
#include "Guerrier.h"

Personnage::Personnage()
{
    setName("Default");
    setHealth(100);
    setForce(50);
    setDefense(10);
    setPnj(true);
}

Personnage::Personnage(string n, int h, int f, int d, bool p)
{
    setName(n);
    setHealth(h);
    setForce(f);
    setDefense(d);
    setPnj(p);
}

string Personnage::getName() const
{
    return name;
}

void Personnage::setName(string n)
{
    if (n.size() <= 0 || n.size() >= 100) {
        name = "BadSize";
    }
    else {
        name = n;
    }
}

int Personnage::getHealth() const
{
    return health;
}

void Personnage::setHealth(int h)
{
    if (h < 0 || h >= 10000) {
        health = 0;
    }
    else {
        health = h;
    }
}

int Personnage::getForce() const
{
    return force;
}

void Personnage::setForce(int f)
{
    if (f < 0 || f >= 10000) {
        force = 0;
    }
    else {
        force = f;
    }
}

int Personnage::getDefense() const
{
    return defense;
}

void Personnage::setDefense(int d)
{
    if (d < 0 || d >= 10000) {
        defense = 0;
    }
    else {
        defense = d;
    }
}

bool Personnage::getPnj() const
{
    return pnj;
}

void Personnage::setPnj(bool p)
{
    pnj = p;
}

void Personnage::attack(Personnage& enemy)
{
    int damage = getForce() - enemy.getDefense();
    if (damage > 0) {
        enemy.setHealth(enemy.getHealth() - damage);
    }
}

bool Personnage::operator>(Personnage& target)
{
    return getName().size() > target.getName().size();
}

bool Personnage::operator<(Personnage& target)
{
    return !(getName().size() > target.getName().size());
}

ostream& operator<<(ostream& os, Personnage const& p)
{
    os << "--- " << p.getName() << " ---" << endl;
    os << "Vie : " << p.getHealth() << endl;
    os << "Force : " << p.getForce() << endl;
    os << "Defense : " << p.getDefense() << endl;
    os << (p.getPnj() ? "non joueur" : "joueur") << endl << endl;
    return os;
}