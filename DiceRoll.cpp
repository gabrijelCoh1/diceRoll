#include <iostream>
#include <ctime>
using namespace std;

void rollDice();

int main() {
    char roll;
    srand(time(0));

    rollDice();

    while (true) {
        cout << "Roll again? (y / n)" << endl;
        cin >> roll;

        if (roll == 'y' || roll == 'Y') {
            rollDice();
        } else {
            break;
        }

        
    }

    system("pause");
    return 0;
}

void rollDice() {
    int num = (rand() % 6) + 1;

    switch (num) {
        case 1:
            cout << "-----" << endl;
            cout << "|   |" << endl;
            cout << "| o |" << endl;
            cout << "|   |" << endl;
            cout << "-----" << endl;
            break;
        case 2:
            cout << "-----" << endl;
            cout << "|o  |" << endl;
            cout << "|   |" << endl;
            cout << "|  o|" << endl;
            cout << "-----" << endl;
            break;
        case 3:
            cout << "-----" << endl;
            cout << "|o  |" << endl;
            cout << "| o |" << endl;
            cout << "|  o|" << endl;
            cout << "-----" << endl;
            break;
        case 4:
            cout << "-----" << endl;
            cout << "|o o|" << endl;
            cout << "|   |" << endl; 
            cout << "|o o| " << endl;
            cout << "-----" << endl;
            break;
        case 5:
            cout << "-----" << endl;
            cout << "|o o|" << endl;
            cout << "| o |" << endl;
            cout << "|o o|" << endl;
            cout << "-----" << endl;
            break;
        case 6:
            cout << "-----" << endl;
            cout << "|o o|" << endl;
            cout << "|o o|" << endl;
            cout << "|o o|" << endl;
            cout << "-----" << endl;
            break;
    }
}
