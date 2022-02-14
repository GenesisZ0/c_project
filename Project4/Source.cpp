#include "Personnage.h"
#include "Guerrier.h"

int main() {
    SetConsoleOutputCP(1252);    //Activation des accents

    //Construction par defaut
    Personnage p1;

    //Construction par defaut + modification des variables
    Personnage p2;
    p2.setName("Gerard");
    p2.setHealth(80);
    p2.setForce(20);
    p2.setDefense(2);
    p2.setPnj(false);

    //Construction surcharge
    Personnage p3("Theo", 50, 30, 15, true);

    //Affichage des infos
    cout << "infos de P1 : " << endl << p1;
    cout << "infos de P2 : " << endl << p2;
    cout << "infos de P3 : " << endl << p3;

    //p3 attaque p2
    p3.attack(p2);
    cout << "infos de P2 : " << endl << p2;

    //Comparaison entre le name de p2 et p3
    if (p2 > p3) cout << "p2 superieur a p3";
    else cout << "p2 inferieur a p3" << endl;
 
    

    Guerrier g2("bernart", 100, 20, 60, true, 100);

    cout << g2;
    cout << p2;

    int c;
    cin >> c;
    
    while (p2.getHealth <=0)
    {

    }
    switch (c)
        
    {
    
    default:
        cout << "test" << endl;
        break;

    case 1:
        g2.attack(p2);
        cout << g2;
        cout << p2;
        
        break;
    case 2 :
        g2.berserk();
        cout << g2;
        cout << p2;
       
        break;
        

    }

   
    


}
