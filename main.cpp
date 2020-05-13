#include <iostream>
#include <string>
#include <fstream>
using namespace std;

void mainMenu(string name) {
    cout << "Hello " << name << "! Lets get started on your Pokemon journey. Play the game by selecting the numbers of the options below.\n";
    cout << "\t1.) Go catch some Pokemon.\n";
    cout << "\t2.) Check your Pokedex.\n";
    cout << "\t3.) Save your game.\n";
    cout << "\t4.) Quit game.\n";
    return;
}

int main() {

    cout << "Enter your name: ";
    string name;
    cin >> name;
    mainMenu(name);

    return 0;
}