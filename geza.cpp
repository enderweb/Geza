#include <iostream>
#include <cstdlib>
#include <stdlib.h>
int main(){
using namespace std;
int attack;
string userName;
int monsterHealth = 10;
int difficulty;
int userHealth;
cout << "Welcome to Geza" << endl;
cout << "What difficulty do you want to play on?" << endl;
cout << "1 - Easy\n2 - Medium\n3 - Hard\n4 - Super Hard\n";
cin >> difficulty;
switch (difficulty) {
case 1:
        userHealth = 15;
        break;
case 2:
        userHealth = 10;
        break;
case 3:
        userHealth = 7;
        break;
case 4:
        userHealth = 5;
        break;
default:
        cout << "Select something else next time.\nI selected medium because you cant decide for yourself" << endl;
        userHealth = 10;
}
cout << "What is your name?" << endl;
cin >> userName;
cout << userName << ", you are about to fight a monster" << endl;
while (monsterHealth > 0 && userHealth > 0) {
cout << "What attack do you want?" << endl;
cout << "1 - Medium - Low risk\n2 - High risk, high reward\n3 - Medium Risk, medium reward" << endl;
cin >> attack;
if (attack == 1) {
        int monMax = 2;
        srand(time(0));
        int monRando = rand()%monMax;
        switch (monRando) {
        case 0:
                monsterHealth -= 5;
                break;
        case 1:
                monsterHealth -= 6;
                break;
        case 2:
                monsterHealth -= 2;
                break;
        }
        int max = 2;
        srand(time(0));
        int rando = rand()%max;
        switch (rando) {
        case 0:
                userHealth -= 5;
                break;
        case 1:
                userHealth -= 5;
                break;
        case 2:
                userHealth -= 5;
                break;
        }
        cout << "The monster's health is at " << monsterHealth << endl;
        cout << "Your health is at " << userHealth << endl;

} else if (attack == 2) {
        int monMax = 2;
        srand(time(0));
        int monRando = rand()%monMax;
        switch (monRando) {
        case 0:
                monsterHealth -= 1;
                break;
        case 1:
                monsterHealth -= 0;
                break;
        case 2:
                monsterHealth -= 10;
                break;
        }
        int max = 2;
        srand(time(0));
        int rando = rand()%max;
        switch (rando) {
        case 0:
                userHealth -= 6;
                break;
        case 1:
                userHealth -= 5;
                break;
        case 2:
                userHealth -= 4;
                break;
        }
        cout << "The monster's health is at " << monsterHealth << endl;
        cout << "Your health is at " << userHealth << endl;
} else if (attack == 3) {
                int monMax = 2;
                srand(time(0));
                int monRando = rand()%monMax;
        switch (monRando) {
        case 0:
                monsterHealth -= 5;
                break;
        case 1:
                monsterHealth -= 4;
                break;
        case 2:
                monsterHealth -= 8;
                break;
        }
                int max = 2;
        srand(time(0));
        int rando = rand()%max;
        switch (rando) {
        case 0:
                userHealth -= 6;
                break;
        case 1:
                userHealth -= 5;
                break;
        case 2:
                userHealth -= 4;
                break;
        }
        cout << "The monster's health is at " << monsterHealth << endl;
        cout << "Your health is at " << userHealth << endl;
        } else {
                cout << "Select 1 or 2 or 3 next time idiot." << endl;
        }
}

if (monsterHealth < 1) {
        cout << "The monster is dead. You win." << endl;
}
if (userHealth < 1) {
        cout << "You are dead. You lose." << endl;
}
if (monsterHealth < 1 && userHealth < 1) {
        cout << "You both lost but ";
        if (userHealth > monsterHealth) {
                cout << "the monster lost worse";
        }
        if (monsterHealth > userHealth) {
                cout << "you lost worse";
        }
        if (monsterHealth == userHealth) {
                cout << "you both lost equally";
        }
}
return 0;
}

