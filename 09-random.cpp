#include <iostream>
#include <string>

using namespace std;

int main() {
    // Get a different random number each time the program runs
    srand(time(0));

    // Generate a random integer
    
    int rawNumber = rand(); 

    cout << "RawNumber = " << rawNumber << "\n";

    int random = rawNumber % 6;

    cout << "Random = " << random << "\n";

    return 0;
}