#include <iostream>
#include <string>
#include <fstream>
#include "Pokemon.h"
using namespace std;

int numOptions = 4;

void getChoice(int& choice) {
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

int main() {

    cout << "Enter your name: ";
    string name;
    cin >> name;
    cout << "Hello " << name << "! Lets get started on your Pokemon journey.\n";

    int choice = 0;

    while (choice != numOptions) {
        mainMenu();
        getChoice(choice);
        switch (choice) {
            case 1:
                cout << "Now we're out to catch some pokemon!\n";
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