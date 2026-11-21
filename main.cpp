
// Author:Intesar Qifayat
//Date: 10/09/2025
// CS1428 Lab
// Lab 5 – Treasure Hunt Adventure
// Description: You are exploring a dangerous cave system in search of treasure.
//              You will make choices to try to survive and escape with the loot.

#include <iostream>
#include <cstdlib>  // for rand(), srand()
#include <ctime>    // for time()
using namespace std;

int main()
{
    // Seed random number generator
    srand(time(0));

    int health = 100;
    int gold = 0;
    int choice;
    char keepExploring;
    //int random = rand() % (101)+(0);
    //srand(0);

    cout << "=== TREASURE HUNT ADVENTURE ===" << endl;
    cout << "You enter a dark cave in search of treasure..." << endl << endl;

    // TODO: Implement the game loop and actions described in Step 4.
    do {
        cout<<"Choose your action:"<<endl;

        cout<<"1.Search for gold"<<endl;
        cout<<"2.Fight a monster"<<endl;
        cout<<"3.Rest"<<endl;
        cout<<"Enter Choice(1-3):";

        cin>>choice;
        while (choice < 1 || choice > 3) {
            cout<<"Invalid Choice! Enter 1,2 or 3:";
            cin>>choice;
        }
        if(choice == 1) {

            int goldFound = rand()% (15-5+1)+10;
            int healthLost = rand()% (8-3+1) + 3;
            gold += goldFound;
            health -= healthLost;
            cout<<"You search dangerous areas and find "<< goldFound <<" gold, but lose " << healthLost <<  " health navigating! "<<endl;

        }
        else if (choice == 2) {
            int healthLost = rand()% (30-10+1)+10;
            health -= healthLost;
            cout<< "You fight a vicious monster and lose "<< healthLost << " health!" <<endl;
            int chance = rand() % 100;
            if (chance < 30)
            {
                int monsterGold = rand () % (20-10+1) + 10;
                gold += monsterGold;
                cout<<"You defeat the monster and find " <<monsterGold <<" gold on its body!"<<endl;

            }
        }
        else if (choice == 3) {
            int healthGain = rand() % (15-5+1) + 5;
            health += healthGain;
            if (health > 100)
                health = 100;

            cout << "You rest and recover "<< healthGain << " health" << endl;
        }
        cout<< "Current Health: "<< health << " | Gold: " << gold << endl << endl;
        if (health <= 0)
            break;
        cout << "Keep exploring? (y/n) :";
        cin >> keepExploring;
        cout<< endl;
    }while (keepExploring == 'y' || keepExploring == 'Y');
        if (health >= 0) {
            cout << "You have escaped with your treasure!" << endl;
            cout << "Final Health:"<< health << endl;
            cout<< "Final Gold:"<< gold << endl;
        }
        else {
            cout << "You did not survive your journey." << endl;
            cout << "Final Health:0" << endl;
            cout << "Final Gold:" << gold << endl;
        }


    return 0;
}
