#include <iostream>
#include <string>

using namespace std;

int main() {
    int q;
    int w;

    // Get a different random number each time the program runs
    srand(time(0));

    // Generate a random integer
    int rawNumber1 = rand();
    int rawNumber2 = rand();

    int random1 = (rawNumber1 % 1000);
    int random2 = (rawNumber2 % 1000);

    cout << random1 << " + " << random2 << " = ";
    cin >> q;

    w = random1 + random2; 

    if (q == w ) {
        cout << "Your answer is correct";
    } else {
        cout << "Your answer is wrong, Answer is " << w;
    }



    return 0;
}