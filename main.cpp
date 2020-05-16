#include <iostream>
#include <string>
#include <fstream>
#include "Pokemon.h"
using namespace std;

int pokedex_size = 151;

Pokemon bulbasaur(1, "Bulbasaur", "Grass", "Poison", 16, 7);
Pokemon ivysaur(2, "Ivysaur", "Grass", "Poison", 32, 12);
Pokemon venusaur(3, "Venusaur", "Grass", "Poison", 0, 20);
Pokemon charmander(4, "Charmander", "Fire", "-", 16, 7);
Pokemon charmeleon(5, "Charmeleon", "Fire", "-", 36, 12);
Pokemon charizard(6, "Charizard", "Fire", "Flying", 0, 20);
Pokemon squirtle(7, "Squirtle", "Water", "-", 16, 7);
Pokemon wartortle(8, "Wartortle", "Water", "-", 36, 12);
Pokemon blastoise(9, "Blastoise", "Water", "-", 0, 20);
Pokemon caterpie(10, "Caterpie", "Bug", "-", 7, 2);
Pokemon metapod(11, "Metapod", "Bug", "-", 10, 4);
Pokemon butterfree(12, "Butterfree", "Bug", "Flying", 0, 8);
Pokemon weedle(13, "Weedle", "Bug", "Poison", 7, 2);
Pokemon kakuna(14, "Kakuna", "Bug", "Poison", 10, 4);
Pokemon beedrill(15, "Beedrill", "Bug", "Poison", 0, 8);
Pokemon pidgey(16, "Pidgey", "Normal", "Flying", 18, 3);
Pokemon pidgeotto(17, "Pidgeotto", "Normal", "Flying", 36, 8);
Pokemon pidgeot(18, "Pidgeot", "Normal", "Flying", 0, 15);
Pokemon ratatta(19, "Rattata", "Normal", "-", 20, 2);
Pokemon raticate(20, "Raticate", "Normal", "-", 0, 7);
Pokemon spearow(21, "Spearow", "Normal", "Flying", 20, 3);
Pokemon fearow(22, "Fearow", "Normal", "Flying", 0, 9);
Pokemon ekans(23, "Ekans", "Poison", "-", 22, 3);
Pokemon arkok(24, "Arbok", "Poison", "-", 0, 9);
Pokemon pikachu(25, "Pikachu", "Electric", "-", 25, 5);
Pokemon raichu(26, "Raichu", "Electric", "-", 0, 13);
Pokemon sandshrew(27, "Sandshrew", "Ground", "-", 22, 3);
Pokemon sandslash(28, "Sandslash", "Ground", "-", 0, 9);
Pokemon nidoran1(29, "Nidoran1", "Poison", "-", 16, 4);
Pokemon nidorina(30, "Nidorina", "Poison", "-", 32, 8);
Pokemon nidoqeen(31, "Nidoqueen", "Poison", "Ground", 0, 14);
Pokemon nidoran2(32, "Nidoran2", "Poison", "-", 16, 4);
Pokemon nidorino(33, "Nidorino", "Poison", "-", 32, 8);
Pokemon nidoking(34, "Nidoking", "Poison", "Ground", 0, 14);
Pokemon clefairy(35, "Clefairy", "Normal", "-", 24, 5);
Pokemon clefable(36, "Clefable", "Normal", "-", 0, 10);
Pokemon vulpix(37, "Vulpix", "Fire", "-", 25, 5);
Pokemon ninetales(38, "Ninetales", "Fire", "-", 0, 10);
Pokemon jigglypuff(39, "Jigglypuff", "Normal", "-", 24, 5);
Pokemon wigglytuff(40, "Wigglytuff", "Normal", "-", 0, 10);
Pokemon zubat(41, "Zubat", "Poison", "Flying", 22, 3);
Pokemon golbat(42, "Golbat", "Poison", "Flying", 0, 9);


void getChoice(int& choice, int numOptions) {
    cin >> choice;
    while ((choice < 1) || (choice > numOptions)) {
        cout << "Choose a valid option.\n";
        cin >> choice;
    }
    return;
}

void mainMenu() {
    cout << "What would you like to do?\n";
    cout << "\t1.) Go catch some Pokemon.\n";
    cout << "\t2.) Check your Pokedex.\n";
    cout << "\t3.) Save your game.\n";
    cout << "\t4.) Quit the game.\n";
    return;
}

void regionMenu() {
    cout << "\t1.) Cinnibar Island (fire and rock type pokemon)\n";
    cout << "\t2.) Cerulean City Lake (water and grass type pokemon)\n";
    cout << "\t3.) Power Plant (electric type)\n";
    cout << "\t4.) Celadon City Gardens (grass and poison types)\n";
    cout << "\t5.) Viridian Forest (bug and normal type)\n";
    cout << "\t6.) Lavender Town Tower (ghost and psychic type)\n";
    cout << "\t7.) Mount Moon (rock, ground, and fighting type)\n";
    cout << "\t8.) Safari Zone (all sorts of pokemon)\n";
    cout << "\n9.) Go back to main menu\n";
    return;
}

void goCatchPokemon(int numOptions) {
    cout << "What region do you want to catch pokemon in?\n";
    numOptions = 9;
    int decision = 0;
    while (decision != 9) {
        regionMenu();
        getChoice(decision, numOptions); 
        switch (decision) {
            case 1:
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                break;
            case 5:
                break;
            case 6:
                break;
            case 7:
                break;
            case 8:
                break;
            case 9:
                break;
        }
    }
    return;
}

int main() {

    cout << "Enter your name: ";
    string name;
    cin >> name;
    cout << "Hello " << name << "! Lets get started on your Pokemon journey.\n";

    int choice = 0;
    int numOptions = 4;

    while (choice != numOptions) {
        mainMenu();
        getChoice(choice, numOptions);
        switch (choice) {
            case 1:
                goCatchPokemon(numOptions);
                break;
            case 2:
                cout << "Let's check out your pokedex progress.\n";
                break;
            case 3:
                cout << "You've made progress, so lets save your game!\n";
            case 4:
                cout << "Quitting the game, thanks for playing!\n";
        }
    }

    return 0;
}