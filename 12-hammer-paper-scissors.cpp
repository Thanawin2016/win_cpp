#include <iostream>
#include <string>

using namespace std;

int main() {
    int q;

    // Get a different random number each time the program runs
    srand(time(0));

    // Generate a random integer
    int rawNumber1 = rand();
    int random1 = (rawNumber1 % 3);

    cout << "0 = :hammer: 1 = :paper: 2 = :scissors:\n";
    cout << ":Input your operation:";
    cin >> q;

    // Show your operation
    if (q == 0) {
        cout << "your:= hammer\n";
    } else if (q == 1) {
        cout << "your:= paper\n";
    } else if (q == 2) {
        cout << "your:= scissors\n";
    } else {
        cout << "ERROR_404\n"; 
    }

    // Show AI operation
    if (random1 == 0) {
        cout << "AI:= hammer\n";
    } else if (random1 == 1) {
        cout << "AI:= paper\n";
    } else if (random1 == 2) {
        cout << "AI:= scissors\n";
    }

    // Check winner
    if (q == random1) {
        cout << "No one is win";
    } else if (q == 0 && random1 == 1 || q == 1 && random1 == 2 || q == 2 && random1 == 0) {
        cout << "AI is win";
    } else {
        cout << "you is win";
    }

    return 0;
}