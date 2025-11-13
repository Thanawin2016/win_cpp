#include <iostream>
#include <string>

using namespace std;

int main() {
    // Get a different random number each time the program runs
    srand(time(0));

    // Generate a random integer
    
    int rawNumber1 = rand();
    int rawNumber2 = rand(); 

    cout << "RawNumber1 = " << rawNumber1 << "\n";
    cout << "RawNumber2 = " << rawNumber2 << "\n";

    int random1 = (rawNumber1 % 6) + 1;
    int random2 = (rawNumber2 % 6) + 1;

    cout << "Random1 = " << random1 << "\n";
    cout << "Random2 = " << random2 << "\n";

    cout << "TOTAL = " << random1 << " + " << random2 << " = "  << random1 +  random2  ;

    return 0;
}