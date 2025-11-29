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

                if (q == 0) {
                cout << "your:= hammer\n";
            } else if (q == 1) {
                cout << "your:= paper\n";
            } else if (q == 2) {
                cout << "your:= scissors\n";
            } else {
                cout << "ERROR_404\n"; 
            }
        
            if (random1 == 0) {
                cout << "AI:= hammer";
            } else if (random1 == 1) {
                cout << "AI:= paper";
            } else if (random1 == 2) {
                cout << "AI:= scissors";
            }

            if (q == random1)
            {
                cout << "no one is win";
            } else if (q < random1 && random1 < 2) {
                cout << "AI is win";
            }
            


    return 0;
}