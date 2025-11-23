#include <iostream>
#include <string>

using namespace std;

int main() {
    // Get a different random number each time the program runs
    srand(time(0));

    // Generate a random integer
    int rawNumber1 = rand();
    int random1 = (rawNumber1 % 3);

    if (random1 == 0) {
        cout << "AI:= hammer";
    } else if (random1 == 1) {
        cout << "AI:= paper";
    } else {
        cout << "AI:= scissors";
    }

    return 0;
}